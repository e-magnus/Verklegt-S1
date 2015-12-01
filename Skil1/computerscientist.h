#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class ComputerScientist{


public:
    ComputerScientist();
    ComputerScientist(string na, string se,int bd, int bm, int by, int dd, int dm, int dy, string bio);
private:
    int id;
    string name;
    string sex;
    string info;
    int born_year;
    int born_month;
    int born_day;
    int dead_year;
    int dead_month;
    int dead_day;



};

#endif // COMPUTERSCIENTIST_H
