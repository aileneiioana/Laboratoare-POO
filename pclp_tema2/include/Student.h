#ifndef STUDENT_H
#define STUDENT_H
#include "Persoana.h"
#include <iostream>
#include <vector>
using namespace std;
class Student : public Persoana
{
   friend ostream & operator<< (ostream &, const Student &);
    public:
        Student(string, string);
        bool adaugaNotaCurs (string , int);
        void tiparesteNote();
        double mediaNotelor();

    private:
        vector <string> listaCursuri;
        vector <int> note;
   const int    NR_MAX_CURSURI =30 ;
};

#endif // STUDENT_H
