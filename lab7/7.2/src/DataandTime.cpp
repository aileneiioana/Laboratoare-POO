#include "DataandTime.h"
#include <iostream>
DataandTime:: DataandTime (int d,int m,int y,int h,int min,int s)
{
    day=d;
    month=m;
    year=y;
    hour=h;
    minute=min;
    second=s;
}
void DataandTime:: print()
{
    std::cout << day << '-' << month << '-' << year<< " ";
    Time::printLong();
}
