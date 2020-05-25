#ifndef PUNCT3D_H
#define PUNCT3D_H
#include <iostream>
class Punct3D
{
public:
    Punct3D(double,double,double);
    Punct3D();
    double getX();
    double getY();
    double getZ();
    void setX(double);
    void setY(double);
    void setZ(double);
private:
    double x;
    double y;
    double z;
};
#endif // PUNCT3D_H
