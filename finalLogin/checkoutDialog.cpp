#include "checkoutDialog.h"
#include "ui_checkoutDialog.h"
#include <QPlainTextEdit>
#include "Invoice.h"

checkoutDialog::checkoutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkoutDialog)
{
    ui->setupUi(this);


}


checkoutDialog::~checkoutDialog()
{
    delete ui;
}



void checkoutDialog::writeToFile(QString text)
{
    QFile file("Customer Invoice.txt");
    if(file.exists()){
        file.open(QIODevice::Append);
        QTextStream outstream(&file);
        outstream << text << " ";
    }
    //else if(!file.open(QIODevice::WriteOnly | QIODevice::NewOnly))
    else
    {
        qDebug() << "Error opening file: " << file.error();
        return;
    }

    file.close();
    /*QFile file("in.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        process_line(line);
    }*/
}




void checkoutDialog::on_btn_ok_clicked()
{
    writeToFile(ui->lineEdit_firstName->text());
    writeToFile(ui->lineEdit_lastName->text()+"\n");
    writeToFile(ui->lineEdit_birthday->text()+"\n");
    writeToFile(ui->lineEdit_phoneNumber->text()+"\n");
    writeToFile(ui->lineEdit_email->text()+"\n");
    writeToFile(ui->lineEdit_address1->text());
    writeToFile(ui->lineEdit_address2->text());
    writeToFile(ui->lineEdit_city->text());
    writeToFile(ui->lineEdit_state->text());
    writeToFile(ui->lineEdit_zip->text());
    //close();
    Invoice invoice_dialog;
    invoice_dialog.setModal(true);
    invoice_dialog.exec();
    this->close();
}

void checkoutDialog::on_btn_cancel_clicked()
{
    close();
}
