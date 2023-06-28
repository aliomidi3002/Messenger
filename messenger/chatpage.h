#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QDialog>
#include "ID.h"
#include <QTextEdit>
#include "QVBoxLayout"
#include <QKeyEvent>

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
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Chatpage *ui;
    userID mCurrentUser;
    QVBoxLayout* layout;
};

#endif // CHATPAGE_H
