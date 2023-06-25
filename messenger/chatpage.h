#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QDialog>

namespace Ui {
class Chatpage;
}

class Chatpage : public QDialog
{
    Q_OBJECT

public:
    explicit Chatpage(QWidget *parent = nullptr);
    ~Chatpage();

private:
    Ui::Chatpage *ui;
};

#endif // CHATPAGE_H
