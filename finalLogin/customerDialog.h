#ifndef CUSTOMERDIALOG_H
#define CUSTOMERDIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include <QWidget>
//#include <QCheckBox>
//#include <QGroupBox>
//#include <QGridLayout>
#include <QDebug>
#include <QFileInfo>
#include "checkoutDialog.h"

class QToolButton;
namespace Ui {
class customerDialog;
}



/*class Cost{
private:
    int maintanance_fee;
    int position_fee;
public:
    Cost() = default;
    Cost(int m, int p){
        setM(m);
        setP(p);
    }
    void setM(int m){
        if(m>0) maintanance_fee = m;
    }
    void setP(int p){
        if(p>0) position_fee = p;
    }

    int getM() const { return maintanance_fee;}
    int getP() const { return position_fee;}

};*/


class customerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit customerDialog(QWidget *parent = nullptr);
    ~customerDialog() = default;
    void readData();
    double getFrameWidth();
    double getFrameHeight();
    int returnIndex(QString text);
    void writeToFile(QString text);
    void setImage(QPixmap &pix);

private slots:
    void on_cbBox_lb_activated(int index);

    void on_cbBox_ms_activated(int index);

    void on_cbBox_sms_activated(int index);

    void on_cbBox_large_activated(int index);

    void on_textEdit_textChanged(QString& text);


    void on_lbl_fleet_linkActivated(const QString &link);

    //void on_checkBox_choose_stateChanged(int arg1);

    //void on_btnPrice_clicked();

    void on_checkBox_choose_clicked(bool checked);

    void on_rbtn_25hrs_clicked();

    void on_rbtn_50_once_clicked();

    void on_rbtn_50_12_clicked();

    void on_btn_remove1_clicked();

    void on_btn_remove2_clicked();

    void on_btn_remove3_clicked();

    void on_pushButton_clicked();





private:
    Ui::customerDialog *ui;
    QString loadImage(QString imagePath);
    // This is the path where "finalLogin" file located", change it when run on your computer
    const QString filePath = "C:/Users/Admin/Documents/";  // for the fleet_images
    const QString Fleet_description = "C:/Users/Admin/Documents/finalLogin/Text Files";

    //checkoutDialog *checkout_dialog;

public:
    // Array of image
    QString images[11]={"lb1.jfif","lb2.jfif","ms1.jfif","ms2.jfif","sms1.jfif","sms2.jfif",
                     "large1.jfif","large2.jfif","large3.jfif","large4.jfif","large5.jfif"};
    QString fleets[11]={"Embraer Phenome 300,Cessna Citation" ,"Cessna Citation Sovereign" ,
                        "Cessna Citation Latitude" ,"Bombardier Challenger 350" ,
                        "Cessna Citation Longtitude" ,"Bomberdier Challenge 650" ,
                        "Gulf Stream G450" ,"Bomberdier Global 5000" ,"Bomberdier Global 6000",
                        "Bomberdier Global 7500"};
    int card[11] = {350,450,550,680,770,880,1030,1170,1250,1350,1500};
    int lease[11]= {700,900,1100,1360,1540,1760,2060,2340,2500,2700,3000};
    int share[11] = {6500,8500,11800,14100,15200,17300,20500,22000,25000,26500};

};

#endif // CUSTOMERDIALOG_H
