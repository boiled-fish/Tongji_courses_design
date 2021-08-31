/********************************************************************************
** Form generated from reading UI file 'ShowReplacePart.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWREPLACEPART_H
#define UI_SHOWREPLACEPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowReplacePart
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *previewBtn;
    QLabel *textLabel;

    void setupUi(QWidget *ShowReplacePart)
    {
        if (ShowReplacePart->objectName().isEmpty())
            ShowReplacePart->setObjectName(QString::fromUtf8("ShowReplacePart"));
        ShowReplacePart->resize(500, 280);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShowReplacePart->sizePolicy().hasHeightForWidth());
        ShowReplacePart->setSizePolicy(sizePolicy);
        ShowReplacePart->setMinimumSize(QSize(500, 280));
        ShowReplacePart->setMaximumSize(QSize(500, 280));
        verticalLayout = new QVBoxLayout(ShowReplacePart);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 0, 0);
        previewBtn = new QPushButton(ShowReplacePart);
        previewBtn->setObjectName(QString::fromUtf8("previewBtn"));
        sizePolicy.setHeightForWidth(previewBtn->sizePolicy().hasHeightForWidth());
        previewBtn->setSizePolicy(sizePolicy);
        previewBtn->setMinimumSize(QSize(480, 200));
        previewBtn->setMaximumSize(QSize(480, 200));
        previewBtn->setIconSize(QSize(480, 200));

        verticalLayout->addWidget(previewBtn);

        textLabel = new QLabel(ShowReplacePart);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        sizePolicy.setHeightForWidth(textLabel->sizePolicy().hasHeightForWidth());
        textLabel->setSizePolicy(sizePolicy);
        textLabel->setMinimumSize(QSize(480, 40));
        textLabel->setMaximumSize(QSize(480, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        textLabel->setFont(font);
        textLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(textLabel);


        retranslateUi(ShowReplacePart);

        QMetaObject::connectSlotsByName(ShowReplacePart);
    } // setupUi

    void retranslateUi(QWidget *ShowReplacePart)
    {
        ShowReplacePart->setWindowTitle(QCoreApplication::translate("ShowReplacePart", "\351\233\266\344\273\266\346\233\277\346\215\242", nullptr));
        previewBtn->setText(QString());
        textLabel->setText(QCoreApplication::translate("ShowReplacePart", "\344\275\277\347\224\250A\351\233\266\344\273\266\346\233\277\346\215\242A\351\233\266\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowReplacePart: public Ui_ShowReplacePart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWREPLACEPART_H
