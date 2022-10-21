#ifndef PRICINGDIALOG_H
#define PRICINGDIALOG_H

#include <QDialog>
#include "customerDialog.h"

namespace Ui {
class PricingDialog;
}

class PricingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PricingDialog(QWidget *parent = nullptr);
    ~PricingDialog();

private slots:
    //void on_pTextEdit_card_textChanged();

private:
    Ui::PricingDialog *ui;
};

#endif // PRICINGDIALOG_H
