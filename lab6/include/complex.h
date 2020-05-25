#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
class Complex
{
 public:
 Complex(double=0, double=0);
 void setReal(double);
 double getReal();
 void setImaginar(double);
 double getImaginar();
 Complex operator+(Complex);
   Complex operator!();
  // Complex operator++();//prefixar
  // Complex operator++(int);//postfixare
   friend Complex  operator* (const Complex &,const Complex &);
   //friend std:: istream& operator>>(std::istream&, Complex& );
   friend std::ostream& operator>>(std::ostream&, Complex& );
 private:
 double real;
 double imaginar;
};
#endif
