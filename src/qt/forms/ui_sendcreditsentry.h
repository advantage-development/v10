/********************************************************************************
** Form generated from reading UI file 'sendcreditsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCREDITSENTRY_H
#define UI_SENDCREDITSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include "bitcreditamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCreditsEntry
{
public:
    QFrame *SendCredits;
    QGridLayout *gridLayout;
    QLabel *payToLabel;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *labelLabel;
    QLineEdit *addAsLabel;
    QLabel *amountLabel;
    BitcoinAmountField *payAmount;
    QLabel *messageLabel;
    QLabel *messageTextLabel;
    QFrame *SendCredits_InsecurePaymentRequest;
    QGridLayout *gridLayout_is;
    QLabel *payToLabel_is;
    QHBoxLayout *payToLayout_is;
    QLabel *payTo_is;
    QToolButton *deleteButton_is;
    QLabel *memoLabel_is;
    QLabel *memoTextLabel_is;
    QLabel *amountLabel_is;
    BitcoinAmountField *payAmount_is;
    QFrame *SendCredits_SecurePaymentRequest;
    QGridLayout *gridLayout_s;
    QLabel *payToLabel_s;
    QHBoxLayout *payToLayout_s;
    QLabel *payTo_s;
    QToolButton *deleteButton_s;
    QLabel *memoLabel_s;
    QLabel *memoTextLabel_s;
    QLabel *amountLabel_s;
    BitcoinAmountField *payAmount_s;

    void setupUi(QStackedWidget *SendCreditsEntry)
    {
        if (SendCreditsEntry->objectName().isEmpty())
            SendCreditsEntry->setObjectName(QStringLiteral("SendCreditsEntry"));
        SendCreditsEntry->resize(729, 156);
        SendCreditsEntry->setFocusPolicy(Qt::TabFocus);
        SendCreditsEntry->setAutoFillBackground(false);
        SendCredits = new QFrame();
        SendCredits->setObjectName(QStringLiteral("SendCredits"));
        SendCredits->setFrameShape(QFrame::StyledPanel);
        SendCredits->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendCredits);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        payToLabel = new QLabel(SendCredits);
        payToLabel->setObjectName(QStringLiteral("payToLabel"));
        payToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(payToLabel, 0, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QStringLiteral("payToLayout"));
        payTo = new QValidatedLineEdit(SendCredits);
        payTo->setObjectName(QStringLiteral("payTo"));

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendCredits);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCredits);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCredits);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 0, 1, 1, 1);

        labelLabel = new QLabel(SendCredits);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));
        labelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLabel, 1, 0, 1, 1);

        addAsLabel = new QLineEdit(SendCredits);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 1);

        amountLabel = new QLabel(SendCredits);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(amountLabel, 2, 0, 1, 1);

        payAmount = new BitcoinAmountField(SendCredits);
        payAmount->setObjectName(QStringLiteral("payAmount"));

        gridLayout->addWidget(payAmount, 2, 1, 1, 1);

        messageLabel = new QLabel(SendCredits);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(messageLabel, 3, 0, 1, 1);

        messageTextLabel = new QLabel(SendCredits);
        messageTextLabel->setObjectName(QStringLiteral("messageTextLabel"));
        messageTextLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(messageTextLabel, 3, 1, 1, 1);

        SendCreditsEntry->addWidget(SendCredits);
        SendCredits_InsecurePaymentRequest = new QFrame();
        SendCredits_InsecurePaymentRequest->setObjectName(QStringLiteral("SendCredits_InsecurePaymentRequest"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 255, 191, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SendCredits_InsecurePaymentRequest->setPalette(palette);
        SendCredits_InsecurePaymentRequest->setAutoFillBackground(true);
        SendCredits_InsecurePaymentRequest->setFrameShape(QFrame::StyledPanel);
        SendCredits_InsecurePaymentRequest->setFrameShadow(QFrame::Sunken);
        gridLayout_is = new QGridLayout(SendCredits_InsecurePaymentRequest);
        gridLayout_is->setSpacing(12);
        gridLayout_is->setObjectName(QStringLiteral("gridLayout_is"));
        payToLabel_is = new QLabel(SendCredits_InsecurePaymentRequest);
        payToLabel_is->setObjectName(QStringLiteral("payToLabel_is"));
        payToLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(payToLabel_is, 0, 0, 1, 1);

        payToLayout_is = new QHBoxLayout();
        payToLayout_is->setSpacing(0);
        payToLayout_is->setObjectName(QStringLiteral("payToLayout_is"));
        payTo_is = new QLabel(SendCredits_InsecurePaymentRequest);
        payTo_is->setObjectName(QStringLiteral("payTo_is"));

        payToLayout_is->addWidget(payTo_is);

        deleteButton_is = new QToolButton(SendCredits_InsecurePaymentRequest);
        deleteButton_is->setObjectName(QStringLiteral("deleteButton_is"));
        deleteButton_is->setIcon(icon2);

        payToLayout_is->addWidget(deleteButton_is);


        gridLayout_is->addLayout(payToLayout_is, 0, 1, 1, 1);

        memoLabel_is = new QLabel(SendCredits_InsecurePaymentRequest);
        memoLabel_is->setObjectName(QStringLiteral("memoLabel_is"));
        memoLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(memoLabel_is, 1, 0, 1, 1);

        memoTextLabel_is = new QLabel(SendCredits_InsecurePaymentRequest);
        memoTextLabel_is->setObjectName(QStringLiteral("memoTextLabel_is"));
        memoTextLabel_is->setTextFormat(Qt::PlainText);

        gridLayout_is->addWidget(memoTextLabel_is, 1, 1, 1, 1);

        amountLabel_is = new QLabel(SendCredits_InsecurePaymentRequest);
        amountLabel_is->setObjectName(QStringLiteral("amountLabel_is"));
        amountLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(amountLabel_is, 2, 0, 1, 1);

        payAmount_is = new BitcoinAmountField(SendCredits_InsecurePaymentRequest);
        payAmount_is->setObjectName(QStringLiteral("payAmount_is"));
        payAmount_is->setAcceptDrops(false);

        gridLayout_is->addWidget(payAmount_is, 2, 1, 1, 1);

        SendCreditsEntry->addWidget(SendCredits_InsecurePaymentRequest);
        SendCredits_SecurePaymentRequest = new QFrame();
        SendCredits_SecurePaymentRequest->setObjectName(QStringLiteral("SendCredits_SecurePaymentRequest"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(140, 232, 119, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(230, 255, 224, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(185, 243, 171, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(70, 116, 59, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(93, 155, 79, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush12(QColor(155, 255, 147, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush13(QColor(119, 255, 233, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(197, 243, 187, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        QBrush brush15(QColor(125, 194, 122, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SendCredits_SecurePaymentRequest->setPalette(palette1);
        SendCredits_SecurePaymentRequest->setAutoFillBackground(true);
        SendCredits_SecurePaymentRequest->setFrameShape(QFrame::StyledPanel);
        SendCredits_SecurePaymentRequest->setFrameShadow(QFrame::Sunken);
        gridLayout_s = new QGridLayout(SendCredits_SecurePaymentRequest);
        gridLayout_s->setSpacing(12);
        gridLayout_s->setObjectName(QStringLiteral("gridLayout_s"));
        payToLabel_s = new QLabel(SendCredits_SecurePaymentRequest);
        payToLabel_s->setObjectName(QStringLiteral("payToLabel_s"));
        payToLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(payToLabel_s, 0, 0, 1, 1);

        payToLayout_s = new QHBoxLayout();
        payToLayout_s->setSpacing(0);
        payToLayout_s->setObjectName(QStringLiteral("payToLayout_s"));
        payTo_s = new QLabel(SendCredits_SecurePaymentRequest);
        payTo_s->setObjectName(QStringLiteral("payTo_s"));
        payTo_s->setTextFormat(Qt::PlainText);

        payToLayout_s->addWidget(payTo_s);

        deleteButton_s = new QToolButton(SendCredits_SecurePaymentRequest);
        deleteButton_s->setObjectName(QStringLiteral("deleteButton_s"));
        deleteButton_s->setIcon(icon2);

        payToLayout_s->addWidget(deleteButton_s);


        gridLayout_s->addLayout(payToLayout_s, 0, 1, 1, 1);

        memoLabel_s = new QLabel(SendCredits_SecurePaymentRequest);
        memoLabel_s->setObjectName(QStringLiteral("memoLabel_s"));
        memoLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(memoLabel_s, 1, 0, 1, 1);

        memoTextLabel_s = new QLabel(SendCredits_SecurePaymentRequest);
        memoTextLabel_s->setObjectName(QStringLiteral("memoTextLabel_s"));
        memoTextLabel_s->setTextFormat(Qt::PlainText);

        gridLayout_s->addWidget(memoTextLabel_s, 1, 1, 1, 1);

        amountLabel_s = new QLabel(SendCredits_SecurePaymentRequest);
        amountLabel_s->setObjectName(QStringLiteral("amountLabel_s"));
        amountLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(amountLabel_s, 2, 0, 1, 1);

        payAmount_s = new BitcoinAmountField(SendCredits_SecurePaymentRequest);
        payAmount_s->setObjectName(QStringLiteral("payAmount_s"));
        payAmount_s->setAcceptDrops(false);

        gridLayout_s->addWidget(payAmount_s, 2, 1, 1, 1);

        SendCreditsEntry->addWidget(SendCredits_SecurePaymentRequest);
#ifndef QT_NO_SHORTCUT
        payToLabel->setBuddy(payTo);
        labelLabel->setBuddy(addAsLabel);
        amountLabel->setBuddy(payAmount);
        amountLabel_is->setBuddy(payAmount_is);
        amountLabel_s->setBuddy(payAmount_s);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(payTo, addressBookButton);
        QWidget::setTabOrder(addressBookButton, pasteButton);
        QWidget::setTabOrder(pasteButton, deleteButton);
        QWidget::setTabOrder(deleteButton, addAsLabel);
        QWidget::setTabOrder(addAsLabel, payAmount);
        QWidget::setTabOrder(payAmount, payAmount_is);
        QWidget::setTabOrder(payAmount_is, deleteButton_is);
        QWidget::setTabOrder(deleteButton_is, payAmount_s);
        QWidget::setTabOrder(payAmount_s, deleteButton_s);

        retranslateUi(SendCreditsEntry);

        QMetaObject::connectSlotsByName(SendCreditsEntry);
    } // setupUi

    void retranslateUi(QStackedWidget *SendCreditsEntry)
    {
#ifndef QT_NO_TOOLTIP
        SendCredits->setToolTip(QApplication::translate("SendCreditsEntry", "This is a normal payment.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel->setText(QApplication::translate("SendCreditsEntry", "Pay &To:", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCreditsEntry", "The Advantage address to send the payment to", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCreditsEntry", "Choose previously used address", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendCreditsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCreditsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendCreditsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCreditsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        labelLabel->setText(QApplication::translate("SendCreditsEntry", "&Label:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCreditsEntry", "Enter a label for this address to add it to the list of used addresses", 0));
#endif // QT_NO_TOOLTIP
        amountLabel->setText(QApplication::translate("SendCreditsEntry", "A&mount:", 0));
        messageLabel->setText(QApplication::translate("SendCreditsEntry", "Message:", 0));
#ifndef QT_NO_TOOLTIP
        messageTextLabel->setToolTip(QApplication::translate("SendCreditsEntry", "A message that was attached to the Advantage: URI which will be stored with the transaction for your reference. Note: This message will not be sent over the Advantage network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SendCredits_InsecurePaymentRequest->setToolTip(QApplication::translate("SendCreditsEntry", "This is an unverified payment request.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel_is->setText(QApplication::translate("SendCreditsEntry", "Pay To:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton_is->setToolTip(QApplication::translate("SendCreditsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton_is->setText(QString());
        memoLabel_is->setText(QApplication::translate("SendCreditsEntry", "Memo:", 0));
        amountLabel_is->setText(QApplication::translate("SendCreditsEntry", "A&mount:", 0));
#ifndef QT_NO_TOOLTIP
        SendCredits_SecurePaymentRequest->setToolTip(QApplication::translate("SendCreditsEntry", "This is a verified payment request.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel_s->setText(QApplication::translate("SendCreditsEntry", "Pay To:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton_s->setToolTip(QApplication::translate("SendCreditsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton_s->setText(QString());
        memoLabel_s->setText(QApplication::translate("SendCreditsEntry", "Memo:", 0));
        amountLabel_s->setText(QApplication::translate("SendCreditsEntry", "A&mount:", 0));
        Q_UNUSED(SendCreditsEntry);
    } // retranslateUi

};

namespace Ui {
    class SendCreditsEntry: public Ui_SendCreditsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCREDITSENTRY_H
