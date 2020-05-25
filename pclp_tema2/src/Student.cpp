#include "Student.h"
#include<vector>
#include <iostream>
using namespace std;
Student::Student(string nume, string specializare): Persoana (nume,specializare)
{
    //ctor
}

bool Student:: adaugaNotaCurs (string c, int n)
{
    if(listaCursuri.size() < NR_MAX_CURSURI&&n>=1 &&n<=10) {listaCursuri.push_back(c);note.push_back(n);return true;}
    else return false;
}
void Student ::tiparesteNote()
{  cout<<"Student: "<<nume<<"("<<afiliere<<") ";
 for( int i=0;i<listaCursuri.size();i++)
    cout<<listaCursuri[i]<<": "<<note[i]<<" ";
 cout<<endl;

}
double Student :: mediaNotelor()
{   int s=0;
     for( int i=0;i<note.size();i++)
      s+=note[i];
   return (double)s / note.size() ;
}
