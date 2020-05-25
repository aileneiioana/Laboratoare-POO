#include "Sfera.h"
#include <math.h>
Sfera::Sfera(Punct3D c,double r){
    setC(c);
    setR(r);
}
Punct3D Sfera::getC(){return c;}
double Sfera::getR(){return r;}
void Sfera::setR(double r){this->r = r;}
void Sfera::setC(Punct3D c){this->c=c;}
double Sfera::volum(){
    double v=1;
    v=v*4*3.14*r*r*r;
    return v/3;
}
double Sfera::distO(){
    double d;
    d=sqrt( getC().getX()*getC().getX()+getC().getY()*getC().getY()+getC().getZ()*getC().getZ());
    return d;
    }
