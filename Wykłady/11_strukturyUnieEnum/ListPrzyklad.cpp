#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string>kolory = {"bialy", "czerwony", "turkusowy"};
    
    cout<<"Wyswietlam wszystkie dane:\n ";
    for( string jedenKolor : kolory)
    {
        cout<< jedenKolor<<" ";
    }
    cout<<"\n";
    cout<<"Pierwszy element: "<<kolory.front()<<"\n";
    cout<<"Ostatni element: "<<kolory.back()<<"\n";
    cout<<"Zmieniamy wartosci pierwszego i ostatniego elementu:\n";
    kolory.front()="czarny";
    kolory.back()="zielony";
    cout<<"Pierwszy element: "<<kolory.front()<<"\n";
    cout<<"Ostatni element: "<<kolory.back()<<"\n";  
    
    cout<<"Dodaje element na koniec:\n";
    kolory.push_back("ochra");
    cout<<"Dodaje element na poczatek:\n";
    kolory.push_front("karmin");
    cout<<"Pierwszy element: "<<kolory.front()<<"\n";
    cout<<"Ostatni element: "<<kolory.back()<<"\n";  
    cout<<"\nUsuwamy elementy\n:";
    kolory.pop_front();
    cout<<"Pierwszy element: "<<kolory.front()<<"\n";
    kolory.pop_back();
    cout<<"Ostatni element: "<<kolory.back()<<"\n";  
    cout<<"\nAktualny rozmiar listy:"<<kolory.size()<<"\n";
    cout<<"Sprawdzamy czy lista jest puta?: "<<kolory.empty()<<"\n";
    cout<<"\nOstatnia lista: \n";
    for( string jedenKolor : kolory)
    {
        cout<< jedenKolor<<" ";
    }
    return 0;
}