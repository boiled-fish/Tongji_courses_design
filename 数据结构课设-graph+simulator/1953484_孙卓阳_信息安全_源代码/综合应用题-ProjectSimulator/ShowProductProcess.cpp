#include "ShowProductProcess.h"
#include "ui_ShowProductProcess.h"

#include <QDebug>
#include "ProductResources.h"
#include "ShowReplacePart.h"
#include "MainWindow.h"

ShowProductProcess::ShowProductProcess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowProductProcess)
{
    ui->setupUi(this);

    d.btns.append(ui->partBtnA);
    d.btns.append(ui->partBtnB);
    d.btns.append(ui->partBtnC);
    d.btns.append(ui->partBtnD);

    d.timer = new QTimer(this);
    d.timer->setInterval(1000);

    connect(d.timer, SIGNAL(timeout()),
            this, SLOT(nextPicture()));
}

ShowProductProcess::~ShowProductProcess()
{
    delete ui;
}
//显示产品拆卸过程窗体 加载资源函数：在显示装配过程前加载资源，以便于可以不卡顿显示
void ShowProductProcess::loadResources()
{
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        loadProductOne();
        break;
    case ProductTypeTwo:
        loadProductTwo();
        break;
    }

    showParts();
    d.timer->start();
}
//显示产品拆卸过程窗体 零件显示函数：窗体正上方零件显示
void ShowProductProcess::showParts()
{
    bool topRightEnable = (d.btn_index + 1) * d.btns.size() < d.part.size();

    for(int i = 0; i < d.btns.size(); ++i) {
        if(d.btn_index * d.btns.size() + i < d.part.size()) {
            d.btns[i]->setIcon(QIcon(d.part[d.btn_index * d.btns.size() + i]));
        } else {
            d.btns[i]->setIcon(QIcon());
        }
    }

    ui->topPartLeftBtn->setEnabled(d.btn_index > 0);
    ui->topPartRightBtn->setEnabled(topRightEnable);
}
//显示产品拆卸过程窗体 重置函数：在每次显示前调用，用于重置被修改的数据
void ShowProductProcess::reset()
{
    d.current_index = 0;
    d.index = 0;
    d.btn_index = 0;
    d.dismount.clear();
    d.part.clear();

    ui->returnBtn->setEnabled(false);
    ui->previewBtn->setIcon(QIcon());
}
//显示产品拆卸过程窗体 下一张图片函数：显示下一张图片，内嵌了展示替换零件窗体
void ShowProductProcess::nextPicture()
{
    if(d.current_index == d.index) {
        connect(ProductResources::instance().showReplacePart(), &ShowReplacePart::sHide, [&](){
            d.timer->start();
        });
        ProductResources::instance().showReplacePart()->set(d.replace_part, QString(""));
        ProductResources::instance().showReplacePart()->setVisible(true);
        d.timer->stop();
    }

    ui->previewBtn->setIcon(QIcon(d.dismount[d.current_index++]));

    if(d.current_index >= d.dismount.size()) {
        ui->returnBtn->setEnabled(true);
        d.timer->stop();
    }
}

void ShowProductProcess::loadProductOne()
{
    int index = 0;
    QList<ProductOneFlag> &list = ProductResources::instance().data().oneOrder;
    //qDebug() << list.size();

    ProductOneFlags flags = ProductOneFlagScheme;
    ProductOneFlags used = ProductOneFlagAll;
    QList<bike_one_assembly_process_t> *assembly = nullptr;

    d.replace_part = ProductResources::instance().oneReplace(ProductResources::instance().data().one_replace_part);

    // 拆卸
    assembly = &ProductResources::instance().oneAssemblyProcess(flags);
    d.dismount.append(ProductResources::instance().oneAssemblyProcessFindFlag(*assembly, used));
    for(index = list.size() - 1; index > -1; --index) {
        used ^= list[index];
        //qDebug() << "A: used: " << used << " list[index]: " << list[index];
        d.dismount.append(ProductResources::instance().oneAssemblyProcessFindFlag(*assembly, used));

        d.index++;

        if(list[index] == ProductResources::instance().data().one_replace_part) {
            flags |= list[index];
            break;
        }
    }

    assembly = &ProductResources::instance().oneAssemblyProcess(flags);
    for(; index < list.size(); ++index) {
        used |= list[index];
        //qDebug() << "B: used: " << used << " list[index]: " << list[index];
        d.dismount.append(ProductResources::instance().oneAssemblyProcessFindFlag(*assembly, used));
    }

    d.dismount.append(ProductResources::instance().oneAssemblyProcessFindFlag(*assembly, ProductOneFlagAll));

    for(int i = 0; i < list.size(); ++i) {
        d.part.append(ProductResources::instance().onePart(list[i]));
    }

    ui->previewBtn->setIcon(d.dismount[0]);
}

void ShowProductProcess::loadProductTwo()
{
    int index = 0;
    QList<ProductTwoFlag> &list = ProductResources::instance().data().twoOrder;
    //qDebug() << list.size();

    ProductTwoFlags flags = ProductTwoFlagScheme;
    ProductTwoFlags used = ProductTwoFlagAll;
    QList<bike_two_assembly_process_t> *assembly = nullptr;

    d.replace_part = ProductResources::instance().twoReplace(ProductResources::instance().data().two_replace_part);

    // 拆卸
    assembly = &ProductResources::instance().twoAssemblyProcess(flags);
    d.dismount.append(ProductResources::instance().twoAssemblyProcessFindFlag(*assembly, used));
    for(index = list.size() - 1; index > -1; --index) {
        used ^= list[index];
        //qDebug() << "A - used: " << used << " - list[index]: " << list[index];
        d.dismount.append(ProductResources::instance().twoAssemblyProcessFindFlag(*assembly, used));

        d.index++;

        if(list[index] == ProductResources::instance().data().two_replace_part) {
            flags |= list[index];
            break;
        }
    }

    assembly = &ProductResources::instance().twoAssemblyProcess(flags);
    for(; index < list.size(); ++index) {
        used |= list[index];
        //qDebug() << "B - used: " << used << " - list[index]: " << list[index];
        d.dismount.append(ProductResources::instance().twoAssemblyProcessFindFlag(*assembly, used));
    }

    d.dismount.append(ProductResources::instance().twoAssemblyProcessFindFlag(*assembly, ProductTwoFlagAll));

    //qDebug() << "list.size(): " << list.size();
    for(int i = 0; i < list.size(); ++i) {
        d.part.append(ProductResources::instance().twoPart(list[i]));
    }

    ui->previewBtn->setIcon(d.dismount[0]);
}

void ShowProductProcess::on_topPartLeftBtn_clicked()
{
    if(d.btn_index < 1) {
        ui->topPartLeftBtn->setEnabled(false);
        return;
    }

    --d.btn_index;
    showParts();
}

void ShowProductProcess::on_topPartRightBtn_clicked()
{
    if(!((d.btn_index + 1) * d.btns.size() < d.part.size())){
        ui->topPartRightBtn->setEnabled(false);
        return;
    }

    ++d.btn_index;
    showParts();
}

void ShowProductProcess::on_returnBtn_clicked()
{
    ProductResources::instance().mainWindow()->setVisible(true);
    setVisible(false);
}
