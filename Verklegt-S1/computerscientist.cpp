#include "computerscientist.h"
#include "ui_computerscientist.h"

ComputerScientist::ComputerScientist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ComputerScientist)
{
    ui->setupUi(this);
}

ComputerScientist::~ComputerScientist()
{
    delete ui;
}
