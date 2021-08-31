#include "ChoiceDisassemblePart.h"
#include "ui_ChoiceDisassemblePart.h"

#include <QDebug>
#include <QMessageBox>
#include "ProductResources.h"
#include "ShowProductProcess.h"

ChoiceDisassemblePart::ChoiceDisassemblePart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChoiceDisassemblePart)
{
    ui->setupUi(this);

    d.partList.append(ui->partBtnA);
    d.partList.append(ui->partBtnB);
    d.partList.append(ui->partBtnC);
    d.partList.append(ui->partBtnD);
}

ChoiceDisassemblePart::~ChoiceDisassemblePart()
{
    delete ui;
}
//选择维修的零件窗体重置数据函数：在每次显示前调用，用于重置被修改的数据
void ChoiceDisassemblePart::setData()
{
    d.part_index = 0;
    d.onePart = ProductResources::instance().data().oneReplace;
    d.twoPart = ProductResources::instance().data().twoReplace;

    ui->nextBtn->setEnabled(false);
    ui->previewBtn->setIcon(QIcon());
}
//选择维修的零件窗体显示零件函数：显示被选择替换的零件和显示被选中的零件预览图
void ChoiceDisassemblePart::showParts()
{
    bool topRightEnable = false;
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        for(int i = 0; i < d.partList.size(); ++i) {
            if(d.part_index * d.partList.size() + i < d.onePart.size()) {
                d.partList[i]->setIcon(QIcon(d.onePart[d.part_index * d.partList.size() + i].pixmap));
            } else {
                d.partList[i]->setIcon(QIcon());
            }
        }

        topRightEnable = (d.part_index + 1) * d.partList.size() < d.onePart.size();
        break;
    case ProductTypeTwo:
        for(int i = 0; i < d.partList.size(); ++i) {
            if(d.part_index * d.partList.size() + i < d.twoPart.size()) {
                d.partList[i]->setIcon(QIcon(d.twoPart[d.part_index * d.partList.size() + i].pixmap));
            } else {
                d.partList[i]->setIcon(QIcon());
            }
        }

        topRightEnable = (d.part_index + 1) * d.partList.size() < d.twoPart.size();
        break;
    }

    ui->topPartLeftBtn->setEnabled(d.part_index > 0);
    ui->topPartRightBtn->setEnabled(topRightEnable);
}
//选择维修的零件窗体选择替换零件函数：更改选中的替换零件
void ChoiceDisassemblePart::selectPart(int index)
{
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        if(d.part_index * d.partList.size() + index >= d.onePart.size()) { return; }
        ui->previewBtn->setIcon(QIcon(d.onePart[d.part_index * d.partList.size() + index].pixmap));
        d.oneReplace = d.onePart[d.part_index * d.partList.size() + index].flag;
        d.preview = d.onePart[d.part_index * d.partList.size() + index].pixmap;

        break;
    case ProductTypeTwo:
        if(d.part_index * d.partList.size() + index >= d.twoPart.size()) { return; }
        ui->previewBtn->setIcon(QIcon(d.twoPart[d.part_index * d.partList.size() + index].pixmap));
        d.twoReplace = d.twoPart[d.part_index * d.partList.size() + index].flag;
        d.preview = d.twoPart[d.part_index * d.partList.size() + index].pixmap;

        break;
    }

    ui->nextBtn->setEnabled(true);
    showParts();
}

void ChoiceDisassemblePart::on_topPartLeftBtn_clicked()
{
    if(d.part_index < 1) {
        ui->topPartLeftBtn->setEnabled(false);
        return;
    }

    --d.part_index;
    showParts();
}

void ChoiceDisassemblePart::on_topPartRightBtn_clicked()
{
    int size = 0;
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        size = d.onePart.size();
        break;
    case ProductTypeTwo:
        size = d.twoPart.size();
        break;
    }

    if(!((d.part_index + 1) * d.partList.size() < size)) {
        ui->topPartRightBtn->setEnabled(false);
        return;
    }

    ++d.part_index;
    showParts();
}

void ChoiceDisassemblePart::on_partBtnA_clicked()
{
    selectPart(0);

    if(ui->partBtnA->icon().isNull() && d.part_index > 0) {
        --d.part_index;
        showParts();
    }
}

void ChoiceDisassemblePart::on_partBtnB_clicked()
{
    selectPart(1);
}

void ChoiceDisassemblePart::on_partBtnC_clicked()
{
    selectPart(2);
}

void ChoiceDisassemblePart::on_partBtnD_clicked()
{
    selectPart(3);
}

void ChoiceDisassemblePart::on_nextBtn_clicked()
{
    QMessageBox box(this);
    box.setWindowTitle(QString("选择待替换的零件"));

    QString text("是否维修零件(%1)？");
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        text = text.arg(productOnePartString(d.oneReplace));
        break;
    case ProductTypeTwo:
        text = text.arg(productTwoPartString(d.twoReplace));
        break;
    }

    box.setText(text);
    box.setIconPixmap(d.preview.scaled(d.preview.width() / 3, d.preview.height() / 3));

    QPushButton *yesBtn = box.addButton(QString("是"), QMessageBox::YesRole);
    box.addButton(QString("否"), QMessageBox::NoRole);

    box.exec();
    if(box.clickedButton() == yesBtn) {
        switch (ProductResources::instance().currentProduct()) {
        case ProductTypeOne:
            ProductResources::instance().data().one_replace_part = d.oneReplace;
            break;
        case ProductTypeTwo:
            ProductResources::instance().data().two_replace_part = d.twoReplace;
            break;
        }

        setVisible(false);
        ProductResources::instance().showProductProcess()->reset();
        ProductResources::instance().showProductProcess()->loadResources();
        ProductResources::instance().showProductProcess()->setVisible(true);
    }
}
