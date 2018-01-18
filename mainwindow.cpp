#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLineEdit"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pushButton[0] = ui->pushButton_0;
    pushButton[1] = ui->pushButton_1;
    pushButton[2] = ui->pushButton_2;
    pushButton[3] = ui->pushButton_3;
    pushButton[4] = ui->pushButton_4;
    pushButton[5] = ui->pushButton_5;
    pushButton[6] = ui->pushButton_6;
    pushButton[7] = ui->pushButton_7;
    pushButton[8] = ui->pushButton_8;
    pushButton[9] = ui->pushButton_9;
    pushButton[10] = ui->pushButton_10;
    pushButton[11] = ui->pushButton_11;
    pushButton[12] = ui->pushButton_12;
    pushButton[13] = ui->pushButton_13;
    pushButton[14] = ui->pushButton_14;
    pushButton[15] = ui->pushButton_15;
    pushButton[16] = ui->pushButton_16;
    pushButton[17] = ui->pushButton_17;
    pushButton[18] = ui->pushButton_18;
    pushButton[19] = ui->pushButton_19;
    pushButton[20] = ui->pushButton_20;
    pushButton[21] = ui->pushButton_21;
    pushButton[22] = ui->pushButton_22;
    pushButton[23] = ui->pushButton_23;
    pushButton[24] = ui->pushButton_24;
    pushButton[25] = ui->pushButton_25;
    pushButton[26] = ui->pushButton_26;
    pushButton[27] = ui->pushButton_27;
    pushButton[28] = ui->pushButton_28;
    pushButton[29] = ui->pushButton_29;
    pushButton[30] = ui->pushButton_30;
    pushButton[31] = ui->pushButton_31;

    this->setWindowTitle("Converter");
    this->setWindowFlags(Qt::WindowCloseButtonHint);
    this->setWindowIcon(QIcon(":/new/prefix1/register"));
    this->setMinimumSize(320, 385);
    this->setMaximumSize(320, 385);

    //this->setContextMenuPolicy(Qt::DefaultContextMenu);

    m_popMenu = new QMenu(this);
    m_aboutAction = new QAction(tr("&About"), this);
    m_aboutAction->setStatusTip(tr("About this program"));
    //m_aboutAction->setIcon(QIcon(":/new/prefix1/register"));
    m_popMenu->addAction(m_aboutAction);
    connect(m_aboutAction,SIGNAL(triggered(bool)),this,SLOT(on_about_action()));

    this->m_aboutDialog = new MyDialog(this);
    this->m_aboutDialog->setModal(true);

    for(int i = 0; i < 32; ++ i)
        this->pushButton[i]->setStyleSheet("background-color:rgb(85, 170, 255)");

    connect(ui->lineEdit_hex, SIGNAL(textEdited(QString)), this, SLOT(convertHexToBin()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{

    m_popMenu->move(cursor().pos()); //让菜单显示的位置在鼠标的坐标上
    m_popMenu->show();
}

void MainWindow::on_about_action()
{
    this->m_aboutDialog->show();
}

void MainWindow::convertBinToHex()
{
    char s[16] = {0};
    int sum = 0;
    for(int i = 31; i >= 0; i--)
    {
        sum = sum << 0x1;
        sum = sum | atoi(this->pushButton[i]->text().toUtf8().data());
    }

    snprintf(s, sizeof(s), "0x%08x", sum);

    ui->lineEdit_hex->setText(QString::fromUtf8(s));
}

void MainWindow::convertHexToBin()
{
    unsigned int sum = 0;
    sum = (unsigned int)strtoul(ui->lineEdit_hex->text().toUtf8().data(), NULL, 0);

    for(int i = 31; i >=0; -- i)
    {
        if(((sum >> i) & 0x1) == 0)
        {
            this->pushButton[i]->setText("0");
            this->pushButton[i]->setStyleSheet("background-color:rgb(85, 170, 255)");
        } else
        {
            this->pushButton[i]->setText("1");
            this->pushButton[i]->setStyleSheet("background-color:rgb(255, 97, 0)");
        }
    }
}

void MainWindow::changeButtonStatus(int i)
{
    if(this->pushButton[i]->text() == "0")
    {
        this->pushButton[i]->setText("1");
        this->pushButton[i]->setStyleSheet("background-color:rgb(255, 97, 0)");
    }
    else
    {
        this->pushButton[i]->setText("0");
        this->pushButton[i]->setStyleSheet("background-color:rgb(85, 170, 255)");
    }
}

void MainWindow::on_pushButton_0_clicked()
{
    int i = 0;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_1_clicked()
{
    int i = 1;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_2_clicked()
{
    int i = 2;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_3_clicked()
{
    int i = 3;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_4_clicked()
{
    int i = 4;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_5_clicked()
{
    int i = 5;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_6_clicked()
{
    int i = 6;
    changeButtonStatus(i);

    convertBinToHex();
}


void MainWindow::on_pushButton_7_clicked()
{
    int i = 7;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_8_clicked()
{
    int i = 8;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_9_clicked()
{
    int i = 9;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_10_clicked()
{
    int i = 10;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_11_clicked()
{
    int i = 11;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_12_clicked()
{
    int i = 12;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_13_clicked()
{
    int i = 13;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_14_clicked()
{
    int i = 14;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_15_clicked()
{
    int i = 15;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_16_clicked()
{
    int i = 16;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_17_clicked()
{
    int i = 17;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_18_clicked()
{
    int i = 18;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_19_clicked()
{
    int i = 19;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_20_clicked()
{
    int i = 20;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_21_clicked()
{
    int i = 21;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_22_clicked()
{
    int i = 22;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_23_clicked()
{
    int i = 23;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_24_clicked()
{
    int i = 24;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_25_clicked()
{
    int i = 25;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_26_clicked()
{
    int i = 26;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_27_clicked()
{
    int i = 27;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_28_clicked()
{
    int i = 28;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_29_clicked()
{
    int i = 29;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_30_clicked()
{
    int i = 30;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_31_clicked()
{
    int i = 31;
    changeButtonStatus(i);

    convertBinToHex();
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->lineEdit_hex->setText("");

    for(int i = 0; i < 32; ++ i)
    {
        this->pushButton[i]->setText("0");
        this->pushButton[i]->setStyleSheet("background-color:rgb(85, 170, 255)");
    }

}
