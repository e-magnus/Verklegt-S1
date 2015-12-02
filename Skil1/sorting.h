#ifndef SORTING_H
#define SORTING_H
#include <iostream>
using namespace std;

class Sorting : ComputerScientist
{
public:
    bool sortByName(Sorting a, Sorting b);
    bool sortBySex(Sorting a, Sorting b);
    bool sortByAge(Sorting a, Sorting b);
};

#endif // SORTING_H
