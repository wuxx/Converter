#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("About Converter");
    //this->setWindowFlags(Qt::WindowCloseButtonHint);
    this->setMinimumSize(301, 269);
    this->setMaximumSize(301, 269);

    QPixmap *image = new QPixmap(":/new/prefix1/MuseLab");
    //image->scaled(ui->imageLabel->size(), Qt::KeepAspectRatioByExpanding);
    ui->imageLabel->setScaledContents(true);
    ui->imageLabel->setPixmap(*image);
    ui->imageLabel->show();

    this->hide();
}

MyDialog::~MyDialog()
{
    delete ui;
}
