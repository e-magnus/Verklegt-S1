#include <QCoreApplication>
#include <iostream>
#include "computerscientist.h"
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int selection;


    cout << "######### THE COMPUTER SCIENTISTS DATABASE #########" << endl;
    cout << endl;
    cout << "Please press 1 - 3 to select or Q to quit: " << endl;
    cout << endl;
    cout << "1: See list of computer scientists in the database." << endl;
    cout << "2: Search database for computer scientist. " << endl;
    cout << "3: Add new computer scientists to database. " << endl;
    cout << endl;
    cout << "Selection: ";
    cin >> selection;

    return a.exec();
}

