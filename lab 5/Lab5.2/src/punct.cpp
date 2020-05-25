#include <iostream>
using std::cout;
using std::endl;
#include "punct.h"

   Punct:: Punct(double x, double y){
        setX(x);
        setY(y);
    }
    Punct:: Punct(){
        setX(0);
        setY(0);
    }

    double  Punct:: getX(){return x;}
    void  Punct:: setX(double x){this->x = x;}
    double  Punct:: getY(){return y;}
    void  Punct:: setY(double y){this->y = y;}
