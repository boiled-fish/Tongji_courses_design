#include "CustomAssemblyOrder.h"
#include "ui_CustomAssemblyOrder.h"

#include <QDebug>
#include "ProductResources.h"
#include "ChoiceDisassemblePart.h"

CustomAssemblyOrder::CustomAssemblyOrder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomAssemblyOrder)
{
    ui->setupUi(this);

    d.partList.append(ui->partBtnA);
    d.partList.append(ui->partBtnB);
    d.partList.append(ui->partBtnC);
    d.partList.append(ui->partBtnD);

    d.orderList.append(ui->customBtnA);
    d.orderList.append(ui->customBtnB);
    d.orderList.append(ui->customBtnC);
    d.orderList.append(ui->customBtnD);

}

CustomAssemblyOrder::~CustomAssemblyOrder()
{
    delete ui;
}
//自定义装配顺序界面显示零件函数：显示和刷新原装零件和自定义顺序后的零件
void CustomAssemblyOrder::showParts()
{
    QList<bike_one_part_t> &onelist = d.onePart;
    QList<bike_two_part_t> &twolist = d.twoPart;

    bool topRightEnable = false, bottomRightEnable = false;
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        for(int i = 0; i < d.partList.size(); ++i) {
            if(d.part_index * d.partList.size() + i < onelist.size()) {
                d.partList[i]->setIcon(QIcon(onelist[d.part_index * d.partList.size() + i].pixmap));
            } else {
                d.partList[i]->setIcon(QIcon());
            }
        }

        for(int i = 0; i < d.orderList.size(); ++i) {
            if(d.order_index * d.orderList.size() + i < d.oneOrder.size()) {
                d.orderList[i]->setIcon(QIcon(d.oneOrder[d.order_index * d.orderList.size() + i].pixmap));
            } else {
                d.orderList[i]->setIcon(QIcon());
            }
        }

        topRightEnable = (d.part_index + 1) * d.partList.size() < d.onePart.size();
        bottomRightEnable = (d.order_index + 1) * d.orderList.size() < d.oneOrder.size();
        break;
    case ProductTypeTwo:
        for(int i = 0; i < d.partList.size(); ++i) {
            if(d.part_index * d.partList.size() + i < twolist.size()) {
                d.partList[i]->setIcon(QIcon(twolist[d.part_index * d.partList.size() + i].pixmap));
            } else {
                d.partList[i]->setIcon(QIcon());
            }
        }

        for(int i = 0; i < d.orderList.size(); ++i) {
            if(d.order_index * d.orderList.size() + i < d.twoOrder.size()) {
                d.orderList[i]->setIcon(QIcon(d.twoOrder[d.order_index * d.orderList.size() + i].pixmap));
            } else {
                d.orderList[i]->setIcon(QIcon());
            }
        }

        topRightEnable = (d.part_index + 1) * d.partList.size() < d.twoPart.size();
        bottomRightEnable = (d.order_index + 1) * d.orderList.size() < d.twoOrder.size();
        break;
    }


    ui->topPartLeftBtn->setEnabled(d.part_index > 0);
    ui->topPartRightBtn->setEnabled(topRightEnable);

    ui->customLeftBtn->setEnabled(d.order_index > 0);
    ui->customRightBtn->setEnabled(bottomRightEnable);
}
//自定义装配顺序界面数据重置函数：在每次显示前调用，用于重置被修改的数据
void CustomAssemblyOrder::setZeroForIndex()
{
    d.part_index = 0;
    d.order_index = 0;

    d.oneOrder.clear();
    d.twoOrder.clear();
    d.onePart = ProductResources::instance().data().onePart;
    d.twoPart = ProductResources::instance().data().twoPart;

    int index = -1;
    // 产品1 车架移入顺序链表
    for(int i = 0; i < d.onePart.size(); ++i) {
        if(d.onePart[i].flag == ProductOneFlagFrame) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        throw QString("%1 - onelist index is -1.").arg(__FUNCTION__);
    }

    d.oneOrder.append(d.onePart[index]);
    d.onePart.removeAt(index);

    // 产品2 车架移入顺序链表
    index = -1;
    for(int i = 0; i < d.twoPart.size(); ++i) {
        if(d.twoPart[i].flag == ProductTwoFlagFrame) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        throw QString("%1 - twolist index is -1.").arg(__FUNCTION__);
    }

    d.twoOrder.append(d.twoPart[index]);
    d.twoPart.removeAt(index);

    ui->nextBtn->setEnabled(false);
    ui->previewBtn->setIcon(QIcon());
}
//自定义装配顺序界面将配件移入自定义顺序列表函数：将配件移入自定义顺序列表
void CustomAssemblyOrder::movePartToOrder(int index)
{
    bool btnEnable = true;
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        if(d.part_index * d.partList.size() + index >= d.onePart.size()) { return; }

        if(d.onePart[(d.part_index * d.partList.size()) + index].flag == ProductOneFlagChain) {
            for(int i = 0; i < d.onePart.size(); ++i) {
                if(d.onePart[i].flag == ProductOneFlagEngine ||
                        d.onePart[i].flag == ProductOneFlagRear) {
                    return;
                }
            }
        }

        ui->previewBtn->setIcon(QIcon(d.onePart[d.part_index * d.partList.size() + index].pixmap));
        d.oneOrder.append(d.onePart[d.part_index * d.partList.size() + index]);
        d.onePart.removeAt(d.part_index * d.partList.size() + index);
        btnEnable = d.onePart.size() > 0;
        break;
    case ProductTypeTwo:
        if(d.part_index * d.partList.size() + index >= d.twoPart.size()) { return; }

        if(d.twoPart[(d.part_index * d.partList.size()) + index].flag == ProductTwoFlagChain) {
            for(int i = 0; i < d.twoPart.size(); ++i) {
                if(d.twoPart[i].flag == ProductTwoFlagRear) {
                    return;
                }
            }
        }

        ui->previewBtn->setIcon(QIcon(d.twoPart[d.part_index * d.partList.size() + index].pixmap));
        d.twoOrder.append(d.twoPart[d.part_index * d.partList.size() + index]);
        d.twoPart.removeAt(d.part_index * d.partList.size() + index);

        btnEnable = d.twoPart.size() > 0;
        break;
    }

    ui->nextBtn->setEnabled(!btnEnable);
    showParts();
}

void CustomAssemblyOrder::on_topPartLeftBtn_clicked()
{
    if(d.part_index < 1) {
        ui->topPartLeftBtn->setEnabled(false);
        return;
    }

    --d.part_index;
    showParts();
}

void CustomAssemblyOrder::on_topPartRightBtn_clicked()
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

void CustomAssemblyOrder::on_partBtnA_clicked()
{
    movePartToOrder(0);

    if(ui->partBtnA->icon().isNull() && d.part_index > 0) {
        --d.part_index;
        showParts();
    }
}

void CustomAssemblyOrder::on_partBtnB_clicked()
{
    movePartToOrder(1);
}

void CustomAssemblyOrder::on_partBtnC_clicked()
{
    movePartToOrder(2);
}

void CustomAssemblyOrder::on_partBtnD_clicked()
{
    movePartToOrder(3);
}

void CustomAssemblyOrder::on_customLeftBtn_clicked()
{
    if(d.order_index < 1) {
        ui->customLeftBtn->setEnabled(false);
        return;
    }

    --d.order_index;
    showParts();
}

void CustomAssemblyOrder::on_customRightBtn_clicked()
{
    int size = 0;
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        size = d.oneOrder.size();
        break;
    case ProductTypeTwo:
        size = d.twoOrder.size();
        break;
    }

    if(!((d.order_index + 1) * d.orderList.size() < size)) {
        ui->customRightBtn->setEnabled(false);
        return;
    }

    ++d.order_index;
    showParts();
}

void CustomAssemblyOrder::on_nextBtn_clicked()
{
    switch (ProductResources::instance().currentProduct()) {
    case ProductTypeOne:
        ProductResources::instance().data().oneOrder.clear();
        for(int i = 0; i < d.oneOrder.size(); ++i) {
            ProductResources::instance().data().oneOrder.append(d.oneOrder[i].flag);
        }
        break;
    case ProductTypeTwo:
        ProductResources::instance().data().twoOrder.clear();
        for(int i = 0; i < d.twoOrder.size(); ++i) {
            ProductResources::instance().data().twoOrder.append(d.twoOrder[i].flag);
        }
        break;
    }

    ProductResources::instance().choiceDisassemblePart()->setData();
    ProductResources::instance().choiceDisassemblePart()->showParts();
    ProductResources::instance().choiceDisassemblePart()->setVisible(true);
    setVisible(false);
}
