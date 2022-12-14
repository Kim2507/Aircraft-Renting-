#ifndef INVOICE_H
#define INVOICE_H

#include <QDialog>


namespace Ui {
class Invoice;
}

class Invoice : public QDialog
{
    Q_OBJECT

public:
    explicit Invoice(QWidget *parent = nullptr);
    ~Invoice();
    QString readData();


private:
    Ui::Invoice *ui;
};

#endif // INVOICE_H
