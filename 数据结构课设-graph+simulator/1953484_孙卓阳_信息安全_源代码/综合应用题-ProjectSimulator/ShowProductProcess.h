#ifndef SHOWPRODUCTPROCESS_H
#define SHOWPRODUCTPROCESS_H

#include <QWidget>
#include <QTimer>
#include <QPushButton>

namespace Ui {
class ShowProductProcess;
}

// 显示产品拆卸过程
class ShowProductProcess : public QWidget
{
    Q_OBJECT

public:
    explicit ShowProductProcess(QWidget *parent = nullptr);
    ~ShowProductProcess();

    void loadResources();
    void showParts();


    void reset();
protected slots:
    void nextPicture();

protected:
    void loadProductOne();
    void loadProductTwo();

protected:
    struct ShowProductProcessData {
        QList<QPixmap> dismount;    // 拆卸
        QList<QPixmap> part;        // 零件
        QList<QPushButton *> btns;
        int btn_index = 0;
        int current_index = 0;      // 当前索引
        int index = 0;              // 拆卸到选中零件索引
        QPixmap replace_part;       // 替换零件
        QTimer *timer = nullptr;
    } d;

private slots:
    void on_topPartLeftBtn_clicked();

    void on_topPartRightBtn_clicked();

    void on_returnBtn_clicked();

private:
    Ui::ShowProductProcess *ui;
};

#endif // SHOWPRODUCTPROCESS_H
