#include "frmmain.h"
#include "ui_frmmain.h"
#include "formctrl.h"

FrmMain::FrmMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmMain)
{
    ui->setupUi(this);
    this->initForm();
}

FrmMain::~FrmMain()
{
    delete ui;
}

void FrmMain::initForm()
{
    ui->tabWidget->addTab(new FormCtrl, "控制窗口");
}
