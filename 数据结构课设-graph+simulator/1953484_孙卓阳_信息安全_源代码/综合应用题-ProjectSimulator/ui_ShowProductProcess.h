/********************************************************************************
** Form generated from reading UI file 'ShowProductProcess.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPRODUCTPROCESS_H
#define UI_SHOWPRODUCTPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowProductProcess
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *topPartWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *topPartLeftBtn;
    QWidget *partWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *partBtnA;
    QPushButton *partBtnB;
    QPushButton *partBtnC;
    QPushButton *partBtnD;
    QPushButton *topPartRightBtn;
    QLabel *label_2;
    QPushButton *previewBtn;
    QWidget *widget;
    QPushButton *returnBtn;

    void setupUi(QWidget *ShowProductProcess)
    {
        if (ShowProductProcess->objectName().isEmpty())
            ShowProductProcess->setObjectName(QString::fromUtf8("ShowProductProcess"));
        ShowProductProcess->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShowProductProcess->sizePolicy().hasHeightForWidth());
        ShowProductProcess->setSizePolicy(sizePolicy);
        ShowProductProcess->setMinimumSize(QSize(500, 400));
        ShowProductProcess->setMaximumSize(QSize(500, 400));
        verticalLayout = new QVBoxLayout(ShowProductProcess);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        label = new QLabel(ShowProductProcess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 15));

        verticalLayout->addWidget(label);

        topPartWidget = new QWidget(ShowProductProcess);
        topPartWidget->setObjectName(QString::fromUtf8("topPartWidget"));
        sizePolicy.setHeightForWidth(topPartWidget->sizePolicy().hasHeightForWidth());
        topPartWidget->setSizePolicy(sizePolicy);
        topPartWidget->setMinimumSize(QSize(480, 60));
        topPartWidget->setMaximumSize(QSize(480, 60));
        horizontalLayout_2 = new QHBoxLayout(topPartWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        topPartLeftBtn = new QPushButton(topPartWidget);
        topPartLeftBtn->setObjectName(QString::fromUtf8("topPartLeftBtn"));
        sizePolicy.setHeightForWidth(topPartLeftBtn->sizePolicy().hasHeightForWidth());
        topPartLeftBtn->setSizePolicy(sizePolicy);
        topPartLeftBtn->setMinimumSize(QSize(30, 60));
        topPartLeftBtn->setMaximumSize(QSize(30, 60));

        horizontalLayout_2->addWidget(topPartLeftBtn);

        partWidget = new QWidget(topPartWidget);
        partWidget->setObjectName(QString::fromUtf8("partWidget"));
        sizePolicy.setHeightForWidth(partWidget->sizePolicy().hasHeightForWidth());
        partWidget->setSizePolicy(sizePolicy);
        partWidget->setMinimumSize(QSize(410, 60));
        partWidget->setMaximumSize(QSize(410, 60));
        horizontalLayout = new QHBoxLayout(partWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        partBtnA = new QPushButton(partWidget);
        partBtnA->setObjectName(QString::fromUtf8("partBtnA"));
        sizePolicy.setHeightForWidth(partBtnA->sizePolicy().hasHeightForWidth());
        partBtnA->setSizePolicy(sizePolicy);
        partBtnA->setMinimumSize(QSize(90, 60));
        partBtnA->setMaximumSize(QSize(90, 60));
        partBtnA->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnA);

        partBtnB = new QPushButton(partWidget);
        partBtnB->setObjectName(QString::fromUtf8("partBtnB"));
        sizePolicy.setHeightForWidth(partBtnB->sizePolicy().hasHeightForWidth());
        partBtnB->setSizePolicy(sizePolicy);
        partBtnB->setMinimumSize(QSize(90, 60));
        partBtnB->setMaximumSize(QSize(90, 60));
        partBtnB->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnB);

        partBtnC = new QPushButton(partWidget);
        partBtnC->setObjectName(QString::fromUtf8("partBtnC"));
        sizePolicy.setHeightForWidth(partBtnC->sizePolicy().hasHeightForWidth());
        partBtnC->setSizePolicy(sizePolicy);
        partBtnC->setMinimumSize(QSize(90, 60));
        partBtnC->setMaximumSize(QSize(90, 60));
        partBtnC->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnC);

        partBtnD = new QPushButton(partWidget);
        partBtnD->setObjectName(QString::fromUtf8("partBtnD"));
        sizePolicy.setHeightForWidth(partBtnD->sizePolicy().hasHeightForWidth());
        partBtnD->setSizePolicy(sizePolicy);
        partBtnD->setMinimumSize(QSize(90, 60));
        partBtnD->setMaximumSize(QSize(90, 60));
        partBtnD->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnD);


        horizontalLayout_2->addWidget(partWidget);

        topPartRightBtn = new QPushButton(topPartWidget);
        topPartRightBtn->setObjectName(QString::fromUtf8("topPartRightBtn"));
        sizePolicy.setHeightForWidth(topPartRightBtn->sizePolicy().hasHeightForWidth());
        topPartRightBtn->setSizePolicy(sizePolicy);
        topPartRightBtn->setMinimumSize(QSize(30, 60));
        topPartRightBtn->setMaximumSize(QSize(30, 60));

        horizontalLayout_2->addWidget(topPartRightBtn);


        verticalLayout->addWidget(topPartWidget);

        label_2 = new QLabel(ShowProductProcess);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 20));

        verticalLayout->addWidget(label_2);

        previewBtn = new QPushButton(ShowProductProcess);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));
        sizePolicy.setHeightForWidth(previewBtn->sizePolicy().hasHeightForWidth());
        previewBtn->setSizePolicy(sizePolicy);
        previewBtn->setMinimumSize(QSize(480, 200));
        previewBtn->setMaximumSize(QSize(480, 200));
        previewBtn->setIconSize(QSize(480, 200));

        verticalLayout->addWidget(previewBtn);

        widget = new QWidget(ShowProductProcess);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(480, 50));
        widget->setMaximumSize(QSize(480, 50));
        returnBtn = new QPushButton(widget);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(350, 10, 130, 40));
        sizePolicy.setHeightForWidth(returnBtn->sizePolicy().hasHeightForWidth());
        returnBtn->setSizePolicy(sizePolicy);
        returnBtn->setMinimumSize(QSize(130, 40));
        returnBtn->setMaximumSize(QSize(130, 40));

        verticalLayout->addWidget(widget);


        retranslateUi(ShowProductProcess);

        QMetaObject::connectSlotsByName(ShowProductProcess);
    } // setupUi

    void retranslateUi(QWidget *ShowProductProcess)
    {
        ShowProductProcess->setWindowTitle(QCoreApplication::translate("ShowProductProcess", "\350\243\205\351\205\215\350\277\207\347\250\213\345\261\225\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("ShowProductProcess", "\350\243\205\351\205\215\351\241\272\345\272\217", nullptr));
        topPartLeftBtn->setText(QCoreApplication::translate("ShowProductProcess", "<", nullptr));
        partBtnA->setText(QString());
        partBtnB->setText(QString());
        partBtnC->setText(QString());
        partBtnD->setText(QString());
        topPartRightBtn->setText(QCoreApplication::translate("ShowProductProcess", ">", nullptr));
        label_2->setText(QCoreApplication::translate("ShowProductProcess", "\350\243\205\351\205\215\350\277\207\347\250\213", nullptr));
        previewBtn->setText(QString());
        returnBtn->setText(QCoreApplication::translate("ShowProductProcess", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowProductProcess: public Ui_ShowProductProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPRODUCTPROCESS_H
