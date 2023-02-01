#include <iostream>
#include "Tablice.h"

using namespace std;

int main()
{
    /*
    1. deklaracja tablicy pustej
    2. wypelnienie losowymi
    3. wypisanie
    4. odczytaj od uzytkonika
    5. wypisanie
    */
    int rozmiar = 10;
    int tab[rozmiar];
    generujLosowo(tab,rozmiar, 3,5);
    wypisz(tab,rozmiar);
    odczytajOdUzytkonika(tab,rozmiar);
    wypisz(tab,rozmiar);

    return 0;
}
