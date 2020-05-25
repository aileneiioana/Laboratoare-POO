#include <iostream>
using namespace std;
#include "complex.h"
 Complex  operator* (const Complex &c1,const Complex &c2)
{
    double r=c1.real*c2.real-c1.imaginar*c2.imaginar;
    double i=c1.real*c2.imaginar+c1.imaginar*c2.real;
    Complex nc;
    nc.setReal(r);
    nc.setImaginar(i);
    return nc;
}
istream& operator>>(istream& in, Complex& c)
{  double r,i;
   in>>r>>i;
   c.setReal(r);
   c.setImaginar(i);
return  in;
}
ostream& operator<<(ostream& out, Complex &c)
{
    out<<c.getReal()<<";"<<c.getImaginar();
    return out;
}
int main()
{
 Complex n1(2,4);
 Complex n2(1,-4);
 //Complex n3;
 //++n1;
 //n1++;

 n2 = n1+n2;
 cout <<"n1+n2= "<< n2.getReal() << ";" << n2.getImaginar() << endl;
 n1=!n1;
 cout <<"!n1= "<< n1 << endl;
 n1=n1*n2;
 cout <<"n1*n2= "<< n1<< endl;

 //cout<<"n3="; cin>>n3; cout<<n3<<endl;

 return 0;
}
