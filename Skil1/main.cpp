#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "computerscientist.h"
#include "sorting.h"
#include "search.h"
using namespace std;

void startScreen();             // Runs starting ui.
void readData();                // Reads data from file to Compterscientist class.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    startScreen();



    return a.exec();
}


void startScreen()
{
    char selection;

    cout << "########## THE COMPUTER SCIENTISTS DATABASE ##########" << endl;
    cout << endl;
    cout << "Please press 1 - 3 to select or Q to quit: " << endl;
    cout << endl;
    cout << "1: See list of computer scientists in the database." << endl;
    cout << "2: Search database for computer scientist. " << endl;
    cout << "3: Add new computer scientists to database. " << endl;
    cout << endl;
    cout << "Selection: ";
    cin >> selection;
}


void readData()
{
    ifstream in_stream;
    // Open the file
    in_stream.open("Data");
    if (in_stream.fail())
    {
        cout << "Input file opening failed." << endl;
        exit(-1);
    }

    in_stream.close();

}
