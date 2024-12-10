#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

/*
1. tworzymy funkcje losujaca elementy do dwuwymiarowej tablicy
2. wyswietlamy funkcja tablice
3. zrobimy funkcje ktora wykonuje dzialania, dodawanie, odejmowanie, mnozenie
*/

void losujTab2d(int* tab, int rozmiar)
{
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++)
    {
        for(int j=0; j<rozmiar; j++)
        {
            tab[i*rozmiar+j] = rand()%100;
        }
    }
}

void wyswietlTab2D(int* tab, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        for(int j=0; j<rozmiar; j++)
        {
            cout<<setw(4)<<tab[i*rozmiar+j];
        }
        cout<<"\n";
    }
    cout<<"\n";

}

void dzalaniaTab2D(int *tab, int rozmiar, char dzialanie, int liczba)
{
    switch(dzialanie)
    {
        case '+':
            for(int i=0; i<rozmiar; i++)
            {
                for(int j=0; j<rozmiar; j++)
                {
                    tab[i*rozmiar+j]+=liczba;
                }
            }
            break;
        case '-':
            for(int i=0; i<rozmiar; i++)
            {
                for(int j=0; j<rozmiar; j++)
                {
                    tab[i*rozmiar+j]-=liczba;
                }
            }
            break;
        case '*':
            for(int i=0; i<rozmiar; i++)
            {
                for(int j=0; j<rozmiar; j++)
                {
                    tab[i*rozmiar+j]*=liczba;
                }
            }
            break;
        default:
            cout<<"Nieprawidlowa tablica, lub nieprawidlowe dane. Nie wykonuje dzialania\n";
            break;
    }
}


int main()
{
    int rozmiar = 10;
    int tablica[rozmiar][rozmiar];
    losujTab2d((int *)tablica, rozmiar);
    wyswietlTab2D((int *)tablica, rozmiar);
    cout<<"Dodaje stala wartosc do elementow tablicy\n";
    dzalaniaTab2D((int*)tablica, rozmiar, '+', 2);
    wyswietlTab2D((int *)tablica, rozmiar);
    cout<<"Mnoze elementy tablicy przez stala wartosc\n";
    dzalaniaTab2D((int*)tablica, rozmiar, '*', 2);
    wyswietlTab2D((int *)tablica, rozmiar);
    cout<<"Odejmuje stala wartosc od elementow tablicy\n";
    dzalaniaTab2D((int*)tablica, rozmiar, '-', 2);
    wyswietlTab2D((int *)tablica, rozmiar);
    return 0;
}
