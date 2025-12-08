#include <iostream>

using namespace std;
/* 1. funkcja do wyswietlania
2. Funkcje do pobierania wartosci od uzytkownika
3. Funkcja do mnozenia wartosci tablicy przez liczbe
*/

void wyswietlTablice(int *tab, int rozmiar)
{
    for(int i =0; i<rozmiar; i++)
        cout<< tab[i]<<" ";
    cout<<"\n";
}

void podajElementyTablicy(int *tab, int rozmiar)
{
    cout<<"Podaj elementy tablicy\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<i<<":";
        cin >>tab[i];
    }
    cout<<"\n";
}

int podajLiczbe()
{
    int rozmiar;
    cout<<"Podaj liczbe: \n";
    cin >> rozmiar;
    return rozmiar;
}

void pomnozPrzezLiczbe(int *tab, int rozmiar, int liczba)
{
    for(int i =0; i<rozmiar; i++)
    {
        tab[i]*=liczba;
    }
}

int main()
{
    int rozmiar = podajLiczbe();
    int tablica[rozmiar];
    podajElementyTablicy(tablica, rozmiar);
    wyswietlTablice(tablica, rozmiar);
    int liczba = podajLiczbe();
    pomnozPrzezLiczbe(tablica, rozmiar, liczba);
    wyswietlTablice(tablica,rozmiar);
    return 0;
}
