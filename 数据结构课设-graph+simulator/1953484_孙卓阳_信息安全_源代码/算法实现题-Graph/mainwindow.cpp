#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//点击提交按钮
void MainWindow::on_pushButton_clicked()
{
    /**
     * libel_12:已经添加的边的条数
     * label_5:点数
     * labell_6:边数
     * lineEdit:U
     * lineEdit_2:V
     * lineEdit_3:W
     * */
    cout<<"click submit"<<endl;
    graphy.init();
    qint32 points=ui->spinBox->value();
    qint32 edges=ui->spinBox_2->value();

    if(points<1||edges<1){
        QMessageBox::information(NULL, "提示", "边和顶点都必须为正整数！");
        return;
    }
    int num=points*(points-1)/2;
    if(edges>num){
        QMessageBox::information(NULL, "提示", "输入边数不合法！");
        return;
    }
    graphy.setMN(points,edges);
    cout<<"setting graphy"<<" "<<points<<" "<<edges<<endl;
    QString m=QString::number(points,10);
    QString n=QString::number(edges,10);

    QString addNum="0";
    ui->label_5->setText(m);
    ui->label_6->setText(n);
    ui->label_12->setText(addNum);
    ui->textBrowser_4->setText("");
    ui->stackedWidget->setCurrentIndex(1);
}
//添加边
void MainWindow::on_pushButton_2_clicked(){

    if(graphy.getAddEdge()==graphy.getNumEdge()){
        QMessageBox::information(NULL, "提示", "添加边数已达到上限！");
        return;
    }
    QString stru=ui->lineEdit->text();
    QString strv=ui->lineEdit_2->text();
    QString strw=ui->lineEdit_3->text();

    int u=stru.toInt();
    int v=strv.toInt();
    int w=strw.toInt();
    if(u==v){
        QMessageBox::information(NULL, "提示", "不能有自环！");
        return;
    }
    if(u<1||u>graphy.getNumPoint()||v<1||v>graphy.getNumPoint()){
         QMessageBox::information(NULL, "提示", "顶点编号输入错误，请重新输入！");
    }else{
        if(w==0) w=1;
        bool res=graphy.addEdge(u,v,w);
        if(res){
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            ui->lineEdit_3->setText("");
//            QMessageBox::information(NULL, "提示", "添加成功！");
        }else{
            QMessageBox::information(NULL, "提示", "添加的边已经存在！");
        }
    }
    ui->label_12->setText(QString::number(graphy.getAddEdge(),10));

    ui->textBrowser_4->setText("");
    for(int i=1;i<=graphy.getNumPoint();++i){
        for(int j=i+1;j<=graphy.getNumPoint();++j){
            if(graphy.mp[i][j]!=INT_MAX){
                ui->textBrowser_4->append(QString::number(i,10)+" <="+QString::number(graphy.mp[i][j],10)+"=> "+QString::number(j,10));
            }
        }
    }

}
//删除边
void MainWindow::on_pushButton_3_clicked(){
    QString stru=ui->lineEdit->text();
    QString strv=ui->lineEdit_2->text();
    QString strw=ui->lineEdit_3->text();

    int u=stru.toInt();
    int v=strv.toInt();
    int w=strw.toInt();
    if(u<1||u>graphy.getNumPoint()||v<1||v>graphy.getNumPoint()){
         QMessageBox::information(NULL, "提示", "顶点编号输入错误，请重新输入！");
    }else{
        bool res=graphy.deleteEdge(u,v);
        if(res){
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            ui->lineEdit_3->setText("");
            QMessageBox::information(NULL, "提示", "删除成功！");
        }else{
            QMessageBox::information(NULL, "提示", "删除的边不存在！");
        }
    }
    ui->label_12->setText(QString::number(graphy.getAddEdge(),10));

    ui->textBrowser_4->setText("");
    for(int i=1;i<=graphy.getNumPoint();++i){
        for(int j=i+1;j<=graphy.getNumPoint();++j){
            if(graphy.mp[i][j]!=INT_MAX){
                ui->textBrowser_4->append(QString::number(i,10)+"<="+QString::number(graphy.mp[i][j],10)+"=>"+QString::number(j,10));
            }
        }
    }
}
//下一步，从1进入2
void MainWindow::on_pushButton_4_clicked(){
     if(graphy.getAddEdge()<graphy.getNumEdge()){
         QMessageBox::information(NULL, "提示", "请添加完成边，方可进行下一步！");
     }else if(!graphy.check_connectivity()){
         QMessageBox::information(NULL, "提示", "请确认建立的图为连通图，方可进行下一步！");
     }else{
         ui->stackedWidget->setCurrentIndex(2);
     }
}
//返回到页面1->0
void MainWindow::on_pushButton_5_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}

//prime算法
void MainWindow::on_pushButton_6_clicked(){
    //需要页面从2->3
    ui->textBrowser->setText("");
    ui->stackedWidget->setCurrentIndex(3);
    graphy.prime(1);//初始点
    ui->textBrowser->append("【Prime算法生成最小生成生成树的选点过程】");
    for(int i=0;i<graphy.primenum;++i){
        QString str="【第"+QString::number(i+1,10)+"步】";
        ui->textBrowser->append(str);
        str="";
        for(int j=0;j<=i;++j){
            str+=QString::number(graphy.primeLog[j],10);
            if(j!=i)str+=',';
        }
        ui->textBrowser->append(str);
    }

}


//kruskal算法
void MainWindow::on_pushButton_7_clicked(){
    //需要页面从2->3
    ui->textBrowser->setText("");
    ui->stackedWidget->setCurrentIndex(3);
    graphy.kruskal();
    ui->textBrowser->append("【Kruskal算法生成最小生成生成树的选边过程】");
    for(int i=0;i<graphy.kruskalLog.size();++i){
        QString str="【第"+QString::number(i+1,10)+"步】";
        ui->textBrowser->append(str);
        str="";
        for(int j=0;j<=i;++j){
            str+="["+QString::number(graphy.kruskalLog[j].from,10)+","+QString::number(graphy.kruskalLog[j].to,10)+"]";
            if(j!=i)str+=',';
        }
        ui->textBrowser->append(str);
    }
}

//diskstra算法
void MainWindow::on_pushButton_8_clicked(){
    //需要页面从2->4
    ui->textBrowser_3->setText("");
    ui->stackedWidget->setCurrentIndex(6);
    QString str="";
    for(int i=1;i<=graphy.getNumPoint();++i){
        str="";
        str+=QString::number(i,10);
        for(int j=0;j<graphy.graphyAdj[i].size();++j){
            str+=" => "+QString::number(graphy.graphyAdj[i][j],10);

        }
        str+=" => ";
        str+="NULL";
        ui->textBrowser_3->append(str);

    }

}

//返回到页面2-1
void MainWindow::on_pushButton_9_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}

//返回到页面3->2
void MainWindow::on_pushButton_10_clicked(){
    ui->stackedWidget->setCurrentIndex(2);
}

//返回到页面4->2
void MainWindow::on_pushButton_11_clicked(){
    ui->stackedWidget->setCurrentIndex(2);
}

//计算u,v之间的最短距离
void MainWindow::on_pushButton_12_clicked(){



    QString stru=ui->lineEdit_4->text();
    QString strv=ui->lineEdit_5->text();

    int u=stru.toInt();
    int v=strv.toInt();

    if(u<1||u>graphy.getNumPoint()||v<1||v>graphy.getNumPoint()){
        QMessageBox::information(NULL, "提示", "顶点编号输入错误，请重新输入！");
        return ;
    }
    int res=graphy.dijkstra(u,v);
    if(res==-1) ui->label_16->setText("不可达");
    else ui->label_16->setText(QString::number(res,10));
}

//计算一个点到任意点之间的距离 页面5
void MainWindow::on_pushButton_13_clicked(){
    ui->textBrowser_2->setText("");
    ui->stackedWidget->setCurrentIndex(5);
}

//计算任意两点之间的距离 页面3
void MainWindow::on_pushButton_14_clicked(){

    ui->textBrowser->setText("");
    ui->stackedWidget->setCurrentIndex(3);
     ui->textBrowser->setText("【任意两点之间的距离】");
    for(int i=1;i<=graphy.getNumPoint();++i){
        graphy.dijkstra(i,1);
        for(int j=1;j<=graphy.getNumPoint();++j){
            if(i!=j){
                if(graphy.dis[j]>=INT_MAX){
                    ui->textBrowser->append(QString::number(i,10)+"->"+QString::number(j,10)+": 不可达");
                }
                ui->textBrowser->append(QString::number(i,10)+"->"+QString::number(j,10)+": "+QString::number(graphy.dis[j],10));
            }
        }
    }
}
//计算单点到任意点
void MainWindow::on_pushButton_15_clicked(){

     ui->textBrowser_2->setText("");
     QString stru=ui->lineEdit_6->text();
     int u=stru.toInt();
     if(u<1||u>graphy.getNumPoint()){
         QMessageBox::information(NULL, "提示", "顶点编号输入错误，请重新输入！");
         return ;
     }
     graphy.dijkstra(u,1);
     for(int i=1;i<=graphy.getNumPoint();++i){
         if(i!=u){
             if(graphy.dis[i]>=INT_MAX){
                 ui->textBrowser_2->append(QString::number(u,10)+"->"+QString::number(i,10)+": 不可达");
             }
             ui->textBrowser_2->append(QString::number(u,10)+"->"+QString::number(i,10)+": "+QString::number(graphy.dis[i],10));
         }
     }
}

//返回5-2
void MainWindow::on_pushButton_16_clicked(){

   ui->stackedWidget->setCurrentIndex(2);
}

//返回6-2
void MainWindow::on_pushButton_17_clicked(){

   ui->stackedWidget->setCurrentIndex(2);
}









