/********************************************************************************
** Form generated from reading UI file 'ShowProductProcess.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPRODUCTPROCESS_H
#define UI_SHOWPRODUCTPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowProductProcess
{
public:
    QVBoxLayout *verticalLayout;
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
    QPushButton *previewBtn;

    void setupUi(QWidget *ShowProductProcess)
    {
        if (ShowProductProcess->objectName().isEmpty())
            ShowProductProcess->setObjectName(QString::fromUtf8("ShowProductProcess"));
        ShowProductProcess->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShowProductProcess->sizePolicy().hasHeightForWidth());
        ShowProductProcess->setSizePolicy(sizePolicy);
        ShowProductProcess->setMinimumSize(QSize(500, 0));
        ShowProductProcess->setMaximumSize(QSize(500, 16777215));
        verticalLayout = new QVBoxLayout(ShowProductProcess);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        topPartWidget = new QWidget(ShowProductProcess);
        topPartWidget->setObjectName(QString::fromUtf8("topPartWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topPartWidget->sizePolicy().hasHeightForWidth());
        topPartWidget->setSizePolicy(sizePolicy1);
        topPartWidget->setMinimumSize(QSize(480, 60));
        topPartWidget->setMaximumSize(QSize(480, 60));
        horizontalLayout_2 = new QHBoxLayout(topPartWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        topPartLeftBtn = new QPushButton(topPartWidget);
        topPartLeftBtn->setObjectName(QString::fromUtf8("topPartLeftBtn"));
        sizePolicy1.setHeightForWidth(topPartLeftBtn->sizePolicy().hasHeightForWidth());
        topPartLeftBtn->setSizePolicy(sizePolicy1);
        topPartLeftBtn->setMinimumSize(QSize(30, 60));
        topPartLeftBtn->setMaximumSize(QSize(30, 60));

        horizontalLayout_2->addWidget(topPartLeftBtn);

        partWidget = new QWidget(topPartWidget);
        partWidget->setObjectName(QString::fromUtf8("partWidget"));
        sizePolicy1.setHeightForWidth(partWidget->sizePolicy().hasHeightForWidth());
        partWidget->setSizePolicy(sizePolicy1);
        partWidget->setMinimumSize(QSize(410, 60));
        partWidget->setMaximumSize(QSize(410, 60));
        horizontalLayout = new QHBoxLayout(partWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        partBtnA = new QPushButton(partWidget);
        partBtnA->setObjectName(QString::fromUtf8("partBtnA"));
        sizePolicy1.setHeightForWidth(partBtnA->sizePolicy().hasHeightForWidth());
        partBtnA->setSizePolicy(sizePolicy1);
        partBtnA->setMinimumSize(QSize(90, 60));
        partBtnA->setMaximumSize(QSize(90, 60));
        partBtnA->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnA);

        partBtnB = new QPushButton(partWidget);
        partBtnB->setObjectName(QString::fromUtf8("partBtnB"));
        sizePolicy1.setHeightForWidth(partBtnB->sizePolicy().hasHeightForWidth());
        partBtnB->setSizePolicy(sizePolicy1);
        partBtnB->setMinimumSize(QSize(90, 60));
        partBtnB->setMaximumSize(QSize(90, 60));
        partBtnB->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnB);

        partBtnC = new QPushButton(partWidget);
        partBtnC->setObjectName(QString::fromUtf8("partBtnC"));
        sizePolicy1.setHeightForWidth(partBtnC->sizePolicy().hasHeightForWidth());
        partBtnC->setSizePolicy(sizePolicy1);
        partBtnC->setMinimumSize(QSize(90, 60));
        partBtnC->setMaximumSize(QSize(90, 60));
        partBtnC->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnC);

        partBtnD = new QPushButton(partWidget);
        partBtnD->setObjectName(QString::fromUtf8("partBtnD"));
        sizePolicy1.setHeightForWidth(partBtnD->sizePolicy().hasHeightForWidth());
        partBtnD->setSizePolicy(sizePolicy1);
        partBtnD->setMinimumSize(QSize(90, 60));
        partBtnD->setMaximumSize(QSize(90, 60));
        partBtnD->setIconSize(QSize(90, 60));

        horizontalLayout->addWidget(partBtnD);


        horizontalLayout_2->addWidget(partWidget);

        topPartRightBtn = new QPushButton(topPartWidget);
        topPartRightBtn->setObjectName(QString::fromUtf8("topPartRightBtn"));
        sizePolicy1.setHeightForWidth(topPartRightBtn->sizePolicy().hasHeightForWidth());
        topPartRightBtn->setSizePolicy(sizePolicy1);
        topPartRightBtn->setMinimumSize(QSize(30, 60));
        topPartRightBtn->setMaximumSize(QSize(30, 60));

        horizontalLayout_2->addWidget(topPartRightBtn);


        verticalLayout->addWidget(topPartWidget);

        previewBtn = new QPushButton(ShowProductProcess);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));
        sizePolicy1.setHeightForWidth(previewBtn->sizePolicy().hasHeightForWidth());
        previewBtn->setSizePolicy(sizePolicy1);
        previewBtn->setMinimumSize(QSize(480, 200));
        previewBtn->setMaximumSize(QSize(480, 200));
        previewBtn->setIconSize(QSize(480, 200));

        verticalLayout->addWidget(previewBtn);


        retranslateUi(ShowProductProcess);

        QMetaObject::connectSlotsByName(ShowProductProcess);
    } // setupUi

    void retranslateUi(QWidget *ShowProductProcess)
    {
        ShowProductProcess->setWindowTitle(QCoreApplication::translate("ShowProductProcess", "\350\243\205\351\205\215\350\277\207\347\250\213\345\261\225\347\244\272", nullptr));
        topPartLeftBtn->setText(QCoreApplication::translate("ShowProductProcess", "<", nullptr));
        partBtnA->setText(QString());
        partBtnB->setText(QString());
        partBtnC->setText(QString());
        partBtnD->setText(QString());
        topPartRightBtn->setText(QCoreApplication::translate("ShowProductProcess", ">", nullptr));
        previewBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowProductProcess: public Ui_ShowProductProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPRODUCTPROCESS_H
