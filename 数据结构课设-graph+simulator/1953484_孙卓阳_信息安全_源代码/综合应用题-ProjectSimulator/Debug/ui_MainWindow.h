/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *nameLabel;
    QPushButton *btn1;
    QPushButton *btn2;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 300));
        MainWindow->setMaximumSize(QSize(500, 300));
        nameLabel = new QLabel(MainWindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(0, 50, 500, 40));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setMinimumSize(QSize(500, 40));
        nameLabel->setMaximumSize(QSize(500, 40));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        nameLabel->setFont(font);
        nameLabel->setAlignment(Qt::AlignCenter);
        btn1 = new QPushButton(MainWindow);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(110, 150, 130, 40));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(130, 40));
        btn1->setMaximumSize(QSize(130, 40));
        btn2 = new QPushButton(MainWindow);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(260, 150, 130, 40));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setMinimumSize(QSize(130, 40));
        btn2->setMaximumSize(QSize(130, 40));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\272\247\345\223\201\346\213\206\350\247\243\347\273\264\344\277\256\346\250\241\346\213\237\345\231\250", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "\344\272\247\345\223\201\346\213\206\350\247\243\347\273\264\344\277\256\346\250\241\346\213\237\345\231\250", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "\344\272\247\345\223\2011", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "\344\272\247\345\223\2012", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
