#include "LB_dialog.h"
#include "ui_LB_dialog.h"

LB_dialog::LB_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LB_dialog)
{
    ui->setupUi(this);

    QPixmap pix_lb_1("C:/Users/Admin/Downloads/Fleet IMG(JFIF)/lb1.jfif");
    QPixmap pix_lb_2("C:/Users/Admin/Downloads/Fleet IMG(JFIF)/lb2.jfif");
    int w1 = ui->lblPhenom->width();
    int h1 = ui->lblPhenom->height();
    ui->lblPhenom->setPixmap(pix_lb_1.scaled(w1,h1,Qt::KeepAspectRatio));
    int w2 = ui->lblCessna->width();
    int h2 = ui->lblCessna->height();
    ui->lblCessna->setPixmap(pix_lb_2.scaled(w2,h2,Qt::KeepAspectRatio));




}

LB_dialog::~LB_dialog()
{
    delete ui;
}
