#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
using namespace std;

int main()
{
    //wektory
   vector<string> muzyka = {"Rock","Pop","Klasyczna"};
   //iterator - pelni role zmiennej sterujacej oraz jest wskaznikiem do elementu,
   // do ktorego dostajemy dostep w petli
   vector<string>::iterator it; 
   //to jest petla z wykorzystaniem iteratora
   cout<<"Wyswietlamy zawartosc wektora z uzyciem iteratora:\n";
   for (it = muzyka.begin(); it != muzyka.end(); ++it) 
   {
        cout << *it << " ";
   }

   list<int> liczby = {1, 2, 3, 4, 5};
   cout<<"\nWyswietlamy zawaratosc listy z uzyciem slowa kluczowego auto\n";
   for (auto it= liczby.begin();it!=liczby.end(); ++it )
   {
       cout << *it << " ";
   }
   deque <char> litery = {'a', 'b', 'c', 'd', 'e'};
   cout<<"\nWyswietlamy zawartosc kolejki z dwoma koncami w odwrotnej kolejnosci: \n";
   for (auto it = litery.rbegin(); it!=litery.rend(); ++it)
   {
       cout << *it << " ";
   }
   set <double> ulamki = {12.12,14.14,15.15,16.16};
   cout<<"\nWyswietlamy zbior liczb \n";
   for(auto it=ulamki.begin(); it!=ulamki.end(); ++it)
   {
       cout << *it << " ";
   }
   cout<<"\nA tu mamy mape\n";
   map <string,string> zespoly = {{"DM", "Depeche Mode"},{"JLo", "Jennifer Lopez"}};
   for (auto it = zespoly.begin(); it != zespoly.end(); ++it) 
   {
        cout <<"Skrot "<< it->first << " oznacza " << it->second << "\n";
   }
    return 0;
}