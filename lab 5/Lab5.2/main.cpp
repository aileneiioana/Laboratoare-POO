#include <iostream>
using std::cout;
using std::endl;
#include "dreapta.h"

int main()
{
    Dreapta d(1.2,2.3,3.4,4.5);
    d.print();
    Punct p(5.6,6.7),q(7.8,8.9);
    d.setp1(p);
    d.setp2(q);
    d.print();

    return 0;
}
