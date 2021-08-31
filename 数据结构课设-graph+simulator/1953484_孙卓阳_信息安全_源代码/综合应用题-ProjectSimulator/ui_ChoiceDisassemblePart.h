/********************************************************************************
** Form generated from reading UI file 'ChoiceDisassemblePart.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICEDISASSEMBLEPART_H
#define UI_CHOICEDISASSEMBLEPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoiceDisassemblePart
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
    QWidget *nextWidget;
    QPushButton *nextBtn;

    void setupUi(QWidget *ChoiceDisassemblePart)
    {
        if (ChoiceDisassemblePart->objectName().isEmpty())
            ChoiceDisassemblePart->setObjectName(QString::fromUtf8("ChoiceDisassemblePart"));
        ChoiceDisassemblePart->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChoiceDisassemblePart->sizePolicy().hasHeightForWidth());
        ChoiceDisassemblePart->setSizePolicy(sizePolicy);
        ChoiceDisassemblePart->setMinimumSize(QSize(500, 400));
        ChoiceDisassemblePart->setMaximumSize(QSize(500, 400));
        verticalLayout = new QVBoxLayout(ChoiceDisassemblePart);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        label = new QLabel(ChoiceDisassemblePart);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(200, 15));

        verticalLayout->addWidget(label);

        topPartWidget = new QWidget(ChoiceDisassemblePart);
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

        previewBtn = new QPushButton(ChoiceDisassemblePart);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));
        sizePolicy1.setHeightForWidth(previewBtn->sizePolicy().hasHeightForWidth());
        previewBtn->setSizePolicy(sizePolicy1);
        previewBtn->setMinimumSize(QSize(480, 200));
        previewBtn->setMaximumSize(QSize(480, 200));
        previewBtn->setIconSize(QSize(480, 200));

        verticalLayout->addWidget(previewBtn);

        nextWidget = new QWidget(ChoiceDisassemblePart);
        nextWidget->setObjectName(QString::fromUtf8("nextWidget"));
        sizePolicy1.setHeightForWidth(nextWidget->sizePolicy().hasHeightForWidth());
        nextWidget->setSizePolicy(sizePolicy1);
        nextWidget->setMinimumSize(QSize(480, 40));
        nextWidget->setMaximumSize(QSize(480, 40));
        nextBtn = new QPushButton(nextWidget);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(340, 0, 120, 40));
        sizePolicy1.setHeightForWidth(nextBtn->sizePolicy().hasHeightForWidth());
        nextBtn->setSizePolicy(sizePolicy1);
        nextBtn->setMinimumSize(QSize(120, 40));
        nextBtn->setMaximumSize(QSize(120, 40));

        verticalLayout->addWidget(nextWidget);


        retranslateUi(ChoiceDisassemblePart);

        QMetaObject::connectSlotsByName(ChoiceDisassemblePart);
    } // setupUi

    void retranslateUi(QWidget *ChoiceDisassemblePart)
    {
        ChoiceDisassemblePart->setWindowTitle(QCoreApplication::translate("ChoiceDisassemblePart", "\351\200\211\346\213\251\351\234\200\350\246\201\346\213\206\345\215\270\345\222\214\346\233\277\346\215\242\347\232\204\351\233\266\344\273\266", nullptr));
        label->setText(QCoreApplication::translate("ChoiceDisassemblePart", "\346\233\277\346\215\242\347\224\250\351\233\266\344\273\266\345\276\205\351\200\211\345\210\227\350\241\250", nullptr));
        topPartLeftBtn->setText(QCoreApplication::translate("ChoiceDisassemblePart", "<", nullptr));
        partBtnA->setText(QString());
        partBtnB->setText(QString());
        partBtnC->setText(QString());
        partBtnD->setText(QString());
        topPartRightBtn->setText(QCoreApplication::translate("ChoiceDisassemblePart", ">", nullptr));
        previewBtn->setText(QString());
        nextBtn->setText(QCoreApplication::translate("ChoiceDisassemblePart", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoiceDisassemblePart: public Ui_ChoiceDisassemblePart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICEDISASSEMBLEPART_H
