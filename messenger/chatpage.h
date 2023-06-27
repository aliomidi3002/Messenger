#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QDialog>
#include "ID.h"

namespace Ui {
class Chatpage;
}

class Chatpage : public QDialog
{
    Q_OBJECT

public:
    explicit Chatpage(QWidget *parent = nullptr, const userID& currentUser = userID());
    ~Chatpage();

private slots:


private:
    Ui::Chatpage *ui;
    userID mCurrentUser;
};

#endif // CHATPAGE_H
