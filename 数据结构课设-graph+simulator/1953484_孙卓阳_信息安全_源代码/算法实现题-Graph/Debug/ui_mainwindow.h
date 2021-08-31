/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QWidget *page_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser_4;
    QWidget *page_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_8;
    QWidget *page_4;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_10;
    QWidget *page_5;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *page_6;
    QLabel *label_17;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_15;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_16;
    QWidget *page_7;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(706, 566);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 661, 511));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 270, 361, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        spinBox = new QSpinBox(page);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(320, 130, 191, 31));
        spinBox->setMaximum(100);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 120, 131, 41));
        label->setFont(font1);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 210, 111, 21));
        label_2->setFont(font1);
        spinBox_2 = new QSpinBox(page);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(320, 210, 191, 31));
        spinBox_2->setMaximum(100);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 60, 71, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 60, 51, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 60, 61, 21));
        label_5->setFont(font);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 60, 41, 21));
        label_6->setFont(font);
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 120, 161, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 200, 81, 31));
        label_8->setFont(font);
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(160, 200, 81, 31));
        label_9->setFont(font);
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(280, 200, 91, 31));
        label_10->setFont(font);
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(350, 60, 111, 21));
        label_11->setFont(font1);
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(480, 60, 72, 21));
        label_12->setFont(font);
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 250, 71, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font2.setPointSize(12);
        lineEdit->setFont(font2);
        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 250, 71, 31));
        lineEdit_2->setFont(font2);
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 250, 71, 31));
        lineEdit_3->setFont(font2);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 340, 93, 28));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 340, 93, 28));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 460, 93, 28));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(390, 460, 93, 28));
        textBrowser_4 = new QTextBrowser(page_2);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(390, 120, 256, 311));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 170, 261, 51));
        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 240, 261, 51));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(510, 460, 93, 28));
        pushButton_13 = new QPushButton(page_3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(370, 170, 221, 51));
        pushButton_14 = new QPushButton(page_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(370, 240, 221, 51));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 320, 511, 41));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        textBrowser = new QTextBrowser(page_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 20, 601, 431));
        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(530, 470, 93, 28));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_13 = new QLabel(page_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(120, 70, 51, 21));
        label_14 = new QLabel(page_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(360, 70, 71, 21));
        lineEdit_4 = new QLineEdit(page_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 100, 81, 31));
        lineEdit_5 = new QLineEdit(page_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(360, 100, 71, 31));
        label_15 = new QLabel(page_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(120, 210, 261, 41));
        label_16 = new QLabel(page_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(400, 220, 72, 21));
        pushButton_11 = new QPushButton(page_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(510, 440, 93, 28));
        pushButton_12 = new QPushButton(page_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(510, 100, 93, 28));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label_17 = new QLabel(page_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(90, 40, 72, 21));
        lineEdit_6 = new QLineEdit(page_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(170, 40, 71, 21));
        pushButton_15 = new QPushButton(page_6);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(330, 40, 93, 28));
        textBrowser_2 = new QTextBrowser(page_6);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(60, 100, 541, 341));
        pushButton_16 = new QPushButton(page_6);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(510, 460, 93, 28));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        textBrowser_3 = new QTextBrowser(page_7);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(40, 20, 581, 391));
        pushButton_17 = new QPushButton(page_7);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(510, 440, 93, 28));
        stackedWidget->addWidget(page_7);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 706, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\232\204\351\241\266\347\202\271\344\270\252\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\232\204\350\276\271\344\270\252\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\241\266\347\202\271\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\276\271\346\225\260\357\274\232", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\276\271\347\232\204\344\277\241\346\201\257", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271U", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271V", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\235\203\345\200\274W", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\267\262\346\267\273\345\212\240\350\276\271\346\225\260\357\274\232", nullptr));
        label_12->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\346\255\245", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\346\255\245", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Prime\347\256\227\346\263\225\346\236\204\351\200\240\346\234\200\345\260\217\347\224\237\346\210\220\346\240\221", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Kruskal\347\256\227\346\263\225\346\236\204\351\200\240\346\234\200\345\260\217\347\224\237\346\210\220\346\240\221", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\346\255\245", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\347\202\271\345\210\260\344\273\273\346\204\217\347\202\271\347\232\204\346\234\200\347\237\255\350\267\235\347\246\273", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\344\273\273\346\204\217\347\202\271\344\271\213\351\227\264\347\232\204\346\234\200\347\237\255\350\267\235\347\246\273", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\351\202\273\346\216\245\351\223\276\350\241\250", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\346\255\245", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271U", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271V", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271U\345\210\260\350\212\202\347\202\271V\347\232\204\346\234\200\347\237\255\350\267\235\347\246\273\344\270\272\357\274\232", nullptr));
        label_16->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271U", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
