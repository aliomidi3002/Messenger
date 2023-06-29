#ifndef NEWCHAT_H
#define NEWCHAT_H

#include <QDialog>

namespace Ui {
class NewChat;
}

class NewChat : public QDialog
{
    Q_OBJECT

public:
    explicit NewChat(QWidget *parent = nullptr, const QString& token = "");
    ~NewChat();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::NewChat *ui;
    QString m_token;
};

#endif // NEWCHAT_H
