#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include "Persoana.h"
using namespace std;
#include <vector>

class Profesor : public Persoana
{
    friend ostream& operator<<(ostream&, const Profesor&);
    public:
    Profesor(string,string);
    bool adaugaCurs(string);
    bool stergeCurs(string);
    private:
    vector<string> listaCursuri;
    const int NR_MAX_CURSURI=5;
};

#endif // PROFESOR_H
