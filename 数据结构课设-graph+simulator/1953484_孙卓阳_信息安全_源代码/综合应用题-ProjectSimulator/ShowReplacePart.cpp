#include "ShowReplacePart.h"
#include "ui_ShowReplacePart.h"

#include <QTimer>
#include <QDebug>

ShowReplacePart::ShowReplacePart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowReplacePart)
{
    ui->setupUi(this);
    d.timer = new QTimer(this);
    d.timer->setInterval(3000);
    d.timer->setSingleShot(true);
    connect(d.timer, &QTimer::timeout, [&]() {
        setVisible(false);
        emit sHide();
    });
}

ShowReplacePart::~ShowReplacePart()
{
    delete ui;
}
//替换零件展示窗体 设置被替换的零件函数：设置需要替换的零件图片
void ShowReplacePart::set(const QPixmap &icon, const QString &text)
{
    ui->previewBtn->setIcon(QIcon(icon));
    ui->textLabel->setText(QString("使用%1零件替换%1").arg(text));
    d.timer->start();
}
