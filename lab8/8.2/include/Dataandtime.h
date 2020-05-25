#ifndef DATAANDTIME_H
#define DATAANDTIME_H
#include "Time.h"

class DataandTime : public Time
{
friend ostream& operator<<(ostream&, const DataandTime&);
private:
 int day;
 int month;
 int year;
public:
  DataandTime (int,int,int,int,int,int);
  DataandTime();
  void print();

};
#endif

