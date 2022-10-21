#include "customerDialog.h"
#include "ui_customerDialog.h"
#include "checkoutDialog.h"
#include <QPixmap>
#include <QDebug>
#include <QFile>
#include <QLabel>
#include "Invoice.h"

customerDialog::customerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerDialog)
{
    ui->setupUi(this);
    //ui->lbl_1->
    //connect(ui->lbl_1,&QLabel::linkActivated(),)
    /*connect(ui->lineEdit, SIGNAL(textEdited(QString)),
        dialog, SLOT(setText(QString)));
connect(dialog, SIGNAL(textEdited(QString)),
        ui->lineEdit, SLOT(setText(QString)));*/
    /*QSqlDatabase mydata = QSqlDatabase::addDatabase("QSQLITE");
    //mydata.setDatabaseName(" ")
    if(mydata.open())
        ui->lbl_status->setText("Faile to open the database");
    else
        ui->lbl_status->setText("Connected...");*/
    ui->lbl_1->hide();
    ui->lbl_2->hide();
    ui->lbl_3->hide();
    ui->lbl_error->hide();
    ui->btn_remove1->hide();
    ui->btn_remove2->hide();
    ui->btn_remove3->hide();


}

void customerDialog::writeToFile(QString text)
{
    //bool opened = true;
   QFile file("Customer Invoice.txt");
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Error opening file: " << file.error();
        return;
    }
    else{
        QTextStream outstream(&file);
        //QTextStream instream(&file);
        outstream << text << " ";
    }
    file.close();
}


void customerDialog::readData()
{
    QFile file(Fleet_description+"/Fleet_describe.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Error opening file: " << file.error();
        return;
    }
    QTextStream instream(&file);
    QString line = instream.readAll();
    //qDebug() << line;
    on_textEdit_textChanged(line);

    file.close();
    return;
}

QString customerDialog::loadImage(QString imagePath)
{
    QImage image;
    QString full_path = filePath+"finalLogin/Fleet IMG(JFIF)/"+imagePath;
    image.load(full_path);
    /*image.scaled(getFrameWidth(),getFrameHeight(),Qt::KeepAspectRatio);
    ui->lblInfo->setPixmap(QPixmap::fromImage(image));*/
    return full_path;
}

void customerDialog::setImage(QPixmap &pix)
{
    ui->lblInfo->setPixmap(pix.scaled(getFrameWidth(),getFrameHeight(),Qt::KeepAspectRatio));
}

void customerDialog::on_cbBox_lb_activated(int index)
{
    bool uncheck = false;
    if(ui->checkBox_choose->isCheckable()) ui->checkBox_choose->setChecked(uncheck);

    if(index==0){
        QPixmap pix(loadImage(images[0])); // load the image into QPixmap object
        setImage(pix);                      // Set the image onto the label to display image
        on_lbl_fleet_linkActivated(fleets[0]); // the label on the righ hand diaplay the name of fleet
    }
    if(index==1) {
        QPixmap pix(loadImage(images[1]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[1]);
    }
    readData();
}



void customerDialog::on_cbBox_ms_activated(int index)
{
    bool uncheck = false;
    if(ui->checkBox_choose->isCheckable()) ui->checkBox_choose->setChecked(uncheck);

    if(index==0) {
        QPixmap pix(loadImage(images[2]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[2]);
    }
    if(index==1) {
        QPixmap pix(loadImage(images[3]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[3]);
    }
    readData();
}

void customerDialog::on_cbBox_sms_activated(int index)
{
    bool uncheck = false;
    if(ui->checkBox_choose->isCheckable()) ui->checkBox_choose->setChecked(uncheck);

    if(index==0) {
        QPixmap pix(loadImage(images[4]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[4]);
    }
    if(index==1) {
        QPixmap pix(loadImage(images[5]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[5]);
    }
    readData();
}

void customerDialog::on_cbBox_large_activated(int index)
{
    bool uncheck = false;
    if(ui->checkBox_choose->isCheckable()) ui->checkBox_choose->setChecked(uncheck);

    if(index==0) {
        QPixmap pix(loadImage(images[6]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[6]);
    }
    if(index==1) {
        QPixmap pix(loadImage(images[7]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[7]);
    }
    if(index==2) {
        QPixmap pix(loadImage(images[8]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[8]);
    }
    if(index==3) {
        QPixmap pix(loadImage(images[9]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[9]);
        //on_label_6_linkActivated(fleets[9]);
    }
    if(index==4) {
        QPixmap pix(loadImage(images[10]));
        setImage(pix);
        on_lbl_fleet_linkActivated(fleets[10]);
    }
    readData();
}

/*Embraer Phenome 300,Cessna Citation ,Cessna Citation Sovereign ,Cessna Citation Latitude ,
 * Bombardier Challenger 350 ,Cessna Citation Longtitude ,Bomberdier Challenge 650 ,Gulf Stream G450 ,
 * Bomberdier Global 5000 ,Bomberdier Global 6000 ,Bomberdier Global 7500 */
void customerDialog::on_textEdit_textChanged(QString& text)
{
    ui->textEdit_info->setText(text);

}

double customerDialog::getFrameWidth()
{
    return ui->lblInfo->width();
}

double customerDialog::getFrameHeight()
{
    return ui->lblInfo->height();
}


void customerDialog::on_lbl_fleet_linkActivated(const QString &link)
{
    ui->lbl_fleet->setText(link);
}



void customerDialog::on_checkBox_choose_clicked(bool checked)
{
    if(checked==1) {
            if(ui->lbl_1->isHidden()) {

                ui->lbl_1->show();
                ui->btn_remove1->show();
                ui->lbl_1->setText(ui->lbl_fleet->text());
            }
            else if(ui->lbl_1->isHidden()==0 && ui->lbl_2->isHidden()) {

                ui->lbl_2->show();
                ui->btn_remove2->show();
                ui->lbl_2->setText(ui->lbl_fleet->text());
            }
            else if(ui->lbl_1->isHidden()==0 && ui->lbl_2->isHidden()==0 && ui->lbl_3->isHidden()) {

                ui->lbl_3->show();
                ui->btn_remove3->show();
                ui->lbl_3->setText(ui->lbl_fleet->text());
            }
            else {
                ui->lbl_error->show();
                ui->lbl_error->setText("Sorry, you exceed standard number of fleets can be rented");
            }
    }
            else {
                //
            }

}

int customerDialog::returnIndex(QString text)
{
    int index = 0;
    if(text== fleets[0]) index =0;
    else if(text== fleets[1]) index =1;
    else if(text== fleets[2]) index =2;
    else if(text== fleets[3]) index =3;
    else if(text== fleets[4]) index =4;
    else if(text== fleets[5]) index =5;
    else if(text== fleets[6]) index =6;
    else if(text== fleets[7]) index =7;
    else if(text== fleets[8]) index =8;
    else if(text== fleets[9]) index =9;
    else if(text== fleets[10]) index =10;
    return index;


}

void customerDialog::on_rbtn_25hrs_clicked() // card
{
    QString total;
    QString lb_1 = QString::number(card[returnIndex(ui->lbl_fleet->text())]);
    total += lb_1;
    if(ui->lbl_2->isVisible()) {
        QString lb_2 = QString::number(card[returnIndex(ui->lbl_fleet->text())]);
        total += lb_2;
    }
    if(ui->lbl_3->isVisible()){
        QString lb_3 = QString::number(card[returnIndex(ui->lbl_fleet->text())]);
        total += lb_3;
    }

    ui->lbl_finalcialpackage->setText("Your financial package is card: "+ total + " /month");
}


void customerDialog::on_rbtn_50_once_clicked() // share
{
    QString total;
    QString lb_1 = QString::number(share[returnIndex(ui->lbl_fleet->text())]);
    total += lb_1;
    if(ui->lbl_2->isVisible()) {
        QString lb_2 = QString::number(share[returnIndex(ui->lbl_fleet->text())]);
        total += lb_2;
    }
    if(ui->lbl_3->isVisible()){
        QString lb_3 = QString::number(share[returnIndex(ui->lbl_fleet->text())]);
        total += lb_3;
    }

    ui->lbl_finalcialpackage->setText("Your financial package is share: "+ total + " for once payment");

}



void customerDialog::on_rbtn_50_12_clicked() // lease
{
    QString total;
    QString lb_1 = QString::number(lease[returnIndex(ui->lbl_fleet->text())]);
    total += lb_1;
    if(ui->lbl_2->isVisible()) {
        QString lb_2 = QString::number(lease[returnIndex(ui->lbl_fleet->text())]);
        total += lb_2;
    }
    if(ui->lbl_3->isVisible()){
        QString lb_3 = QString::number(lease[returnIndex(ui->lbl_fleet->text())]);
        total += lb_3;
    }

    ui->lbl_finalcialpackage->setText("Your financial package is lease: "+ total + " /month");


}

void customerDialog::on_btn_remove1_clicked()
{
    ui->lbl_1->clear();
    ui->lbl_1->hide();
    ui->btn_remove1->close();
}

void customerDialog::on_btn_remove2_clicked()
{
    ui->lbl_2->clear();
    ui->lbl_2->hide();
    ui->btn_remove2->close();
}

void customerDialog::on_btn_remove3_clicked()
{
    ui->lbl_3->clear();
    ui->lbl_3->hide();
    ui->btn_remove3->close();
}

void customerDialog::on_pushButton_clicked()
{
    //
    //hide();
    //checkout_dialog = new checkoutDialog(this);
    //checkout_dialog->show();
    //checkout_dialog->accept();
    writeToFile("----------Invoice----------");
    writeToFile("Your fleets and payment package: ");
    writeToFile(ui->lbl_1->text()+ui->lbl_2->text() + ui->lbl_3->text()+"\n"+ui->lbl_finalcialpackage->text()+"\n");
    checkoutDialog checkOut;
    checkOut.setModal(true);
    checkOut.exec();
    this->close();


}






