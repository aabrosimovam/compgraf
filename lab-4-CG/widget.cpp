#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    myFigura = new Figura(this);
}

Widget::~Widget()
{
    delete ui;
}

