#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    typedef std::map<string, int > map;
    map pairs;

    pairs.insert( map::value_type("Ailenei Ioana",9) );
    pairs.insert( map::value_type("Aldica Victor",9) );
    pairs.insert( map::value_type("Ambarus Victor",10) );
    pairs.insert( map::value_type("Buciumean Claudia",9) );
    pairs.insert( map::value_type("Chelemen Antonia",10) );

    cout << "pairs contine:\nNume - Nota\n\n";
    std::map<string,int>::iterator iter;
     for(iter = pairs.begin(); iter != pairs.end(); ++iter)
     cout << iter->first << " - "
          << iter->second << '\n';
}
