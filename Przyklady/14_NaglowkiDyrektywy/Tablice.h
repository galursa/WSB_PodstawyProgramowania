/*
- generujLosowo
- wypisz
- odczytajOdUzytkownika
- pomnozPrzez
*/
#include<time.h>

void wypisz(int tab[], int rozmiar)
{
    std::cout<<"Elementy tablicy:\n";
    for(int i=0; i<rozmiar; i++)
    {
        std::cout<<tab[i]<<" ";
    }
    std::cout<<"\n";
}

void generujLosowo(int tab[], int rozmiar, int poczatek, int koniec)
{
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++)
    {
        tab[i] = rand()%(koniec-poczatek+1)+poczatek;
    }
}

void odczytajOdUzytkonika(int tab[], int rozmiar)
{
    std::cout<<"Zapisuje wartosci do tablicy\n";
    std::cout<<"Podaj liczby do tablicy\n";
    for(int i=0; i<rozmiar; i++)
    {
        std::cout<<i<<" : ";
        std::cin>>tab[i];
    }
}







