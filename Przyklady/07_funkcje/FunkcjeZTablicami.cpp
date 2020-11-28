#include <iostream>
#include <iomanip>
using namespace std;

void zerujTablice(int tab[], int rozmiar);
void wyswietlTablice(int tab[], int rozmiar);

int main()
{
    int rozmiar=10;
    int tablica[rozmiar];
    cout<<"Tablice przed zerowaniem\n";
    wyswietlTablice(tablica, rozmiar);
    zerujTablice(tablica, rozmiar);
    cout<<"Tablice po zerowaniu\n";
    wyswietlTablice(tablica, rozmiar);
    return 0;
}

void zerujTablice(int tab[], int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
        tab[i]=0;
}

void wyswietlTablice(int tab[], int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout<<setw(4)<<tab[i];
    }
    cout<<"\n";
}
