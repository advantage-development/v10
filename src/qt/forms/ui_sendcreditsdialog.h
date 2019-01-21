/********************************************************************************
** Form generated from reading UI file 'sendcreditsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCREDITSDIALOG_H
#define UI_SENDCREDITSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcreditamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCreditsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameCreditControl;
    QVBoxLayout *verticalLayoutCreditControl2;
    QVBoxLayout *verticalLayoutCreditControl;
    QHBoxLayout *horizontalLayoutCreditControl1;
    QLabel *labelCreditControlFeatures;
    QHBoxLayout *horizontalLayoutCreditControl2;
    QPushButton *pushButtonCreditControl;
    QLabel *labelCreditControlAutomaticallySelected;
    QLabel *labelCreditControlInsuffFunds;
    QSpacerItem *horizontalSpacerCreditControl;
    QWidget *widgetCreditControl;
    QHBoxLayout *horizontalLayoutCreditControl5;
    QHBoxLayout *horizontalLayoutCreditControl3;
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
    QHBoxLayout *horizontalLayoutCreditControl4;
    QCheckBox *checkBoxCreditControlChange;
    QValidatedLineEdit *lineEditCreditControlChange;
    QCheckBox *splitBlockCheckBox;
    QLineEdit *splitBlockLineEdit;
    QLabel *labelBlockSizeText;
    QLabel *labelBlockSize;
    QLabel *labelCreditControlChangeLabel;
    QSpacerItem *verticalSpacerCreditControl;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QFrame *frameFee;
    QVBoxLayout *verticalLayoutFee1;
    QVBoxLayout *verticalLayoutFee2;
    QHBoxLayout *horizontalLayoutFee1;
    QVBoxLayout *verticalLayoutFee7;
    QSpacerItem *verticalSpacerSmartFee;
    QHBoxLayout *horizontalLayoutSmartFee;
    QLabel *labelFeeHeadline;
    QLabel *labelFeeMinimized;
    QPushButton *buttonChooseFee;
    QPushButton *buttonMinimizeFee;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frameFeeSelection;
    QVBoxLayout *verticalLayoutFee12;
    QGridLayout *gridLayoutFee;
    QVBoxLayout *verticalLayoutFee8;
    QHBoxLayout *horizontalLayoutFee13;
    QRadioButton *radioCustomPerKilobyte;
    QRadioButton *radioCustomAtLeast;
    BitcoinAmountField *customFee;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayoutFee8;
    QCheckBox *checkBoxMinimumFee;
    QLabel *labelMinFeeWarning;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayoutFee4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayoutFee9;
    QRadioButton *radioCustomFee;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayoutFee3;
    QHBoxLayout *horizontalLayoutFee12;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayoutFee9;
    QVBoxLayout *verticalLayoutFee6;
    QLabel *labelSmartFee3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayoutFee5;
    QSlider *sliderSmartFee;
    QHBoxLayout *horizontalLayoutFee10;
    QLabel *labelSmartFeeNormal;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelSmartFeeFast;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelSmartFee_2;
    QRadioButton *radioSmartFee;
    QLabel *labelCustomFee;
    QLabel *labelSmartFee;
    QLabel *labelFeeEstimation;
    QLabel *labelSmartFee2;
    QHBoxLayout *horizontalLayoutFee5;
    QCheckBox *checkBoxFreeTx;
    QLabel *labelFreeTx;
    QSpacerItem *horizontalSpacerFee5;
    QSpacerItem *verticalSpacerFee2;
    QSpacerItem *verticalSpacerFee;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendButton;
    QPushButton *clearButton;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkUseObfuscation;
    QCheckBox *checkSwiftTX;
    QLabel *label;
    QLabel *labelBalance;
    QButtonGroup *groupFee;
    QButtonGroup *groupCustomFee;

    void setupUi(QDialog *SendCreditsDialog)
    {
        if (SendCreditsDialog->objectName().isEmpty())
            SendCreditsDialog->setObjectName(QStringLiteral("SendCreditsDialog"));
        SendCreditsDialog->resize(850, 610);
        verticalLayout = new QVBoxLayout(SendCreditsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 8);
        frameCreditControl = new QFrame(SendCreditsDialog);
        frameCreditControl->setObjectName(QStringLiteral("frameCreditControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCreditControl->sizePolicy().hasHeightForWidth());
        frameCreditControl->setSizePolicy(sizePolicy);
        frameCreditControl->setMaximumSize(QSize(16777215, 16777215));
        frameCreditControl->setFrameShape(QFrame::StyledPanel);
        frameCreditControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCreditControl2 = new QVBoxLayout(frameCreditControl);
        verticalLayoutCreditControl2->setSpacing(0);
        verticalLayoutCreditControl2->setObjectName(QStringLiteral("verticalLayoutCreditControl2"));
        verticalLayoutCreditControl2->setContentsMargins(0, 0, 0, 6);
        verticalLayoutCreditControl = new QVBoxLayout();
        verticalLayoutCreditControl->setSpacing(0);
        verticalLayoutCreditControl->setObjectName(QStringLiteral("verticalLayoutCreditControl"));
        verticalLayoutCreditControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutCreditControl1 = new QHBoxLayout();
        horizontalLayoutCreditControl1->setObjectName(QStringLiteral("horizontalLayoutCreditControl1"));
        horizontalLayoutCreditControl1->setContentsMargins(-1, -1, -1, 15);
        labelCreditControlFeatures = new QLabel(frameCreditControl);
        labelCreditControlFeatures->setObjectName(QStringLiteral("labelCreditControlFeatures"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCreditControlFeatures->sizePolicy().hasHeightForWidth());
        labelCreditControlFeatures->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCreditControlFeatures->setFont(font);
        labelCreditControlFeatures->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutCreditControl1->addWidget(labelCreditControlFeatures);


        verticalLayoutCreditControl->addLayout(horizontalLayoutCreditControl1);

        horizontalLayoutCreditControl2 = new QHBoxLayout();
        horizontalLayoutCreditControl2->setSpacing(8);
        horizontalLayoutCreditControl2->setObjectName(QStringLiteral("horizontalLayoutCreditControl2"));
        horizontalLayoutCreditControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonCreditControl = new QPushButton(frameCreditControl);
        pushButtonCreditControl->setObjectName(QStringLiteral("pushButtonCreditControl"));
        pushButtonCreditControl->setStyleSheet(QStringLiteral(""));
        pushButtonCreditControl->setAutoDefault(false);

        horizontalLayoutCreditControl2->addWidget(pushButtonCreditControl);

        labelCreditControlAutomaticallySelected = new QLabel(frameCreditControl);
        labelCreditControlAutomaticallySelected->setObjectName(QStringLiteral("labelCreditControlAutomaticallySelected"));
        labelCreditControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCreditControl2->addWidget(labelCreditControlAutomaticallySelected);

        labelCreditControlInsuffFunds = new QLabel(frameCreditControl);
        labelCreditControlInsuffFunds->setObjectName(QStringLiteral("labelCreditControlInsuffFunds"));
        labelCreditControlInsuffFunds->setFont(font);
        labelCreditControlInsuffFunds->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));
        labelCreditControlInsuffFunds->setMargin(5);

        horizontalLayoutCreditControl2->addWidget(labelCreditControlInsuffFunds);

        horizontalSpacerCreditControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCreditControl2->addItem(horizontalSpacerCreditControl);


        verticalLayoutCreditControl->addLayout(horizontalLayoutCreditControl2);

        widgetCreditControl = new QWidget(frameCreditControl);
        widgetCreditControl->setObjectName(QStringLiteral("widgetCreditControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetCreditControl->sizePolicy().hasHeightForWidth());
        widgetCreditControl->setSizePolicy(sizePolicy2);
        widgetCreditControl->setMinimumSize(QSize(0, 0));
        widgetCreditControl->setStyleSheet(QStringLiteral(""));
        horizontalLayoutCreditControl5 = new QHBoxLayout(widgetCreditControl);
        horizontalLayoutCreditControl5->setObjectName(QStringLiteral("horizontalLayoutCreditControl5"));
        horizontalLayoutCreditControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCreditControl3 = new QHBoxLayout();
        horizontalLayoutCreditControl3->setSpacing(20);
        horizontalLayoutCreditControl3->setObjectName(QStringLiteral("horizontalLayoutCreditControl3"));
        horizontalLayoutCreditControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCreditControl1 = new QFormLayout();
        formLayoutCreditControl1->setObjectName(QStringLiteral("formLayoutCreditControl1"));
        formLayoutCreditControl1->setHorizontalSpacing(10);
        formLayoutCreditControl1->setVerticalSpacing(14);
        formLayoutCreditControl1->setContentsMargins(10, 4, 6, -1);
        labelCreditControlQuantityText = new QLabel(widgetCreditControl);
        labelCreditControlQuantityText->setObjectName(QStringLiteral("labelCreditControlQuantityText"));
        labelCreditControlQuantityText->setFont(font);
        labelCreditControlQuantityText->setMargin(0);

        formLayoutCreditControl1->setWidget(0, QFormLayout::LabelRole, labelCreditControlQuantityText);

        labelCreditControlQuantity = new QLabel(widgetCreditControl);
        labelCreditControlQuantity->setObjectName(QStringLiteral("labelCreditControlQuantity"));
        labelCreditControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlQuantity->setText(QStringLiteral("0"));
        labelCreditControlQuantity->setMargin(0);
        labelCreditControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl1->setWidget(0, QFormLayout::FieldRole, labelCreditControlQuantity);

        labelCreditControlBytesText = new QLabel(widgetCreditControl);
        labelCreditControlBytesText->setObjectName(QStringLiteral("labelCreditControlBytesText"));
        labelCreditControlBytesText->setFont(font);

        formLayoutCreditControl1->setWidget(1, QFormLayout::LabelRole, labelCreditControlBytesText);

        labelCreditControlBytes = new QLabel(widgetCreditControl);
        labelCreditControlBytes->setObjectName(QStringLiteral("labelCreditControlBytes"));
        labelCreditControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlBytes->setText(QStringLiteral("0"));
        labelCreditControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl1->setWidget(1, QFormLayout::FieldRole, labelCreditControlBytes);


        horizontalLayoutCreditControl3->addLayout(formLayoutCreditControl1);

        formLayoutCreditControl2 = new QFormLayout();
        formLayoutCreditControl2->setObjectName(QStringLiteral("formLayoutCreditControl2"));
        formLayoutCreditControl2->setHorizontalSpacing(10);
        formLayoutCreditControl2->setVerticalSpacing(14);
        formLayoutCreditControl2->setContentsMargins(6, 4, 6, -1);
        labelCreditControlAmountText = new QLabel(widgetCreditControl);
        labelCreditControlAmountText->setObjectName(QStringLiteral("labelCreditControlAmountText"));
        labelCreditControlAmountText->setFont(font);
        labelCreditControlAmountText->setMargin(0);

        formLayoutCreditControl2->setWidget(0, QFormLayout::LabelRole, labelCreditControlAmountText);

        labelCreditControlAmount = new QLabel(widgetCreditControl);
        labelCreditControlAmount->setObjectName(QStringLiteral("labelCreditControlAmount"));
        labelCreditControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlAmount->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl2->setWidget(0, QFormLayout::FieldRole, labelCreditControlAmount);

        labelCreditControlPriorityText = new QLabel(widgetCreditControl);
        labelCreditControlPriorityText->setObjectName(QStringLiteral("labelCreditControlPriorityText"));
        labelCreditControlPriorityText->setFont(font);

        formLayoutCreditControl2->setWidget(1, QFormLayout::LabelRole, labelCreditControlPriorityText);

        labelCreditControlPriority = new QLabel(widgetCreditControl);
        labelCreditControlPriority->setObjectName(QStringLiteral("labelCreditControlPriority"));
        labelCreditControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl2->setWidget(1, QFormLayout::FieldRole, labelCreditControlPriority);


        horizontalLayoutCreditControl3->addLayout(formLayoutCreditControl2);

        formLayoutCreditControl3 = new QFormLayout();
        formLayoutCreditControl3->setObjectName(QStringLiteral("formLayoutCreditControl3"));
        formLayoutCreditControl3->setHorizontalSpacing(10);
        formLayoutCreditControl3->setVerticalSpacing(14);
        formLayoutCreditControl3->setContentsMargins(6, 4, 6, -1);
        labelCreditControlFeeText = new QLabel(widgetCreditControl);
        labelCreditControlFeeText->setObjectName(QStringLiteral("labelCreditControlFeeText"));
        labelCreditControlFeeText->setFont(font);
        labelCreditControlFeeText->setMargin(0);

        formLayoutCreditControl3->setWidget(0, QFormLayout::LabelRole, labelCreditControlFeeText);

        labelCreditControlFee = new QLabel(widgetCreditControl);
        labelCreditControlFee->setObjectName(QStringLiteral("labelCreditControlFee"));
        labelCreditControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlFee->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl3->setWidget(0, QFormLayout::FieldRole, labelCreditControlFee);

        labelCreditControlLowOutputText = new QLabel(widgetCreditControl);
        labelCreditControlLowOutputText->setObjectName(QStringLiteral("labelCreditControlLowOutputText"));
        labelCreditControlLowOutputText->setFont(font);

        formLayoutCreditControl3->setWidget(1, QFormLayout::LabelRole, labelCreditControlLowOutputText);

        labelCreditControlLowOutput = new QLabel(widgetCreditControl);
        labelCreditControlLowOutput->setObjectName(QStringLiteral("labelCreditControlLowOutput"));
        labelCreditControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl3->setWidget(1, QFormLayout::FieldRole, labelCreditControlLowOutput);


        horizontalLayoutCreditControl3->addLayout(formLayoutCreditControl3);

        formLayoutCreditControl4 = new QFormLayout();
        formLayoutCreditControl4->setObjectName(QStringLiteral("formLayoutCreditControl4"));
        formLayoutCreditControl4->setHorizontalSpacing(10);
        formLayoutCreditControl4->setVerticalSpacing(14);
        formLayoutCreditControl4->setContentsMargins(6, 4, 6, -1);
        labelCreditControlAfterFeeText = new QLabel(widgetCreditControl);
        labelCreditControlAfterFeeText->setObjectName(QStringLiteral("labelCreditControlAfterFeeText"));
        labelCreditControlAfterFeeText->setFont(font);
        labelCreditControlAfterFeeText->setMargin(0);

        formLayoutCreditControl4->setWidget(0, QFormLayout::LabelRole, labelCreditControlAfterFeeText);

        labelCreditControlAfterFee = new QLabel(widgetCreditControl);
        labelCreditControlAfterFee->setObjectName(QStringLiteral("labelCreditControlAfterFee"));
        labelCreditControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlAfterFee->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl4->setWidget(0, QFormLayout::FieldRole, labelCreditControlAfterFee);

        labelCreditControlChangeText = new QLabel(widgetCreditControl);
        labelCreditControlChangeText->setObjectName(QStringLiteral("labelCreditControlChangeText"));
        labelCreditControlChangeText->setFont(font);

        formLayoutCreditControl4->setWidget(1, QFormLayout::LabelRole, labelCreditControlChangeText);

        labelCreditControlChange = new QLabel(widgetCreditControl);
        labelCreditControlChange->setObjectName(QStringLiteral("labelCreditControlChange"));
        labelCreditControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCreditControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCreditControlChange->setText(QStringLiteral("0.00 USDA"));
        labelCreditControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCreditControl4->setWidget(1, QFormLayout::FieldRole, labelCreditControlChange);


        horizontalLayoutCreditControl3->addLayout(formLayoutCreditControl4);

        horizontalLayoutCreditControl3->setStretch(3, 1);

        horizontalLayoutCreditControl5->addLayout(horizontalLayoutCreditControl3);


        verticalLayoutCreditControl->addWidget(widgetCreditControl);

        horizontalLayoutCreditControl4 = new QHBoxLayout();
        horizontalLayoutCreditControl4->setSpacing(12);
        horizontalLayoutCreditControl4->setObjectName(QStringLiteral("horizontalLayoutCreditControl4"));
        horizontalLayoutCreditControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCreditControl4->setContentsMargins(-1, 5, 5, -1);
        checkBoxCreditControlChange = new QCheckBox(frameCreditControl);
        checkBoxCreditControlChange->setObjectName(QStringLiteral("checkBoxCreditControlChange"));

        horizontalLayoutCreditControl4->addWidget(checkBoxCreditControlChange);

        lineEditCreditControlChange = new QValidatedLineEdit(frameCreditControl);
        lineEditCreditControlChange->setObjectName(QStringLiteral("lineEditCreditControlChange"));
        lineEditCreditControlChange->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditCreditControlChange->sizePolicy().hasHeightForWidth());
        lineEditCreditControlChange->setSizePolicy(sizePolicy3);

        horizontalLayoutCreditControl4->addWidget(lineEditCreditControlChange);

        splitBlockCheckBox = new QCheckBox(frameCreditControl);
        splitBlockCheckBox->setObjectName(QStringLiteral("splitBlockCheckBox"));

        horizontalLayoutCreditControl4->addWidget(splitBlockCheckBox);

        splitBlockLineEdit = new QLineEdit(frameCreditControl);
        splitBlockLineEdit->setObjectName(QStringLiteral("splitBlockLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(50);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitBlockLineEdit->sizePolicy().hasHeightForWidth());
        splitBlockLineEdit->setSizePolicy(sizePolicy4);

        horizontalLayoutCreditControl4->addWidget(splitBlockLineEdit);

        labelBlockSizeText = new QLabel(frameCreditControl);
        labelBlockSizeText->setObjectName(QStringLiteral("labelBlockSizeText"));

        horizontalLayoutCreditControl4->addWidget(labelBlockSizeText);

        labelBlockSize = new QLabel(frameCreditControl);
        labelBlockSize->setObjectName(QStringLiteral("labelBlockSize"));

        horizontalLayoutCreditControl4->addWidget(labelBlockSize);

        labelCreditControlChangeLabel = new QLabel(frameCreditControl);
        labelCreditControlChangeLabel->setObjectName(QStringLiteral("labelCreditControlChangeLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelCreditControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCreditControlChangeLabel->setSizePolicy(sizePolicy5);
        labelCreditControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCreditControlChangeLabel->setMargin(3);

        horizontalLayoutCreditControl4->addWidget(labelCreditControlChangeLabel);


        verticalLayoutCreditControl->addLayout(horizontalLayoutCreditControl4);

        verticalSpacerCreditControl = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCreditControl->addItem(verticalSpacerCreditControl);

        verticalLayoutCreditControl->setStretch(4, 1);

        verticalLayoutCreditControl2->addLayout(verticalLayoutCreditControl);


        verticalLayout->addWidget(frameCreditControl);

        scrollArea = new QScrollArea(SendCreditsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 830, 95));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QStringLiteral("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        frameFee = new QFrame(SendCreditsDialog);
        frameFee->setObjectName(QStringLiteral("frameFee"));
        sizePolicy.setHeightForWidth(frameFee->sizePolicy().hasHeightForWidth());
        frameFee->setSizePolicy(sizePolicy);
        frameFee->setMaximumSize(QSize(16777215, 16777215));
        frameFee->setFrameShape(QFrame::StyledPanel);
        frameFee->setFrameShadow(QFrame::Sunken);
        verticalLayoutFee1 = new QVBoxLayout(frameFee);
        verticalLayoutFee1->setSpacing(0);
        verticalLayoutFee1->setObjectName(QStringLiteral("verticalLayoutFee1"));
        verticalLayoutFee1->setContentsMargins(0, 0, 0, 0);
        verticalLayoutFee2 = new QVBoxLayout();
        verticalLayoutFee2->setSpacing(0);
        verticalLayoutFee2->setObjectName(QStringLiteral("verticalLayoutFee2"));
        verticalLayoutFee2->setContentsMargins(10, 0, -1, -1);
        horizontalLayoutFee1 = new QHBoxLayout();
        horizontalLayoutFee1->setObjectName(QStringLiteral("horizontalLayoutFee1"));
        horizontalLayoutFee1->setContentsMargins(-1, -1, -1, 0);
        verticalLayoutFee7 = new QVBoxLayout();
        verticalLayoutFee7->setSpacing(0);
        verticalLayoutFee7->setObjectName(QStringLiteral("verticalLayoutFee7"));
        verticalSpacerSmartFee = new QSpacerItem(1, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutFee7->addItem(verticalSpacerSmartFee);

        horizontalLayoutSmartFee = new QHBoxLayout();
        horizontalLayoutSmartFee->setSpacing(10);
        horizontalLayoutSmartFee->setObjectName(QStringLiteral("horizontalLayoutSmartFee"));
        labelFeeHeadline = new QLabel(frameFee);
        labelFeeHeadline->setObjectName(QStringLiteral("labelFeeHeadline"));
        sizePolicy1.setHeightForWidth(labelFeeHeadline->sizePolicy().hasHeightForWidth());
        labelFeeHeadline->setSizePolicy(sizePolicy1);
        labelFeeHeadline->setFont(font);
        labelFeeHeadline->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutSmartFee->addWidget(labelFeeHeadline);

        labelFeeMinimized = new QLabel(frameFee);
        labelFeeMinimized->setObjectName(QStringLiteral("labelFeeMinimized"));

        horizontalLayoutSmartFee->addWidget(labelFeeMinimized);

        buttonChooseFee = new QPushButton(frameFee);
        buttonChooseFee->setObjectName(QStringLiteral("buttonChooseFee"));

        horizontalLayoutSmartFee->addWidget(buttonChooseFee);

        buttonMinimizeFee = new QPushButton(frameFee);
        buttonMinimizeFee->setObjectName(QStringLiteral("buttonMinimizeFee"));

        horizontalLayoutSmartFee->addWidget(buttonMinimizeFee);


        verticalLayoutFee7->addLayout(horizontalLayoutSmartFee);

        verticalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee7->addItem(verticalSpacer_5);


        horizontalLayoutFee1->addLayout(verticalLayoutFee7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee1->addItem(horizontalSpacer_4);


        verticalLayoutFee2->addLayout(horizontalLayoutFee1);

        frameFeeSelection = new QFrame(frameFee);
        frameFeeSelection->setObjectName(QStringLiteral("frameFeeSelection"));
        verticalLayoutFee12 = new QVBoxLayout(frameFeeSelection);
        verticalLayoutFee12->setSpacing(0);
        verticalLayoutFee12->setObjectName(QStringLiteral("verticalLayoutFee12"));
        verticalLayoutFee12->setContentsMargins(0, 0, 0, 0);
        gridLayoutFee = new QGridLayout();
        gridLayoutFee->setObjectName(QStringLiteral("gridLayoutFee"));
        gridLayoutFee->setHorizontalSpacing(10);
        gridLayoutFee->setVerticalSpacing(4);
        gridLayoutFee->setContentsMargins(-1, 10, -1, 4);
        verticalLayoutFee8 = new QVBoxLayout();
        verticalLayoutFee8->setSpacing(6);
        verticalLayoutFee8->setObjectName(QStringLiteral("verticalLayoutFee8"));
        horizontalLayoutFee13 = new QHBoxLayout();
        horizontalLayoutFee13->setObjectName(QStringLiteral("horizontalLayoutFee13"));
        radioCustomPerKilobyte = new QRadioButton(frameFeeSelection);
        groupCustomFee = new QButtonGroup(SendCreditsDialog);
        groupCustomFee->setObjectName(QStringLiteral("groupCustomFee"));
        groupCustomFee->addButton(radioCustomPerKilobyte);
        radioCustomPerKilobyte->setObjectName(QStringLiteral("radioCustomPerKilobyte"));
        radioCustomPerKilobyte->setChecked(true);

        horizontalLayoutFee13->addWidget(radioCustomPerKilobyte);

        radioCustomAtLeast = new QRadioButton(frameFeeSelection);
        groupCustomFee->addButton(radioCustomAtLeast);
        radioCustomAtLeast->setObjectName(QStringLiteral("radioCustomAtLeast"));

        horizontalLayoutFee13->addWidget(radioCustomAtLeast);

        customFee = new BitcoinAmountField(frameFeeSelection);
        customFee->setObjectName(QStringLiteral("customFee"));

        horizontalLayoutFee13->addWidget(customFee);

        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee13->addItem(horizontalSpacer_6);


        verticalLayoutFee8->addLayout(horizontalLayoutFee13);

        horizontalLayoutFee8 = new QHBoxLayout();
        horizontalLayoutFee8->setObjectName(QStringLiteral("horizontalLayoutFee8"));
        checkBoxMinimumFee = new QCheckBox(frameFeeSelection);
        checkBoxMinimumFee->setObjectName(QStringLiteral("checkBoxMinimumFee"));

        horizontalLayoutFee8->addWidget(checkBoxMinimumFee);

        labelMinFeeWarning = new QLabel(frameFeeSelection);
        labelMinFeeWarning->setObjectName(QStringLiteral("labelMinFeeWarning"));
        labelMinFeeWarning->setEnabled(true);
        labelMinFeeWarning->setMargin(5);

        horizontalLayoutFee8->addWidget(labelMinFeeWarning);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee8->addItem(horizontalSpacer_2);


        verticalLayoutFee8->addLayout(horizontalLayoutFee8);


        gridLayoutFee->addLayout(verticalLayoutFee8, 2, 4, 1, 1);

        verticalLayoutFee4 = new QVBoxLayout();
        verticalLayoutFee4->setObjectName(QStringLiteral("verticalLayoutFee4"));
        verticalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee4->addItem(verticalSpacer_2);

        verticalLayoutFee4->setStretch(0, 1);

        gridLayoutFee->addLayout(verticalLayoutFee4, 1, 0, 1, 1);

        verticalLayoutFee9 = new QVBoxLayout();
        verticalLayoutFee9->setObjectName(QStringLiteral("verticalLayoutFee9"));
        radioCustomFee = new QRadioButton(frameFeeSelection);
        groupFee = new QButtonGroup(SendCreditsDialog);
        groupFee->setObjectName(QStringLiteral("groupFee"));
        groupFee->addButton(radioCustomFee);
        radioCustomFee->setObjectName(QStringLiteral("radioCustomFee"));

        verticalLayoutFee9->addWidget(radioCustomFee);

        verticalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee9->addItem(verticalSpacer_6);

        verticalLayoutFee9->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee9, 2, 0, 1, 1);

        verticalLayoutFee3 = new QVBoxLayout();
        verticalLayoutFee3->setSpacing(6);
        verticalLayoutFee3->setObjectName(QStringLiteral("verticalLayoutFee3"));
        verticalLayoutFee3->setContentsMargins(-1, 2, -1, -1);
        horizontalLayoutFee12 = new QHBoxLayout();
        horizontalLayoutFee12->setObjectName(QStringLiteral("horizontalLayoutFee12"));
        horizontalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee12->addItem(horizontalSpacer_5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee12);

        horizontalLayoutFee9 = new QHBoxLayout();
        horizontalLayoutFee9->setObjectName(QStringLiteral("horizontalLayoutFee9"));
        verticalLayoutFee6 = new QVBoxLayout();
        verticalLayoutFee6->setObjectName(QStringLiteral("verticalLayoutFee6"));
        labelSmartFee3 = new QLabel(frameFeeSelection);
        labelSmartFee3->setObjectName(QStringLiteral("labelSmartFee3"));
        labelSmartFee3->setMargin(2);

        verticalLayoutFee6->addWidget(labelSmartFee3);

        verticalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee6->addItem(verticalSpacer_3);


        horizontalLayoutFee9->addLayout(verticalLayoutFee6);

        verticalLayoutFee5 = new QVBoxLayout();
        verticalLayoutFee5->setObjectName(QStringLiteral("verticalLayoutFee5"));
        verticalLayoutFee5->setContentsMargins(-1, -1, 30, -1);
        sliderSmartFee = new QSlider(frameFeeSelection);
        sliderSmartFee->setObjectName(QStringLiteral("sliderSmartFee"));
        sliderSmartFee->setMinimum(0);
        sliderSmartFee->setMaximum(24);
        sliderSmartFee->setPageStep(1);
        sliderSmartFee->setValue(0);
        sliderSmartFee->setOrientation(Qt::Horizontal);
        sliderSmartFee->setInvertedAppearance(false);
        sliderSmartFee->setInvertedControls(false);
        sliderSmartFee->setTickPosition(QSlider::NoTicks);

        verticalLayoutFee5->addWidget(sliderSmartFee);

        horizontalLayoutFee10 = new QHBoxLayout();
        horizontalLayoutFee10->setObjectName(QStringLiteral("horizontalLayoutFee10"));
        labelSmartFeeNormal = new QLabel(frameFeeSelection);
        labelSmartFeeNormal->setObjectName(QStringLiteral("labelSmartFeeNormal"));

        horizontalLayoutFee10->addWidget(labelSmartFeeNormal);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee10->addItem(horizontalSpacer_3);

        labelSmartFeeFast = new QLabel(frameFeeSelection);
        labelSmartFeeFast->setObjectName(QStringLiteral("labelSmartFeeFast"));

        horizontalLayoutFee10->addWidget(labelSmartFeeFast);


        verticalLayoutFee5->addLayout(horizontalLayoutFee10);


        horizontalLayoutFee9->addLayout(verticalLayoutFee5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee9);

        verticalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee3->addItem(verticalSpacer_4);

        verticalLayoutFee3->setStretch(2, 1);

        gridLayoutFee->addLayout(verticalLayoutFee3, 1, 4, 1, 1);

        labelSmartFee_2 = new QLabel(frameFeeSelection);
        labelSmartFee_2->setObjectName(QStringLiteral("labelSmartFee_2"));

        gridLayoutFee->addWidget(labelSmartFee_2, 0, 1, 1, 1);

        radioSmartFee = new QRadioButton(frameFeeSelection);
        groupFee->addButton(radioSmartFee);
        radioSmartFee->setObjectName(QStringLiteral("radioSmartFee"));
        radioSmartFee->setChecked(true);

        gridLayoutFee->addWidget(radioSmartFee, 0, 0, 1, 1);

        labelCustomFee = new QLabel(frameFeeSelection);
        labelCustomFee->setObjectName(QStringLiteral("labelCustomFee"));
        labelCustomFee->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayoutFee->addWidget(labelCustomFee, 2, 1, 1, 1);

        labelSmartFee = new QLabel(frameFeeSelection);
        labelSmartFee->setObjectName(QStringLiteral("labelSmartFee"));
        labelSmartFee->setMargin(2);

        gridLayoutFee->addWidget(labelSmartFee, 0, 2, 1, 1);

        labelFeeEstimation = new QLabel(frameFeeSelection);
        labelFeeEstimation->setObjectName(QStringLiteral("labelFeeEstimation"));

        gridLayoutFee->addWidget(labelFeeEstimation, 0, 3, 1, 1);

        labelSmartFee2 = new QLabel(frameFeeSelection);
        labelSmartFee2->setObjectName(QStringLiteral("labelSmartFee2"));
        labelSmartFee2->setAlignment(Qt::AlignHCenter);
        labelSmartFee2->setWordWrap(true);
        labelSmartFee2->setMargin(2);

        gridLayoutFee->addWidget(labelSmartFee2, 0, 4, 1, 1);


        verticalLayoutFee12->addLayout(gridLayoutFee);

        horizontalLayoutFee5 = new QHBoxLayout();
        horizontalLayoutFee5->setSpacing(8);
        horizontalLayoutFee5->setObjectName(QStringLiteral("horizontalLayoutFee5"));
        horizontalLayoutFee5->setContentsMargins(-1, -1, -1, 4);
        checkBoxFreeTx = new QCheckBox(frameFeeSelection);
        checkBoxFreeTx->setObjectName(QStringLiteral("checkBoxFreeTx"));

        horizontalLayoutFee5->addWidget(checkBoxFreeTx);

        labelFreeTx = new QLabel(frameFeeSelection);
        labelFreeTx->setObjectName(QStringLiteral("labelFreeTx"));
        labelFreeTx->setMargin(5);

        horizontalLayoutFee5->addWidget(labelFreeTx);

        horizontalSpacerFee5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee5->addItem(horizontalSpacerFee5);


        verticalLayoutFee12->addLayout(horizontalLayoutFee5);

        verticalSpacerFee2 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee12->addItem(verticalSpacerFee2);


        verticalLayoutFee2->addWidget(frameFeeSelection);

        verticalSpacerFee = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee2->addItem(verticalSpacerFee);


        verticalLayoutFee1->addLayout(verticalLayoutFee2);


        verticalLayout->addWidget(frameFee);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sendButton = new QPushButton(SendCreditsDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMinimumSize(QSize(150, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon);
        sendButton->setAutoDefault(false);

        horizontalLayout->addWidget(sendButton);

        clearButton = new QPushButton(SendCreditsDialog);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy6);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon1);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        addButton = new QPushButton(SendCreditsDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon2);
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkUseObfuscation = new QCheckBox(SendCreditsDialog);
        checkUseObfuscation->setObjectName(QStringLiteral("checkUseObfuscation"));
        checkUseObfuscation->setMinimumSize(QSize(95, 0));
        checkUseObfuscation->setChecked(false);

        horizontalLayout_2->addWidget(checkUseObfuscation);

        checkSwiftTX = new QCheckBox(SendCreditsDialog);
        checkSwiftTX->setObjectName(QStringLiteral("checkSwiftTX"));
        checkSwiftTX->setEnabled(true);
        checkSwiftTX->setMinimumSize(QSize(85, 0));

        horizontalLayout_2->addWidget(checkSwiftTX);

        label = new QLabel(SendCreditsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(SendCreditsDialog);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy7);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("123.456 USDA"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(SendCreditsDialog);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(SendCreditsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCreditsDialog)
    {
        SendCreditsDialog->setWindowTitle(QApplication::translate("SendCreditsDialog", "Send Credits", 0));
        labelCreditControlFeatures->setText(QApplication::translate("SendCreditsDialog", "Coin Control Features", 0));
        pushButtonCreditControl->setText(QApplication::translate("SendCreditsDialog", "Inputs...", 0));
        labelCreditControlAutomaticallySelected->setText(QApplication::translate("SendCreditsDialog", "automatically selected", 0));
        labelCreditControlInsuffFunds->setText(QApplication::translate("SendCreditsDialog", "Insufficient funds!", 0));
        labelCreditControlQuantityText->setText(QApplication::translate("SendCreditsDialog", "Quantity:", 0));
        labelCreditControlBytesText->setText(QApplication::translate("SendCreditsDialog", "Bytes:", 0));
        labelCreditControlAmountText->setText(QApplication::translate("SendCreditsDialog", "Amount:", 0));
        labelCreditControlPriorityText->setText(QApplication::translate("SendCreditsDialog", "Priority:", 0));
        labelCreditControlPriority->setText(QApplication::translate("SendCreditsDialog", "medium", 0));
        labelCreditControlFeeText->setText(QApplication::translate("SendCreditsDialog", "Fee:", 0));
        labelCreditControlLowOutputText->setText(QApplication::translate("SendCreditsDialog", "Dust:", 0));
        labelCreditControlLowOutput->setText(QApplication::translate("SendCreditsDialog", "no", 0));
        labelCreditControlAfterFeeText->setText(QApplication::translate("SendCreditsDialog", "After Fee:", 0));
        labelCreditControlChangeText->setText(QApplication::translate("SendCreditsDialog", "Change:", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxCreditControlChange->setToolTip(QApplication::translate("SendCreditsDialog", "If this is activated, but the change address is empty or invalid, change will be sent to a newly generated address.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxCreditControlChange->setText(QApplication::translate("SendCreditsDialog", "Custom change address", 0));
        splitBlockCheckBox->setText(QApplication::translate("SendCreditsDialog", "Split UTXO", 0));
        splitBlockLineEdit->setPlaceholderText(QApplication::translate("SendCreditsDialog", "# of outputs", 0));
        labelBlockSizeText->setText(QApplication::translate("SendCreditsDialog", "UTXO Size:", 0));
        labelBlockSize->setText(QApplication::translate("SendCreditsDialog", "0 USDA", 0));
        labelCreditControlChangeLabel->setText(QString());
        labelFeeHeadline->setText(QApplication::translate("SendCreditsDialog", "Transaction Fee:", 0));
        labelFeeMinimized->setText(QString());
        buttonChooseFee->setText(QApplication::translate("SendCreditsDialog", "Choose...", 0));
#ifndef QT_NO_TOOLTIP
        buttonMinimizeFee->setToolTip(QApplication::translate("SendCreditsDialog", "collapse fee-settings", 0));
#endif // QT_NO_TOOLTIP
        buttonMinimizeFee->setText(QApplication::translate("SendCreditsDialog", "Minimize", 0));
#ifndef QT_NO_TOOLTIP
        radioCustomPerKilobyte->setToolTip(QApplication::translate("SendCreditsDialog", "If the custom fee is set to 1000 uUSDAs and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 uUSDAs in fee,<br />while \"at least\" pays 1000 uUSDAs. For transactions bigger than a kilobyte both pay by kilobyte.", 0));
#endif // QT_NO_TOOLTIP
        radioCustomPerKilobyte->setText(QApplication::translate("SendCreditsDialog", "per kilobyte", 0));
#ifndef QT_NO_TOOLTIP
        radioCustomAtLeast->setToolTip(QApplication::translate("SendCreditsDialog", "If the custom fee is set to 1000 uUSDAs and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 uUSDAs in fee,<br />while \"total at least\" pays 1000 uUSDAs. For transactions bigger than a kilobyte both pay by kilobyte.", 0));
#endif // QT_NO_TOOLTIP
        radioCustomAtLeast->setText(QApplication::translate("SendCreditsDialog", "total at least", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxMinimumFee->setToolTip(QApplication::translate("SendCreditsDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks.<br />But be aware that this can end up in a never confirming transaction once there is more demand for Advantage transactions than the network can process.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxMinimumFee->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelMinFeeWarning->setToolTip(QApplication::translate("SendCreditsDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks.<br />But be aware that this can end up in a never confirming transaction once there is more demand for Advantage transactions than the network can process.", 0));
#endif // QT_NO_TOOLTIP
        labelMinFeeWarning->setText(QApplication::translate("SendCreditsDialog", "(read the tooltip)", 0));
        radioCustomFee->setText(QString());
        labelSmartFee3->setText(QApplication::translate("SendCreditsDialog", "Confirmation time:", 0));
        labelSmartFeeNormal->setText(QApplication::translate("SendCreditsDialog", "normal", 0));
        labelSmartFeeFast->setText(QApplication::translate("SendCreditsDialog", "fast", 0));
        labelSmartFee_2->setText(QApplication::translate("SendCreditsDialog", "Recommended", 0));
        radioSmartFee->setText(QString());
        labelCustomFee->setText(QApplication::translate("SendCreditsDialog", "Custom:", 0));
        labelSmartFee->setText(QString());
        labelFeeEstimation->setText(QString());
        labelSmartFee2->setText(QApplication::translate("SendCreditsDialog", "(Smart fee not initialized yet. This usually takes a few blocks...)", 0));
        checkBoxFreeTx->setText(QApplication::translate("SendCreditsDialog", "Send as zero-fee transaction if possible", 0));
        labelFreeTx->setText(QApplication::translate("SendCreditsDialog", "(confirmation may take longer)", 0));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendCreditsDialog", "Confirm the send action", 0));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendCreditsDialog", "S&end", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCreditsDialog", "Clear all fields of the form.", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCreditsDialog", "Clear &All", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendCreditsDialog", "Send to multiple recipients at once", 0));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("SendCreditsDialog", "Add &Recipient", 0));
        checkUseObfuscation->setText(QApplication::translate("SendCreditsDialog", "Obfuscation", 0));
        checkSwiftTX->setText(QApplication::translate("SendCreditsDialog", "SwiftTX", 0));
        label->setText(QApplication::translate("SendCreditsDialog", "Balance:", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCreditsDialog: public Ui_SendCreditsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCREDITSDIALOG_H
