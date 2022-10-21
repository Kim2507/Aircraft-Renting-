#ifndef LB_DIALOG_H
#define LB_DIALOG_H

#include <QDialog>

namespace Ui {
class LB_dialog;
}

class LB_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit LB_dialog(QWidget *parent = nullptr);
    ~LB_dialog();

private:
    Ui::LB_dialog *ui;
};

#endif // LB_DIALOG_H
