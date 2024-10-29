#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    /*
    1. Generujemy losowo tablice
    2. pobierzemy wartosc od uzytkownika
    3. wykonamy dzialania: dodawanie, mnozenie i odejmowanie
    4. ?dzielenie
    */
    //srand(time(NULL));
    int rozmiar = 10;
    int liczby[rozmiar];
    for(int i=0; i<rozmiar; i++)
    {
        liczby[i] = rand()%100;
    }
    int wartosc;
    cout<<"Podaj liczbe\n";
    cin>>wartosc;
    for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]<<" ";
    }
    cout<<"\n";
    cout<<"Dodawanie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]+wartosc<<" ";
    }
    cout<<"\nMnozenie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]*wartosc<<" ";
    }
    cout<<"\nOdejmowanie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<liczby[i]-wartosc<<" ";
    }
    cout<<"\nDzielenie\n";
    for(int i=0; i<rozmiar; i++)
    {
        cout<<(float)liczby[i]/wartosc<<" ";
    }


    return 0;
}
