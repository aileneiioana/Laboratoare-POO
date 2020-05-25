#ifndef SFERA_H
#define SFERA_H
#include <iostream>
#include "Punct3D.h"
class Sfera
{
public:
    Sfera(Punct3D, double);
    Punct3D getC();
    double getR();
    void setC(Punct3D);
    void setR(double);
    double volum();
    double distO();
private:
    Punct3D c;
    double r;
};


#endif // SFERA_H
