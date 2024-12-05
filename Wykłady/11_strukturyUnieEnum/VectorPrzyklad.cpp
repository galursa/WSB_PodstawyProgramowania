#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string>kolory = {"bialy", "czerwony", "turkusowy"};
    
    cout<<"Wyswietlam wszystkie dane:\n ";
    for( string jedenKolor : kolory)
    {
        cout<< jedenKolor<<" ";
    }
    cout<<"\n";
    cout<<"Pierwszy element: "<<kolory.front()<<"\n";
    cout<<"Drugi element: "<<kolory[1]<<"\n";
    cout<<"Ostatni element: "<<kolory.back()<<"\n";
    cout<<"Dodaje element:\n";
    kolory.push_back("ochra");
    cout<<"Wyswietlam elementy na pozycji 3:"<<kolory.at(3)<<"\n";
    cout<<"Rozmiar: "<<kolory.size()<<"\n";
    cout<<"Czyscimy zawartosc: \n";
    kolory.clear();
    cout<<"Proba wyswietlenia: \n";
    for( string jedenKolor : kolory)
    {
        cout<< jedenKolor<<" ";
    }
    return 0;
}