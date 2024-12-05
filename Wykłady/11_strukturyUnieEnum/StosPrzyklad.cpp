#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string>kolory;
    cout<<"Dodaje 2 elementy na stos:\n";
    kolory.push("umbra");
    kolory.push("ultramaryna");
    cout<<"Usuwam z wierzcholka:\n";
    kolory.pop();
    cout<<"Na wierzcholku jest: "<<kolory.top()<<"\n";  
    cout<<"\nAktualny rozmiar stosu:"<<kolory.size()<<"\n";
    cout<<"Sprawdzamy czy stos jest pusty?: "<<kolory.empty()<<"\n";
    return 0;
}