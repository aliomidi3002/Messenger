#ifndef NEWCHANNEL_H
#define NEWCHANNEL_H

#include <QDialog>

namespace Ui {
class NewChannel;
}

class NewChannel : public QDialog
{
    Q_OBJECT

public:
    explicit NewChannel(QWidget *parent = nullptr);
    ~NewChannel();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewChannel *ui;
};

#endif // NEWCHANNEL_H
