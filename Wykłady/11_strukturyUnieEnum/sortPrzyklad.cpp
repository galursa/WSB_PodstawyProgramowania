#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
   vector<string> muzyka = {"Rock","Pop","Klasyczna"};
   vector<string>::iterator it; 
  
   cout<<"Wyswietlamy zawartosc wektora z uzyciem iteratora:\n";
   for (it = muzyka.begin(); it != muzyka.end(); ++it) 
   {
        cout << *it << " ";
   }
    cout<<"\nSortujemy\n"  ;
    sort(muzyka.begin(),muzyka.end());
    for(string rodzaj: muzyka)
    {
        cout<<rodzaj<<" ";
    }
    cout<<"\n";
    
   vector<int> liczby = {1, 2, 3, 4, 5};
   cout<<"\nWyswietlamy zawaratosc\n";
   for (auto it= liczby.begin();it!=liczby.end(); ++it )
   {
       cout << *it << " ";
   }
   cout<<"\nPosortujemy od trzeciego miejsca odwrotnie\n";
   sort(liczby.rbegin() + 2, liczby.rend());
   for (auto it= liczby.begin();it!=liczby.end(); ++it )
   {
       cout << *it << " ";
   }
   
   
    return 0;
}