#ifndef DATAANDTIME_H
#define DATAANDTIME_H
#include "Time.h"

class DataandTime : public Time
{
private:
 int day;
 int month;
 int year;
public:
  DataandTime (int=1,int=1,int=1990,int=0,int=0,int=0);
  void print();

};
#endif
