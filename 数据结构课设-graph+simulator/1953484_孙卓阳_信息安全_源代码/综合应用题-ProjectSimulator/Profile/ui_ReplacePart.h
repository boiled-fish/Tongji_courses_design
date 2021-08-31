/********************************************************************************
** Form generated from reading UI file 'ReplacePart.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPART_H
#define UI_REPLACEPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplacePart
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
    QWidget *nextWidget;
    QPushButton *nextBtn;

    void setupUi(QWidget *ReplacePart)
    {
        if (ReplacePart->objectName().isEmpty())
            ReplacePart->setObjectName(QString::fromUtf8("ReplacePart"));
        ReplacePart->resize(500, 350);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReplacePart->sizePolicy().hasHeightForWidth());
        ReplacePart->setSizePolicy(sizePolicy);
        ReplacePart->setMinimumSize(QSize(500, 350));
        ReplacePart->setMaximumSize(QSize(500, 350));
        verticalLayout = new QVBoxLayout(ReplacePart);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        topPartWidget = new QWidget(ReplacePart);
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

        previewBtn = new QPushButton(ReplacePart);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));
        sizePolicy.setHeightForWidth(previewBtn->sizePolicy().hasHeightForWidth());
        previewBtn->setSizePolicy(sizePolicy);
        previewBtn->setMinimumSize(QSize(480, 200));
        previewBtn->setMaximumSize(QSize(480, 200));
        previewBtn->setIconSize(QSize(480, 200));

        verticalLayout->addWidget(previewBtn);

        nextWidget = new QWidget(ReplacePart);
        nextWidget->setObjectName(QString::fromUtf8("nextWidget"));
        sizePolicy.setHeightForWidth(nextWidget->sizePolicy().hasHeightForWidth());
        nextWidget->setSizePolicy(sizePolicy);
        nextWidget->setMinimumSize(QSize(480, 40));
        nextWidget->setMaximumSize(QSize(480, 40));
        nextBtn = new QPushButton(nextWidget);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(340, 0, 120, 40));
        sizePolicy.setHeightForWidth(nextBtn->sizePolicy().hasHeightForWidth());
        nextBtn->setSizePolicy(sizePolicy);
        nextBtn->setMinimumSize(QSize(120, 40));
        nextBtn->setMaximumSize(QSize(120, 40));

        verticalLayout->addWidget(nextWidget);


        retranslateUi(ReplacePart);

        QMetaObject::connectSlotsByName(ReplacePart);
    } // setupUi

    void retranslateUi(QWidget *ReplacePart)
    {
        ReplacePart->setWindowTitle(QCoreApplication::translate("ReplacePart", "\346\233\277\346\215\242\351\233\266\344\273\266", nullptr));
        topPartLeftBtn->setText(QCoreApplication::translate("ReplacePart", "<", nullptr));
        partBtnA->setText(QString());
        partBtnB->setText(QString());
        partBtnC->setText(QString());
        partBtnD->setText(QString());
        topPartRightBtn->setText(QCoreApplication::translate("ReplacePart", ">", nullptr));
        previewBtn->setText(QString());
        nextBtn->setText(QCoreApplication::translate("ReplacePart", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplacePart: public Ui_ReplacePart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPART_H
