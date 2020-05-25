#ifndef TIME_H
#define TIME_H


class Time
{
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
