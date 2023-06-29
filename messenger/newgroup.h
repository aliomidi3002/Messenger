#ifndef NEWGROUP_H
#define NEWGROUP_H

#include <QDialog>

namespace Ui {
class NewGroup;
}

class NewGroup : public QDialog
{
    Q_OBJECT

public:
    explicit NewGroup(QWidget *parent = nullptr);
    ~NewGroup();

private slots:

    void on_pushButton_clicked();

private:
    Ui::NewGroup *ui;
};

#endif // NEWGROUP_H
