#include "sorting.h"

bool Sorting::sortByName(Sorting a, Sorting b)
{
    return a.name < b.name;
}

bool Sorting::sortBySex(Sorting a, Sorting b)
{
    return a.sex < b.sex;
}

bool Sorting::sortByAge(Sorting a, Sorting b)
{
    return a.born_year < b.born_year;
}
