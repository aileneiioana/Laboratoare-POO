#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>
using namespace std;
class Persoana
{
    public:
        Persoana(string ,string );
        string getNume() {return nume;};
        string getAfiliere(){return afiliere;};
        void setAfiliere(string a){afiliere=a;};
    protected:
    string nume;
    string afiliere;
};

#endif // PERSOANA_H
