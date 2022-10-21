#include "Invoice.h"
#include "ui_Invoice.h"
#include <QTextStream>
#include <QFile>
Invoice::Invoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Invoice)
{
    ui->setupUi(this);
    readData();
    //connect(this,&QDialog::finished,));
}

Invoice::~Invoice()
{
    delete ui;
}


QString Invoice::readData()
{
    QString line;
    QString whole;
    QFile file("Customer Invoice.txt");
      if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
          return "";

      QTextStream in(&file);
      while (!in.atEnd()) {
          line = in.readLine();
          whole+=line + "\n";
          //process_line(line);
          //ui->lbl_info->setText(line);
      }
      ui->lbl_info->setText(whole);
      return line;
}





