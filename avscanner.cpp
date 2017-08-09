#include "avscanner.h"
#include "ui_avscanner.h"

AVScanner::AVScanner(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AVScanner)
{
    ui->setupUi(this);
}

AVScanner::~AVScanner()
{
    delete ui;
}
