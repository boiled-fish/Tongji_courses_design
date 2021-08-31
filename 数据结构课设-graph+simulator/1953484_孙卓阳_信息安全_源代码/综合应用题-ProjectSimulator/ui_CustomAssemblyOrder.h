/********************************************************************************
** Form generated from reading UI file 'CustomAssemblyOrder.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMASSEMBLYORDER_H
#define UI_CUSTOMASSEMBLYORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomAssemblyOrder
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
    QPushButton *previewBtn;
    QLabel *label_2;
    QWidget *bottomCustomWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *customLeftBtn;
    QWidget *customWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *customBtnA;
    QPushButton *customBtnB;
    QPushButton *customBtnC;
    QPushButton *customBtnD;
    QPushButton *customRightBtn;
    QWidget *nextWidget;
    QPushButton *nextBtn;

    void setupUi(QWidget *CustomAssemblyOrder)
    {
        if (CustomAssemblyOrder->objectName().isEmpty())
            CustomAssemblyOrder->setObjectName(QString::fromUtf8("CustomAssemblyOrder"));
        CustomAssemblyOrder->resize(510, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CustomAssemblyOrder->sizePolicy().hasHeightForWidth());
        CustomAssemblyOrder->setSizePolicy(sizePolicy);
        CustomAssemblyOrder->setMinimumSize(QSize(510, 500));
        CustomAssemblyOrder->setMaximumSize(QSize(510, 500));
        verticalLayout = new QVBoxLayout(CustomAssemblyOrder);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        label = new QLabel(CustomAssemblyOrder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 20));

        verticalLayout->addWidget(label);

        topPartWidget = new QWidget(CustomAssemblyOrder);
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

        previewBtn = new QPushButton(CustomAssemblyOrder);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));
        sizePolicy.setHeightForWidth(previewBtn->sizePolicy().hasHeightForWidth());
        previewBtn->setSizePolicy(sizePolicy);
        previewBtn->setMinimumSize(QSize(480, 200));
        previewBtn->setMaximumSize(QSize(480, 200));
        previewBtn->setIconSize(QSize(480, 200));

        verticalLayout->addWidget(previewBtn);

        label_2 = new QLabel(CustomAssemblyOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(200, 20));

        verticalLayout->addWidget(label_2);

        bottomCustomWidget = new QWidget(CustomAssemblyOrder);
        bottomCustomWidget->setObjectName(QString::fromUtf8("bottomCustomWidget"));
        sizePolicy.setHeightForWidth(bottomCustomWidget->sizePolicy().hasHeightForWidth());
        bottomCustomWidget->setSizePolicy(sizePolicy);
        bottomCustomWidget->setMinimumSize(QSize(480, 60));
        bottomCustomWidget->setMaximumSize(QSize(480, 60));
        horizontalLayout_3 = new QHBoxLayout(bottomCustomWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        customLeftBtn = new QPushButton(bottomCustomWidget);
        customLeftBtn->setObjectName(QString::fromUtf8("customLeftBtn"));
        sizePolicy.setHeightForWidth(customLeftBtn->sizePolicy().hasHeightForWidth());
        customLeftBtn->setSizePolicy(sizePolicy);
        customLeftBtn->setMinimumSize(QSize(30, 60));
        customLeftBtn->setMaximumSize(QSize(30, 60));

        horizontalLayout_3->addWidget(customLeftBtn);

        customWidget = new QWidget(bottomCustomWidget);
        customWidget->setObjectName(QString::fromUtf8("customWidget"));
        sizePolicy.setHeightForWidth(customWidget->sizePolicy().hasHeightForWidth());
        customWidget->setSizePolicy(sizePolicy);
        customWidget->setMinimumSize(QSize(410, 60));
        customWidget->setMaximumSize(QSize(410, 60));
        horizontalLayout_4 = new QHBoxLayout(customWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        customBtnA = new QPushButton(customWidget);
        customBtnA->setObjectName(QString::fromUtf8("customBtnA"));
        sizePolicy.setHeightForWidth(customBtnA->sizePolicy().hasHeightForWidth());
        customBtnA->setSizePolicy(sizePolicy);
        customBtnA->setMinimumSize(QSize(90, 60));
        customBtnA->setMaximumSize(QSize(90, 60));
        customBtnA->setIconSize(QSize(90, 60));

        horizontalLayout_4->addWidget(customBtnA);

        customBtnB = new QPushButton(customWidget);
        customBtnB->setObjectName(QString::fromUtf8("customBtnB"));
        sizePolicy.setHeightForWidth(customBtnB->sizePolicy().hasHeightForWidth());
        customBtnB->setSizePolicy(sizePolicy);
        customBtnB->setMinimumSize(QSize(90, 60));
        customBtnB->setMaximumSize(QSize(90, 60));
        customBtnB->setIconSize(QSize(90, 60));

        horizontalLayout_4->addWidget(customBtnB);

        customBtnC = new QPushButton(customWidget);
        customBtnC->setObjectName(QString::fromUtf8("customBtnC"));
        sizePolicy.setHeightForWidth(customBtnC->sizePolicy().hasHeightForWidth());
        customBtnC->setSizePolicy(sizePolicy);
        customBtnC->setMinimumSize(QSize(90, 60));
        customBtnC->setMaximumSize(QSize(90, 60));
        customBtnC->setIconSize(QSize(90, 60));

        horizontalLayout_4->addWidget(customBtnC);

        customBtnD = new QPushButton(customWidget);
        customBtnD->setObjectName(QString::fromUtf8("customBtnD"));
        sizePolicy.setHeightForWidth(customBtnD->sizePolicy().hasHeightForWidth());
        customBtnD->setSizePolicy(sizePolicy);
        customBtnD->setMinimumSize(QSize(90, 60));
        customBtnD->setMaximumSize(QSize(90, 60));
        customBtnD->setIconSize(QSize(90, 60));

        horizontalLayout_4->addWidget(customBtnD);


        horizontalLayout_3->addWidget(customWidget);

        customRightBtn = new QPushButton(bottomCustomWidget);
        customRightBtn->setObjectName(QString::fromUtf8("customRightBtn"));
        sizePolicy.setHeightForWidth(customRightBtn->sizePolicy().hasHeightForWidth());
        customRightBtn->setSizePolicy(sizePolicy);
        customRightBtn->setMinimumSize(QSize(30, 60));
        customRightBtn->setMaximumSize(QSize(30, 60));

        horizontalLayout_3->addWidget(customRightBtn);


        verticalLayout->addWidget(bottomCustomWidget);

        nextWidget = new QWidget(CustomAssemblyOrder);
        nextWidget->setObjectName(QString::fromUtf8("nextWidget"));
        sizePolicy.setHeightForWidth(nextWidget->sizePolicy().hasHeightForWidth());
        nextWidget->setSizePolicy(sizePolicy);
        nextWidget->setMinimumSize(QSize(480, 40));
        nextWidget->setMaximumSize(QSize(480, 40));
        nextBtn = new QPushButton(nextWidget);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(350, 0, 120, 40));
        sizePolicy.setHeightForWidth(nextBtn->sizePolicy().hasHeightForWidth());
        nextBtn->setSizePolicy(sizePolicy);
        nextBtn->setMinimumSize(QSize(120, 40));
        nextBtn->setMaximumSize(QSize(120, 40));

        verticalLayout->addWidget(nextWidget);


        retranslateUi(CustomAssemblyOrder);

        QMetaObject::connectSlotsByName(CustomAssemblyOrder);
    } // setupUi

    void retranslateUi(QWidget *CustomAssemblyOrder)
    {
        CustomAssemblyOrder->setWindowTitle(QCoreApplication::translate("CustomAssemblyOrder", "\350\207\252\345\256\232\344\271\211\350\243\205\351\205\215\351\241\272\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("CustomAssemblyOrder", "\345\276\205\351\200\211\351\233\266\344\273\266\345\210\227\350\241\250", nullptr));
        topPartLeftBtn->setText(QCoreApplication::translate("CustomAssemblyOrder", "<", nullptr));
        partBtnA->setText(QString());
        partBtnB->setText(QString());
        partBtnC->setText(QString());
        partBtnD->setText(QString());
        topPartRightBtn->setText(QCoreApplication::translate("CustomAssemblyOrder", ">", nullptr));
        previewBtn->setText(QString());
        label_2->setText(QCoreApplication::translate("CustomAssemblyOrder", "\345\267\262\347\241\256\345\256\232\347\232\204\350\243\205\351\205\215\351\241\272\345\272\217", nullptr));
        customLeftBtn->setText(QCoreApplication::translate("CustomAssemblyOrder", "<", nullptr));
        customBtnA->setText(QString());
        customBtnB->setText(QString());
        customBtnC->setText(QString());
        customBtnD->setText(QString());
        customRightBtn->setText(QCoreApplication::translate("CustomAssemblyOrder", ">", nullptr));
        nextBtn->setText(QCoreApplication::translate("CustomAssemblyOrder", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomAssemblyOrder: public Ui_CustomAssemblyOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMASSEMBLYORDER_H
