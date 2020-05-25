#include <iostream>
#include "DataandTime.h"
using namespace std;
ostream& operator<<(ostream& output, const Time& t)
{
 output << t.hour
 << ":" << (t.minute < 10 ? "0" : "") << t.minute
 << ":" << (t.second < 10 ? "0" : "") << t.second;
 return output;
}
ostream& operator<<(ostream& output, const DataandTime& d)
{
 output << d.day << '-' << d.month << '-' << d.year<< " " << static_cast<Time>(d);
 return output;
}
int main()
{
    Time t1,t2(12,50,30);
    DataandTime d1,d2(12,11,2000,2,10,45);
    cout<<"obiect clasa time: "<<endl<<t1<<endl<<"obiect clasa dataandtime: "<<endl<<d1<<endl<<endl
    <<"obiect clasa time: "<<endl<<t2<<endl<<"obiect clasa dataandtime: "<<endl<<d2;
    return 0;
}
