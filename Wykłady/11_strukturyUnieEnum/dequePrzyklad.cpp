#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<string>kolory ={"zielony","czerwony","niebieski"};
    cout<<"Wyswietlam calosc\n";
    for(string jedenKolor : kolory)
    {
        cout<<jedenKolor<<" ";
    }
    cout<<"\n";
    cout<<"Element z pozycji 1: "<<kolory[1]<<"\n";
    cout<<"Na poczatku jest: "<<kolory.front()<<"\n";  
    cout<<"Na koncu jest: "<<kolory.back()<<"\n"; 
    cout<<"Dodajemy na poczatek i na koniec\n";
    kolory.push_front("szary");
    kolory.push_back("ultramaryna");
    cout<<"Wyswietlam calosc\n";
    for(string jedenKolor : kolory)
    {
        cout<<jedenKolor<<" ";
    }
    cout<<"Wyswietlam element z pozycji 3"<<kolory.at(3);
    cout<<"\nZmieniam dowolny element: \n";
    kolory[0]="ochra";
    cout<<"Na poczatku jest:"<<kolory.front()<<"\n";
    cout<<"Usuwam z poczatku i z konca:\n";
    kolory.pop_front();
    kolory.pop_back();
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