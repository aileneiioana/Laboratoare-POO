#ifndef TIME_H
#define TIME_H
#include <iostream>
using std::ostream;

class Time
{
 friend ostream& operator<<(ostream&, const Time&);
 public:
 Time();
 Time(int,int,int);
 void setTime(int, int, int);
 void printShort();
 void printLong ();

 protected:
 int hour;
 int minute;
 int second;
};

#endif // TIME_H
