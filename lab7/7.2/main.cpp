#include <iostream>
#include "DataandTime.h"
using namespace std;

int main()
{
    Time t1,t2(12,20,35);
    DataandTime d1,d2(16,4,2020,9,55,20);
    cout<<"obiect clasa time: "<<endl<<"in format lung: ";
    t1.printLong();
    cout<<endl<<"in format scurt: ";
    t1.printShort();
    cout<<endl<<"obiect clasa dataandtime: "<<endl;
    d1.print();
    cout<<endl<<endl<<"obiect clasa time: "<<endl<<"in format lung: ";
    t2.printLong();
    cout<<endl<<"in format scurt: ";
    t2.printShort();
    cout<<endl<<"obiect clasa dataandtime: "<<endl;
    d2.print();
    return 0;
}
