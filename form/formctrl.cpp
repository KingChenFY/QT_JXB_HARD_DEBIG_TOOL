#include "formctrl.h"
#include "ui_formctrl.h"

FormCtrl::FormCtrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCtrl)
{
    ui->setupUi(this);
    ctrlTcpClient = new TcpClient(this);

}

FormCtrl::~FormCtrl()
{
    delete ui;
}
