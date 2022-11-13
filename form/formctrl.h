#ifndef FORMCTRL_H
#define FORMCTRL_H

#include <QWidget>
#include "tcpclient.h"

namespace Ui {
class FormCtrl;
}

class FormCtrl : public QWidget
{
    Q_OBJECT

public:
    explicit FormCtrl(QWidget *parent = nullptr);
    ~FormCtrl();

private:
    Ui::FormCtrl *ui;

    QTcpSocket
    QThread ctrlThread;
    TcpClient *ctrlTcpClient;


private slots:
    void initForm();

private slots:
};

#endif // FORMCTRL_H
