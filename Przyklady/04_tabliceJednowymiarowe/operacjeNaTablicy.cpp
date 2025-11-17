#include <iostream>
#include <ctime>

using namespace std;
/* 1. Pobieramy rozmiar od uzytkownika
   2. Tworzymy tablice.
   3. Losujemy elementy do tablicy - inaczej generujemy losoowo tablice
   4. Pobieramy druga wartosc od uzytkownika
   5. Wykonujemy dzialania: dodajemy wartosc do elementow tablicy
      odejmujemy wartosc od elementow tablicy
      mnozymy przez wartosc
      dzielimy przez wartosc
*/

int main()
{
    int rozmiar;
    cout<<"Podaj rozmiar tablicy: ";
    cin >> rozmiar;
    int liczby[rozmiar];
    cout<<"\nWylosowana tablica\n";
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++)
    {
        liczby[i]=rand()%100;
        cout<<liczby[i]<<" ";
    }
    cout<<"\n";
    int wartosc;
    cout<<"Podaj wartosc do wykonywania dzialan: ";
    cin >> wartosc;
    cout<<"Dodawanie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]+wartosc<<" ";
    }
    cout<<"\n";
    cout<<"Odejmowanie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]-wartosc<<" ";
    }
    cout<<"\n";
    cout<<"Mnozenie\n";
        for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]*wartosc<<" ";
    }
    cout<<"\n";
    cout<<"Dzielenie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<float(liczby[i])/float(wartosc)<<" ";
    }
    cout<<"\n";


    return 0;
}
