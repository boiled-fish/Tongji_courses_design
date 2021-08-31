#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<iostream>
#include <QMainWindow>
#include "Graphy.h"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Graphy graphy;

public slots:
    void on_pushButton_clicked();//添加提交按钮的槽函数
    void on_pushButton_2_clicked();//添加边
    void on_pushButton_3_clicked();//删除边
    void on_pushButton_4_clicked();//下一步
     void on_pushButton_5_clicked();//返回到页面1->0
    void on_pushButton_6_clicked();//prime算法
    void on_pushButton_7_clicked();//kruskal算法
    void on_pushButton_8_clicked();//diskstra算法
    void on_pushButton_9_clicked();//返回到页面2->1
    void on_pushButton_10_clicked();//返回到页面3->2
    void on_pushButton_11_clicked();//返回到页面3->2
    void on_pushButton_12_clicked();//dijkstra计算u,v之间的最短距离
    void on_pushButton_13_clicked();//dijkstra计算u到任意点
     void on_pushButton_14_clicked();//dijkstra计算任意点之间的距离
     void on_pushButton_15_clicked();//计算单点到任意点
     void on_pushButton_16_clicked();//5->2
      void on_pushButton_17_clicked();//6->1


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
