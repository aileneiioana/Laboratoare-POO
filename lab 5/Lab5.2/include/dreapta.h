#ifndef DREAPTA_H
#define DREAPTA_H
#include"punct.h"

class Dreapta{
public:
    Dreapta(double , double , double , double ) ;
    void setp1( Punct);
    void setp2(Punct);
    Punct getp1();
    Punct getp2();
    void print ();
private:
    Punct p1;
    Punct p2;
};
#endif

