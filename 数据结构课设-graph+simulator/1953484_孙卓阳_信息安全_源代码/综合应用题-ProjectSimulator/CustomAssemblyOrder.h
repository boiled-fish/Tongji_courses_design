#ifndef CUSTOMASSEMBLYORDER_H
#define CUSTOMASSEMBLYORDER_H

#include <QWidget>
#include <QPushButton>
#include "ProductResources.h"

namespace Ui {
class CustomAssemblyOrder;
}

// 自定义装配顺序界面
class CustomAssemblyOrder : public QWidget
{
    Q_OBJECT

public:
    explicit CustomAssemblyOrder(QWidget *parent = nullptr);
    ~CustomAssemblyOrder();

    void showParts();

    void setZeroForIndex();

protected:
    void movePartToOrder(int index);

protected:
    struct {
        int part_index = 0;     // 顶部未排序零件页索引
        int order_index = 0;    // 底部排序零件页索引
        QList<QPushButton*> partList;   // 顶部零件
        QList<QPushButton*> orderList;  // 底部顺序

        QList<bike_one_part_t> onePart; // 产品1 零件
        QList<bike_two_part_t> twoPart; // 产品2 零件
        QList<bike_one_part_t> oneOrder;// 产品1 装配顺序
        QList<bike_two_part_t> twoOrder;// 产品2 装配顺序
    } d;

private slots:
    void on_topPartLeftBtn_clicked();

    void on_topPartRightBtn_clicked();

    void on_partBtnA_clicked();

    void on_partBtnB_clicked();

    void on_partBtnC_clicked();

    void on_partBtnD_clicked();

    void on_customLeftBtn_clicked();

    void on_customRightBtn_clicked();

    void on_nextBtn_clicked();

private:
    Ui::CustomAssemblyOrder *ui;
};

#endif // CUSTOMASSEMBLYORDER_H
