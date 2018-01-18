#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>

namespace Ui {
class MyDialog;
}



class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();

private:
    Ui::MyDialog    *ui;
    QLabel          *versionLabel;
    QLabel          *authorLabel;
    QLabel          *copyrightLabel;
    QPushButton     *quitButton;

};

#endif // MYDIALOG_H
