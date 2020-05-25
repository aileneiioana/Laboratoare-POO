#include <iostream>
using std::cout;
using std::endl;
#include "dreapta.h"
#include "punct.h"


    Dreapta::Dreapta(double a, double b , double c, double d) : p1(a,b), p2(c,d) {};
    void Dreapta:: setp1( Punct p1) {this->p1=p1;}
    void Dreapta:: setp2(Punct p2){this->p2=p2;}
    Punct Dreapta:: getp1(){return p1;}
    Punct Dreapta:: getp2(){return p2;}
    void Dreapta:: print (){
        cout<<"[("<<p1.getX()<<","<<p1.getY()<<"),("<<p2.getX()<<","<<p2.getY()<<")]"<<endl;
    }


