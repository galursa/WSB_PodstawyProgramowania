#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//chcemy wygenerowac losowo tablice jednowymiarowa
//odwrocic liczby

void losujTablice(int *tab, int rozmiar)
{
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++)
    {
        tab[i] = rand()%100;
    }
}

void wyswietltTablice(int *tab, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout<<setw(3)<<tab[i];
    }
    cout<<"\n";
}

void odwrocTablice(int *tab, int rozmiar)
{
    int srodek = floor(rozmiar/2);
    for(int i=0; i<srodek ;i++)
    {
        swap(tab[i],tab[rozmiar-1-i]);
    }
}

int main()
{
    int rozmiar;
    cout << "Podaj rozmiar\n";
    cin >> rozmiar;
    int tab[rozmiar];
    losujTablice(tab,rozmiar);
    wyswietltTablice(tab,rozmiar);
    odwrocTablice(tab, rozmiar);
    wyswietltTablice(tab,rozmiar);
    return 0;
}
