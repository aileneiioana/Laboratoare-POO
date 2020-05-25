#include "Profesor.h"
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
Profesor::Profesor(string n, string d):Persoana (n,d)
{
}

bool Profesor::adaugaCurs(string c)
{
    if(listaCursuri.size() <NR_MAX_CURSURI)
    {
        if ( find(listaCursuri.begin(),listaCursuri.end(),c)== listaCursuri.end())
        {
            listaCursuri.push_back(c);
            return true;
        }
    }
    return false;
}

bool Profesor::stergeCurs(string c)
{
    vector <string> :: const_iterator c1;
    c1=find(listaCursuri.begin(),listaCursuri.end(),c);
    if ( c1!= listaCursuri.end())
    {
        listaCursuri.erase(c1);
        return true;
    }
    return false;
}
