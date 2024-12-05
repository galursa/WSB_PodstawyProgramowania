#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string>kolory ={"zielony","czerwony","niebieski"};
    cout<<"Wyswietlam calosc\n";
    for(string jedenKolor : kolory)
    {
        cout<<jedenKolor<<" ";
    }
    cout<<"\n";
    cout<<"Dodajemy elementy:\n";
    kolory.insert("bialy");
    kolory.insert("czarny");
    cout<<"Wyswietlam calosc\n";
    for(string jedenKolor : kolory)
    {
        cout<<jedenKolor<<" ";
    }
    cout<<"\n";
    cout<<"Usuwamy elementy\n";
    kolory.erase("bialy");
     cout<<"Wyswietlam calosc\n";
    for(string jedenKolor : kolory)
    {
        cout<<jedenKolor<<" ";
    }
    cout<<"\n";
    cout<<"Usuwamy elementy wszystkie\n";
    kolory.clear();
    cout<<"Probujemy wyswietlic cos ze zbioru:\n";
    cout<<"Wyswietlam calosc\n";
    for(string jedenKolor : kolory)
    {
        cout<<jedenKolor<<" ";
    }
    cout<<"\n";
    
    
    cout<<"\nAktualny rozmiar kolejki:"<<kolory.size()<<"\n";
    cout<<"Sprawdzamy czy kolejka jest pusta?: "<<kolory.empty()<<"\n";
    return 0;
}