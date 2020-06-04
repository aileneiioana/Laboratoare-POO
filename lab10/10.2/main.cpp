#include<iostream>
using std::cout;
using std::endl;
#include"point.h"
#include "circle.h"
#include "cylinder.h"
int main()
{
    Point * ci = new Circle(3.5, 22, 8);
    cout <<"Aria cercului este: " << ci -> area();
    cout<< endl;
    Point * cy = new Cylinder(10, 3.5, 22, 8);
    cout <<"Aria cilindrului este: " << cy->area();

 return 0;
}
