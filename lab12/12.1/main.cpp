#include <iostream>
#include <vector>
using namespace std;
main()
{
 vector<string> e;
 e.push_back("Primul element");
 e.push_back("Al doilea element");
 e.push_back("Al treilea element");
 cout << "Citirea elementelor dupa indice:" << endl;
 for(int i=0; i < e.size(); i++)
 cout << e[i] << endl;
 cout << endl << "Citirea elementelor cu iterator:" << endl;
 vector<string>::const_iterator it;
 for(it=e.begin(); it!=e.end(); it++)
 cout << *it << endl;
 cout << endl << "Citirea elementelor in ordine inversa:" << endl;
 vector<string>::reverse_iterator rit;
 for(rit=e.rbegin(); rit!=e.rend(); ++rit)
 cout << *rit << endl;
 return 0;
}
