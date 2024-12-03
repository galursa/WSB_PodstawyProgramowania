#include <iostream>
#include <fstream>

using namespace std;
//generujemy tablice losowych liczb i zapisujemy do pliku

int main()
{
    int rozmiar = 10;
    int tab[rozmiar];
    for(int i=0; i<rozmiar; i++)
    {
        tab[i]=rand()%100;
        cout<<tab[i]<<" ";
    }
    cout<<"\n";
    ofstream plik("liczby.txt");
    plik<<rozmiar;
    plik<<"\n";
    for(int i=0; i<rozmiar; i++)
    {
        plik<<tab[i];
        plik<<" ";
    }
    plik.close();

    ifstream plikOdczyt("liczby.txt");
    int rozmiarOdczyt;
    plikOdczyt>>rozmiarOdczyt;
    int tabOdczyt[rozmiarOdczyt];
    if(plikOdczyt.fail())
    {
        cout<<"Nieprawidlowa nazwa pliku lub plik nie istnieje";
        return 0;
    }

    for(int i=0; i<rozmiarOdczyt; i++)
    {
        plikOdczyt>>tabOdczyt[i];
    }
    cout<<"\n";
    for(int i=0; i<rozmiarOdczyt; i++)
    {
        cout<<tabOdczyt[i]<<" ";
    }


    return 0;
}
