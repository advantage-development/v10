/********************************************************************************
** Form generated from reading UI file 'creditcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCONTROLDIALOG_H
#define UI_CREDITCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "creditcontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CreditControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutTop;
    QFormLayout *formLayoutCreditControl1;
    QLabel *labelCreditControlQuantityText;
    QLabel *labelCreditControlQuantity;
    QLabel *labelCreditControlBytesText;
    QLabel *labelCreditControlBytes;
    QFormLayout *formLayoutCreditControl2;
    QLabel *labelCreditControlAmountText;
    QLabel *labelCreditControlAmount;
    QLabel *labelCreditControlPriorityText;
    QLabel *labelCreditControlPriority;
    QFormLayout *formLayoutCreditControl3;
    QLabel *labelCreditControlFeeText;
    QLabel *labelCreditControlFee;
    QLabel *labelCreditControlLowOutputText;
    QLabel *labelCreditControlLowOutput;
    QFormLayout *formLayoutCreditControl4;
    QLabel *labelCreditControlAfterFeeText;
    QLabel *labelCreditControlAfterFee;
    QLabel *labelCreditControlChangeText;
    QLabel *labelCreditControlChange;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayoutPanel;
    QPushButton *pushButtonSelectAll;
    QPushButton *pushButtonToggleLock;
    QRadioButton *radioTreeMode;
    QRadioButton *radioListMode;
    QLabel *labelLocked;
    QSpacerItem *horizontalSpacer;
    CreditControlTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreditControlDialog)
    {
        if (CreditControlDialog->objectName().isEmpty())
            CreditControlDialog->setObjectName(QStringLiteral("CreditControlDialog"));
        CreditControlDialog->resize(954, 500);
        verticalLayout = new QVBoxLayout(CreditControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayoutTop = new QHBoxLayout();
        horizontalLayoutTop->setObjectName(QStringLiteral("horizontalLayoutTop"));
        horizontalLayoutTop->setContentsMargins(-1, 0, -1, 10);
        formLayoutCreditControl1 = new QFormLayout();
        formLayoutCreditControl1->setObjectName(QStringLiteral("formLayoutCreditControl1"));
        formLayoutCreditControl1->setHorizontalSpacing(10);
        formLayoutCreditControl1->setVerticalSpacing(10);
        formLayoutCreditControl1->setContentsMargins(6, -1, 6, -1);
        labelCreditControlQuantityText = new QLabel(CreditControlDialog);
        labelCreditControlQuantityText->setObjectName(QStringLiteral("labelCreditControlQuantityText"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCreditControlQuantityText->setFont(font);

        formLayoutCreditControl1->setWidget(0, QFormLayout::LabelRole, labelCreditControlQuantityText);

        labelCreditControlQuantity = new QLabel(CreditControlDialog);
        labelCreditControlQuantity->setObjectName(QStringLiteral("labelCreditControlQuantity"));
        labelCreditControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlQuantity->setText(QStringLiteral("0"));
        labelCreditControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl1->setWidget(0, QFormLayout::FieldRole, labelCreditControlQuantity);

        labelCreditControlBytesText = new QLabel(CreditControlDialog);
        labelCreditControlBytesText->setObjectName(QStringLiteral("labelCreditControlBytesText"));
        labelCreditControlBytesText->setFont(font);

        formLayoutCreditControl1->setWidget(1, QFormLayout::LabelRole, labelCreditControlBytesText);

        labelCreditControlBytes = new QLabel(CreditControlDialog);
        labelCreditControlBytes->setObjectName(QStringLiteral("labelCreditControlBytes"));
        labelCreditControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlBytes->setText(QStringLiteral("0"));
        labelCreditControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl1->setWidget(1, QFormLayout::FieldRole, labelCreditControlBytes);


        horizontalLayoutTop->addLayout(formLayoutCreditControl1);

        formLayoutCreditControl2 = new QFormLayout();
        formLayoutCreditControl2->setObjectName(QStringLiteral("formLayoutCreditControl2"));
        formLayoutCreditControl2->setHorizontalSpacing(10);
        formLayoutCreditControl2->setVerticalSpacing(10);
        formLayoutCreditControl2->setContentsMargins(6, -1, 6, -1);
        labelCreditControlAmountText = new QLabel(CreditControlDialog);
        labelCreditControlAmountText->setObjectName(QStringLiteral("labelCreditControlAmountText"));
        labelCreditControlAmountText->setFont(font);

        formLayoutCreditControl2->setWidget(0, QFormLayout::LabelRole, labelCreditControlAmountText);

        labelCreditControlAmount = new QLabel(CreditControlDialog);
        labelCreditControlAmount->setObjectName(QStringLiteral("labelCreditControlAmount"));
        labelCreditControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlAmount->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl2->setWidget(0, QFormLayout::FieldRole, labelCreditControlAmount);

        labelCreditControlPriorityText = new QLabel(CreditControlDialog);
        labelCreditControlPriorityText->setObjectName(QStringLiteral("labelCreditControlPriorityText"));
        labelCreditControlPriorityText->setFont(font);

        formLayoutCreditControl2->setWidget(1, QFormLayout::LabelRole, labelCreditControlPriorityText);

        labelCreditControlPriority = new QLabel(CreditControlDialog);
        labelCreditControlPriority->setObjectName(QStringLiteral("labelCreditControlPriority"));
        labelCreditControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl2->setWidget(1, QFormLayout::FieldRole, labelCreditControlPriority);


        horizontalLayoutTop->addLayout(formLayoutCreditControl2);

        formLayoutCreditControl3 = new QFormLayout();
        formLayoutCreditControl3->setObjectName(QStringLiteral("formLayoutCreditControl3"));
        formLayoutCreditControl3->setHorizontalSpacing(10);
        formLayoutCreditControl3->setVerticalSpacing(10);
        formLayoutCreditControl3->setContentsMargins(6, -1, 6, -1);
        labelCreditControlFeeText = new QLabel(CreditControlDialog);
        labelCreditControlFeeText->setObjectName(QStringLiteral("labelCreditControlFeeText"));
        labelCreditControlFeeText->setFont(font);

        formLayoutCreditControl3->setWidget(0, QFormLayout::LabelRole, labelCreditControlFeeText);

        labelCreditControlFee = new QLabel(CreditControlDialog);
        labelCreditControlFee->setObjectName(QStringLiteral("labelCreditControlFee"));
        labelCreditControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlFee->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl3->setWidget(0, QFormLayout::FieldRole, labelCreditControlFee);

        labelCreditControlLowOutputText = new QLabel(CreditControlDialog);
        labelCreditControlLowOutputText->setObjectName(QStringLiteral("labelCreditControlLowOutputText"));
        labelCreditControlLowOutputText->setEnabled(false);
        labelCreditControlLowOutputText->setFont(font);

        formLayoutCreditControl3->setWidget(1, QFormLayout::LabelRole, labelCreditControlLowOutputText);

        labelCreditControlLowOutput = new QLabel(CreditControlDialog);
        labelCreditControlLowOutput->setObjectName(QStringLiteral("labelCreditControlLowOutput"));
        labelCreditControlLowOutput->setEnabled(false);
        labelCreditControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl3->setWidget(1, QFormLayout::FieldRole, labelCreditControlLowOutput);


        horizontalLayoutTop->addLayout(formLayoutCreditControl3);

        formLayoutCreditControl4 = new QFormLayout();
        formLayoutCreditControl4->setObjectName(QStringLiteral("formLayoutCreditControl4"));
        formLayoutCreditControl4->setHorizontalSpacing(10);
        formLayoutCreditControl4->setVerticalSpacing(10);
        formLayoutCreditControl4->setContentsMargins(6, -1, 6, -1);
        labelCreditControlAfterFeeText = new QLabel(CreditControlDialog);
        labelCreditControlAfterFeeText->setObjectName(QStringLiteral("labelCreditControlAfterFeeText"));
        labelCreditControlAfterFeeText->setFont(font);

        formLayoutCreditControl4->setWidget(0, QFormLayout::LabelRole, labelCreditControlAfterFeeText);

        labelCreditControlAfterFee = new QLabel(CreditControlDialog);
        labelCreditControlAfterFee->setObjectName(QStringLiteral("labelCreditControlAfterFee"));
        labelCreditControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlAfterFee->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl4->setWidget(0, QFormLayout::FieldRole, labelCreditControlAfterFee);

        labelCreditControlChangeText = new QLabel(CreditControlDialog);
        labelCreditControlChangeText->setObjectName(QStringLiteral("labelCreditControlChangeText"));
        labelCreditControlChangeText->setEnabled(false);
        labelCreditControlChangeText->setFont(font);

        formLayoutCreditControl4->setWidget(1, QFormLayout::LabelRole, labelCreditControlChangeText);

        labelCreditControlChange = new QLabel(CreditControlDialog);
        labelCreditControlChange->setObjectName(QStringLiteral("labelCreditControlChange"));
        labelCreditControlChange->setEnabled(false);
        labelCreditControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlChange->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl4->setWidget(1, QFormLayout::FieldRole, labelCreditControlChange);


        horizontalLayoutTop->addLayout(formLayoutCreditControl4);


        verticalLayout->addLayout(horizontalLayoutTop);

        frame = new QFrame(CreditControlDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayoutPanel = new QHBoxLayout();
        horizontalLayoutPanel->setSpacing(14);
        horizontalLayoutPanel->setObjectName(QStringLiteral("horizontalLayoutPanel"));
        pushButtonSelectAll = new QPushButton(frame);
        pushButtonSelectAll->setObjectName(QStringLiteral("pushButtonSelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSelectAll->sizePolicy().hasHeightForWidth());
        pushButtonSelectAll->setSizePolicy(sizePolicy);
        pushButtonSelectAll->setAutoDefault(false);

        horizontalLayoutPanel->addWidget(pushButtonSelectAll);

        pushButtonToggleLock = new QPushButton(frame);
        pushButtonToggleLock->setObjectName(QStringLiteral("pushButtonToggleLock"));
        sizePolicy.setHeightForWidth(pushButtonToggleLock->sizePolicy().hasHeightForWidth());
        pushButtonToggleLock->setSizePolicy(sizePolicy);
        pushButtonToggleLock->setAutoDefault(false);

        horizontalLayoutPanel->addWidget(pushButtonToggleLock);

        radioTreeMode = new QRadioButton(frame);
        radioTreeMode->setObjectName(QStringLiteral("radioTreeMode"));
        sizePolicy.setHeightForWidth(radioTreeMode->sizePolicy().hasHeightForWidth());
        radioTreeMode->setSizePolicy(sizePolicy);

        horizontalLayoutPanel->addWidget(radioTreeMode);

        radioListMode = new QRadioButton(frame);
        radioListMode->setObjectName(QStringLiteral("radioListMode"));
        sizePolicy.setHeightForWidth(radioListMode->sizePolicy().hasHeightForWidth());
        radioListMode->setSizePolicy(sizePolicy);
        radioListMode->setChecked(true);

        horizontalLayoutPanel->addWidget(radioListMode);

        labelLocked = new QLabel(frame);
        labelLocked->setObjectName(QStringLiteral("labelLocked"));

        horizontalLayoutPanel->addWidget(labelLocked);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer);


        horizontalLayout->addLayout(horizontalLayoutPanel);


        verticalLayout->addWidget(frame);

        treeWidget = new CreditControlTreeWidget(CreditControlDialog);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(8);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(CreditControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CreditControlDialog);

        QMetaObject::connectSlotsByName(CreditControlDialog);
    } // setupUi

    void retranslateUi(QDialog *CreditControlDialog)
    {
        CreditControlDialog->setWindowTitle(QApplication::translate("CreditControlDialog", "Credit Selection", 0));
        labelCreditControlQuantityText->setText(QApplication::translate("CreditControlDialog", "Quantity:", 0));
        labelCreditControlBytesText->setText(QApplication::translate("CreditControlDialog", "Bytes:", 0));
        labelCreditControlAmountText->setText(QApplication::translate("CreditControlDialog", "Amount:", 0));
        labelCreditControlPriorityText->setText(QApplication::translate("CreditControlDialog", "Priority:", 0));
        labelCreditControlPriority->setText(QApplication::translate("CreditControlDialog", "medium", 0));
        labelCreditControlFeeText->setText(QApplication::translate("CreditControlDialog", "Fee:", 0));
        labelCreditControlLowOutputText->setText(QApplication::translate("CreditControlDialog", "Dust:", 0));
        labelCreditControlLowOutput->setText(QApplication::translate("CreditControlDialog", "no", 0));
        labelCreditControlAfterFeeText->setText(QApplication::translate("CreditControlDialog", "After Fee:", 0));
        labelCreditControlChangeText->setText(QApplication::translate("CreditControlDialog", "Change:", 0));
        pushButtonSelectAll->setText(QApplication::translate("CreditControlDialog", "(un)select all", 0));
        pushButtonToggleLock->setText(QApplication::translate("CreditControlDialog", "toggle lock state", 0));
        radioTreeMode->setText(QApplication::translate("CreditControlDialog", "Tree mode", 0));
        radioListMode->setText(QApplication::translate("CreditControlDialog", "List mode", 0));
        labelLocked->setText(QApplication::translate("CreditControlDialog", "(1 locked)", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("CreditControlDialog", "Priority", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("CreditControlDialog", "Confirmations", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("CreditControlDialog", "Date", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("CreditControlDialog", "DS Rounds", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("CreditControlDialog", "Received with address", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("CreditControlDialog", "Received with label", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("CreditControlDialog", "Amount", 0));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(6, QApplication::translate("CreditControlDialog", "Confirmed", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CreditControlDialog: public Ui_CreditControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCONTROLDIALOG_H
