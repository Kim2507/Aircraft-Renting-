#include "PricingDialog.h"
#include "ui_PricingDialog.h"

PricingDialog::PricingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PricingDialog)
{
    ui->setupUi(this);
}

PricingDialog::~PricingDialog()
{
    delete ui;
}

/*void PricingDialog::on_pTextEdit_card_textChanged()
{
    if(customerDialog::ui)
}*/
