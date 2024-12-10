#include <iostream>
#include <ctime>

using namespace std;
/*
1. Generujemy tablice piszemy funkcje losujTablice
2. Wykonujemy odejmowanie, dodawanie, mnozenie wartosci odczytanej przez uzytkownika
3. Wyswietlamy wynik na ekranie
*/

void losujTablice(int *tab, int rozmiar)
{
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++)
    {
        *(tab+i) = rand()%100;
    }
}

void wyswietlTablice(int * tab, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout<<*(tab+i)<<" ";
    }
    cout<<"\n";
}

int odczytajLiczbe()
{
    cout<<"Podaj liczbe: ";
    int liczba;
    cin >>liczba;
    return liczba;
}

void dzialaniaNaTablicy(int *tab, int rozmiar, char dzialanie,int liczba)
{
    switch(dzialanie)
    {
        case '+':
            for(int i=0;i<rozmiar; i++)
            {
                *(tab+i) +=liczba;
            }
            break;
        case '-':
            for(int i=0;i<rozmiar; i++)
            {
                *(tab+i) -=liczba;
            }
            break;
        case '*':
            for(int i=0;i<rozmiar; i++)
            {
                *(tab+i) *=liczba;
            }
            break;
        default:
            cout<<"Nieprawidlowy wybor dzialania.\n Nic nie robie z tablica\n";
    }

}

int main()
{
    int rozmiar = 20;
    int tablica[rozmiar];
    losujTablice(tablica,rozmiar);
    wyswietlTablice(tablica,rozmiar);
    int liczba = odczytajLiczbe();
    dzialaniaNaTablicy(tablica,rozmiar,'+',liczba);
    wyswietlTablice(tablica,rozmiar);
    dzialaniaNaTablicy(tablica, rozmiar, '-', liczba);
    wyswietlTablice(tablica,rozmiar);
    dzialaniaNaTablicy(tablica,rozmiar, '*', liczba);
    wyswietlTablice(tablica,rozmiar);
    return 0;
}
