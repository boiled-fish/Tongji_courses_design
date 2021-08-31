#ifndef CHOICEDISASSEMBLEPART_H
#define CHOICEDISASSEMBLEPART_H

#include <QWidget>
#include <QPushButton>
#include "ProductResources.h"

namespace Ui {
class ChoiceDisassemblePart;
}

// 选择维修的零件
class ChoiceDisassemblePart : public QWidget
{
    Q_OBJECT

public:
    explicit ChoiceDisassemblePart(QWidget *parent = nullptr);
    ~ChoiceDisassemblePart();

    void setData();

    void showParts();

protected:
    void selectPart(int index);

protected:
    struct {
        int part_index = 0;     // 顶部未排序零件页索引
        QList<QPushButton*> partList;   // 顶部零件

        ProductOneFlag oneReplace;  // 产品1 替换零件
        ProductTwoFlag twoReplace;  // 产品2 替换零件
        QPixmap preview;

        QList<bike_one_part_t> onePart;     // 产品1 原件
        QList<bike_two_part_t> twoPart;     // 产品2 原件
    } d;

private slots:
    void on_topPartLeftBtn_clicked();

    void on_topPartRightBtn_clicked();

    void on_partBtnA_clicked();

    void on_partBtnB_clicked();

    void on_partBtnC_clicked();

    void on_partBtnD_clicked();

    void on_nextBtn_clicked();

private:
    Ui::ChoiceDisassemblePart *ui;
};

#endif // CHOICEDISASSEMBLEPART_H
