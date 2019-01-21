// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCREDIT_QT_SENDCREDITSENTRY_H
#define BITCREDIT_QT_SENDCREDITSENTRY_H

#include "walletmodel.h"

#include <QStackedWidget>

class WalletModel;

namespace Ui
{
class SendCreditsEntry;
}

/**
 * A single entry in the dialog for sending bitcredits.
 * Stacked widget, with different UIs for payment requests
 * with a strong payee identity.
 */
class SendCreditsEntry : public QStackedWidget
{
    Q_OBJECT

public:
    explicit SendCreditsEntry(QWidget* parent = 0);
    ~SendCreditsEntry();

    void setModel(WalletModel* model);
    bool validate();
    SendCreditsRecipient getValue();

    /** Return whether the entry is still empty and unedited */
    bool isClear();

    void setValue(const SendCreditsRecipient& value);
    void setAddress(const QString& address);

    /** Set up the tab chain manually, as Qt messes up the tab chain by default in some cases
     *  (issue https://bugreports.qt-project.org/browse/QTBUG-10907).
     */
    QWidget* setupTabChain(QWidget* prev);

    void setFocus();

public slots:
    void clear();

signals:
    void removeEntry(SendCreditsEntry* entry);
    void payAmountChanged();

private slots:
    void deleteClicked();
    void on_payTo_textChanged(const QString& address);
    void on_addressBookButton_clicked();
    void on_pasteButton_clicked();
    void updateDisplayUnit();

private:
    SendCreditsRecipient recipient;
    Ui::SendCreditsEntry* ui;
    WalletModel* model;

    bool updateLabel(const QString& address);
};

#endif // BITCREDIT_QT_SENDCREDITSENTRY_H
