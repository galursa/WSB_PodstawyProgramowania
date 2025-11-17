#include <iostream>

using namespace std;
/* 1. Pobieramy wartosci od uzytkownika do tablicy liczb rzeczywistych
    2. Losujemy jedna wartosc
    3. Mnozymy elementy w tablicy przez ta wartosc
*/

int main()
{
    float lRzeczywiste[5];
    cout<<"Wpisz 5 liczb do tablicy\n";
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<" : ";
        cin >>lRzeczywiste[i];
    }
    cout<<"Elementy tablicy\n";
    for(int i=0; i<5; i++)
    {
        cout<<lRzeczywiste[i]<<" ";
    }
    cout<<"\n";
    int lLosowa = 1 +  rand()%100;
    cout<<"Wylosowano liczbe: "<<lLosowa<<"\n";
    cout<<"Tablica po pomnozeniu: \n";
    for(int i=0; i<5; i++)
    {
        lRzeczywiste[i]*=lLosowa;
        cout<<lRzeczywiste[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
