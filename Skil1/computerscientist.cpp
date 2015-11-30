#include "computerscientist.h"

ComputerScientist::ComputerScientist()
{
    id = 0;
    name = ' ';
    sex = ' ';
    bio = ' ';
    born_year = 0;
    born_month = 0;
    born_day = 0;
    dead_year = 0;
    dead_month = 0;
    dead_day = 0;
}

ComputerScientist::ComputerScientist(string na, string se,int bd, int bm, int by, int dd, int dm, int dy, string bio)
{
    name = na;
    sex = se;
    bio = bio;
    born_year = by;
    born_month = bm;
    born_day = bd;
    dead_year = dy;
    dead_month = dm;
    dead_day = dd;
}
