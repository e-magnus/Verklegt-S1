#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H

#include <QMainWindow>

namespace Ui {
class ComputerScientist;
}

class ComputerScientist : public QMainWindow
{
    Q_OBJECT

public:
    explicit ComputerScientist(QWidget *parent = 0);
    ~ComputerScientist();

private:
    Ui::ComputerScientist *ui;
};

#endif // COMPUTERSCIENTIST_H
