#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "computerscientist.h"
#include "sorting.h"
#include "search.h"
using namespace std;

void startScreen();     // Display startup screen.
void sortScreen();      // Let you choos how you want to display the list of scientist in database.
void addScientist();    // Add new scientist to the database.
void searchScreen();    // Let you search the database.
void readData();        // Reads data from file to Compterscientist class.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    startScreen();



    return a.exec();
}


void startScreen()
{
    char selection;
    bool flag = true;

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
    cout << endl;

    while (flag)
    {
        switch (selection) {
        case '1': cout <<  "See list of computer scientists in the database.";
            flag = false;
            break;
        case '2': cout <<  "Search database for computer scientist.";
            flag = false;
            break;
        case '3': cout << "Add new computer scientists to database.";
            flag = false;
            break;
        case 'q': return exit (-1);
            break;
        case 'Q': return exit (-1);
            break;
        default: cout << "Invalid choice" << endl << endl;
            startScreen();
            break;
        }
    }
}

void sortScreen()
{
    char selection;
    bool flag = true;

    cout << "########## THE COMPUTER SCIENTISTS DATABASE ##########" << endl;
    cout << endl;
    cout << "How do you want to display the data?: " << endl;
    cout << endl;
    cout << "1: By first name (A-Z)" << endl;
    cout << "2: By last name (A-Z)" << endl;
    cout << "3: By age (youngest to oldest)" << endl;
    cout << "4: By sex (male or feameale)" << endl;

    cout << endl;
    cout << "Selection: ";
    cin >> selection;
    cout << endl;

    while (flag)
    {
        switch (selection)
        {
        case '1': cout << "Displaying list by first name (A-Z)";
            flag = false;
            break;
        case '2': cout << "Displaying list by last name (A-Z)";
            flag = false;
            break;
        case '3': cout << "Displaying list by age (youngest to oldest)";
            flag = false;
            break;
        case '4': cout << "Displaying list by sex (male or feameale)";
            flag = false;
            break;
        case 'q': return exit (-1);
            break;
        case 'Q': return exit (-1);
            break;
        default: cout << "Invalid choice" << endl << endl;
            sortScreen();
            break;
        }
    }
}

void addScientist()
{

}

void searchScreen()
{

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
