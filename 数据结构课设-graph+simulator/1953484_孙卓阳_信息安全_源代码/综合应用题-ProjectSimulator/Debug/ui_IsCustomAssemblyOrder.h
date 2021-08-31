/********************************************************************************
** Form generated from reading UI file 'IsCustomAssemblyOrder.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISCUSTOMASSEMBLYORDER_H
#define UI_ISCUSTOMASSEMBLYORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IsCustomAssemblyOrder
{
public:
    QLabel *nameLabel;
    QPushButton *yesBtn;
    QPushButton *noBtn;

    void setupUi(QWidget *IsCustomAssemblyOrder)
    {
        if (IsCustomAssemblyOrder->objectName().isEmpty())
            IsCustomAssemblyOrder->setObjectName(QString::fromUtf8("IsCustomAssemblyOrder"));
        IsCustomAssemblyOrder->resize(350, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IsCustomAssemblyOrder->sizePolicy().hasHeightForWidth());
        IsCustomAssemblyOrder->setSizePolicy(sizePolicy);
        IsCustomAssemblyOrder->setMinimumSize(QSize(350, 200));
        IsCustomAssemblyOrder->setMaximumSize(QSize(350, 200));
        nameLabel = new QLabel(IsCustomAssemblyOrder);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(0, 40, 350, 40));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setMinimumSize(QSize(350, 40));
        nameLabel->setMaximumSize(QSize(350, 40));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        nameLabel->setFont(font);
        nameLabel->setAlignment(Qt::AlignCenter);
        yesBtn = new QPushButton(IsCustomAssemblyOrder);
        yesBtn->setObjectName(QString::fromUtf8("yesBtn"));
        yesBtn->setGeometry(QRect(40, 110, 120, 40));
        sizePolicy.setHeightForWidth(yesBtn->sizePolicy().hasHeightForWidth());
        yesBtn->setSizePolicy(sizePolicy);
        yesBtn->setMinimumSize(QSize(120, 40));
        yesBtn->setMaximumSize(QSize(120, 40));
        noBtn = new QPushButton(IsCustomAssemblyOrder);
        noBtn->setObjectName(QString::fromUtf8("noBtn"));
        noBtn->setGeometry(QRect(180, 110, 120, 40));
        sizePolicy.setHeightForWidth(noBtn->sizePolicy().hasHeightForWidth());
        noBtn->setSizePolicy(sizePolicy);
        noBtn->setMinimumSize(QSize(120, 40));
        noBtn->setMaximumSize(QSize(120, 40));

        retranslateUi(IsCustomAssemblyOrder);

        QMetaObject::connectSlotsByName(IsCustomAssemblyOrder);
    } // setupUi

    void retranslateUi(QWidget *IsCustomAssemblyOrder)
    {
        IsCustomAssemblyOrder->setWindowTitle(QCoreApplication::translate("IsCustomAssemblyOrder", "\346\230\257\345\220\246\350\207\252\345\256\232\344\271\211\347\273\204\350\243\205\351\241\272\345\272\217", nullptr));
        nameLabel->setText(QCoreApplication::translate("IsCustomAssemblyOrder", "\346\230\257\345\220\246\350\207\252\345\256\232\344\271\211\347\273\204\350\243\205\351\241\272\345\272\217", nullptr));
        yesBtn->setText(QCoreApplication::translate("IsCustomAssemblyOrder", "\346\230\257", nullptr));
        noBtn->setText(QCoreApplication::translate("IsCustomAssemblyOrder", "\345\220\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IsCustomAssemblyOrder: public Ui_IsCustomAssemblyOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISCUSTOMASSEMBLYORDER_H
