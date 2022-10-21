#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("C:/Users/Admin/Downloads/Fleet IMG-20210505T184229Z-001.zip/Fleet IMG/cessna citation xls.png");
    QPixmap pix("C:/Users/Admin/Downloads/guftstream-g450.jfif");
    int w = ui->lblImage->width();
    int h = ui->lblImage->height();
    ui->lblImage->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnLogin_clicked()
{
    QString username = ui->lineEditusername->text();
    QString password = ui->lineEditpassword->text();

    if(username == "customer" && password == "customer" ){
        //QMessageBox::information(this,"Login","Username and password is correct");
        hide(); //for hide the 1st window
        cus_dialog = new customerDialog(this);
        cus_dialog->show();
    }
    else {
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }
}
