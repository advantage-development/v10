// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCREDIT_QT_CREDITCONTROLTREEWIDGET_H
#define BITCREDIT_QT_CREDITCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QTreeWidget>

class CreditControlTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit CreditControlTreeWidget(QWidget* parent = 0);

protected:
    virtual void keyPressEvent(QKeyEvent* event);
};

#endif // BITCREDIT_QT_CREDITCONTROLTREEWIDGET_H
