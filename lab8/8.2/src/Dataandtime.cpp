#include "DataandTime.h"
#include <iostream>
DataandTime:: DataandTime (int d,int m,int y,int h,int min,int s) : Time(h,m,s)
{
    day=d;
    month=m;
    year=y;
}
DataandTime:: DataandTime(): Time(0,0,0)
{
    day=1;
    month=1;
    year=1990;
}

