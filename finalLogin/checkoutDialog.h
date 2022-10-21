#ifndef CHECKOUTDIALOG_H
#define CHECKOUTDIALOG_H

#include <QDialog>
//#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QPlainTextEdit>
#include <QWidget>
#include <QDialog>
#include "QPlainTextEdit"
#include "customerDialog.h"


namespace Ui {
class checkoutDialog;
}

/*class checkoutDialog : public customerDialog
{
    Q_OBJECT

public:
    //explicit checkoutDialog(QWidget *parent = nullptr);
    checkoutDialog(QWidget *parent = nullptr);
    ~checkoutDialog();
    void writeToFile(QString text);

private slots:

    void on_btn_ok_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::checkoutDialog *ui;
    //Ui::customerDialog *ui_cus;

    //QPlainTextEdit::QPlainTextEdit(QWidget *invoice = nullptr);


};*/

class checkoutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit checkoutDialog(QWidget *parent = nullptr);
    ~checkoutDialog();
    void writeToFile(QString text);

private slots:

    void on_btn_ok_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::checkoutDialog *ui;
    //Ui::customerDialog *ui_cus;

    //QPlainTextEdit::QPlainTextEdit(QWidget *invoice = nullptr);


};

#endif // CHECKOUTDIALOG_H
