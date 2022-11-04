#include <iostream>
#include <ctime>
/*
wygenerujemy losowo ilosc elementow
do tablicy wpisujemy liczby od 0, 1, 2, ...
WYswietlamy tablice
*/
using namespace std;

int main()
{
    srand(time(NULL));
    int rozmiar = rand()%10+1;
    int tablica[rozmiar];
    cout<<"Generuje losowo rozmiar tablicy\n";
    for(int i=0; i<rozmiar; i++)
    {
        tablica[i] = i;
        cout<<tablica[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
