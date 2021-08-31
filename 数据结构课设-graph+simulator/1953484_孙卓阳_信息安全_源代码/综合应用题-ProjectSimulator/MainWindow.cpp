#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>
#include <QThread>
#include <QMessageBox>

#include "CustomAssemblyOrder.h"
#include "ChoiceDisassemblePart.h"

class LoadResources : public QThread {
public:
    LoadResources(QObject *parent = nullptr) : QThread(parent) {}

protected:
    void run() override {
        qDebug() << "线程启动";
        ProductResources::instance().loadResources();
        qDebug() << "加载完成";
        this->quit();
    }
};
//主窗体构造函数：内部增加了资源加载线程，以便于主窗体内部件在等待加载时可以触发事件
MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LoadResources *load = new LoadResources(this);
    load->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//主窗体点击事件函数：选择产品时显示后续的 是否自定义装配顺序 窗体的显示
void MainWindow::ButtonEvent(ProductType type)
{
    if(!ProductResources::instance().isLoaded()) {
        QMessageBox::information(this, QString("提示"),
                                 QString("资源加载还未完成，请稍候！"));
        return;
    }

    ProductResources::instance().currentProduct() = type;

    QMessageBox box(this);
    box.setWindowTitle(QString("是否自定义装配顺序"));
    box.setText(QString("是否自定义装配顺序？"));
    QPushButton *yesBtn = box.addButton(QString("是"), QMessageBox::YesRole);
    box.addButton(QString("否"), QMessageBox::NoRole);

    box.exec();
    if(box.clickedButton() == yesBtn) {
        setVisible(false);
        ProductResources::instance().customAssemblyOrder()->setZeroForIndex();
        ProductResources::instance().customAssemblyOrder()->showParts();
        ProductResources::instance().customAssemblyOrder()->setVisible(true);
    } else {
        ProductResources::instance().choiceDisassemblePart()->setData();
        ProductResources::instance().choiceDisassemblePart()->showParts();
        ProductResources::instance().choiceDisassemblePart()->setVisible(true);
        setVisible(false);
    }

}

void MainWindow::on_btn1_clicked()
{
    ButtonEvent(ProductTypeOne);
}

void MainWindow::on_btn2_clicked()
{
    ButtonEvent(ProductTypeTwo);
}
