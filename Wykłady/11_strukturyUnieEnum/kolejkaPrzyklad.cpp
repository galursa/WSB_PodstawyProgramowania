#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string>kolory;
    cout<<"Dodaje 2 elementy na koniec kolejki:\n";
    kolory.push("umbra");
    kolory.push("ultramaryna");
    cout<<"Na poczatku jest: "<<kolory.front()<<"\n";  
    cout<<"Na koncu jest: "<<kolory.back()<<"\n"; 
    cout<<"\nMozemy zmieniac wartosci na poczatku i koncu kolejki:\n";
    kolory.front()="fioletowy";
    kolory.back()="szary";
    cout<<"Na poczatku jest: "<<kolory.front()<<"\n";  
    cout<<"Na koncu jest: "<<kolory.back()<<"\n"; 
    cout<<"Usuwamy z kolejki:\n";
    kolory.pop();
     cout<<"Na poczatku jest: "<<kolory.front()<<"\n";  
    cout<<"Na koncu jest: "<<kolory.back()<<"\n"; 
    cout<<"\nAktualny rozmiar kolejki:"<<kolory.size()<<"\n";
    cout<<"Sprawdzamy czy kolejka jest pusta?: "<<kolory.empty()<<"\n";
    return 0;
}