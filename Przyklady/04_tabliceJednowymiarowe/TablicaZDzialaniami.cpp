#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/*
1. Odczytamy wielkosc tablicy od uzytkownika
2. Wygenerujemy losowo tablice
3. Pobierzemy liczbe od uzytkownika
4. Przemnozymy wszystkie elementy tablicy
*/
int main()
{
    int rozmiarTab, mnoznik;
    cout <<"Podaj rozmiar tablicy\n";
    cin >> rozmiarTab;
    int tabLosowa[rozmiarTab];
    srand(time(NULL));
    cout << "Podaj mnoznik do mnozenia\n";
    cin >> mnoznik;
    for(int i=0; i<rozmiarTab; i++)
    {
        tabLosowa[i] = rand()%100;
    }
    cout<<"Tablica z losowymi wartosciami:\n";
    for(int i=0; i<rozmiarTab; i++)
    {
        cout<<tabLosowa[i]<<" ";
    }
    cout<<"\n";
    cout<<"Tablica po pomnozeniu przez "<<mnoznik<<":\n";
    for(int i=0; i<rozmiarTab; i++)
    {
        tabLosowa[i]*=mnoznik;
        cout<<tabLosowa[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
