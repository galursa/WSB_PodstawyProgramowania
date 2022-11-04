#include <iostream>

using namespace std;
/*
Napisz program, który pobiera od u¿ytkownika liczby ca³kowite i zapisuje je w tablicy.
Nastepnie wyswietla tablice.
*/

int main()
{
    int liczby[10];
    cout<<"Pobieram liczby do tablicy\n";
    for(int i=0; i<10;i++)
    {
        cout<<i<<": ";
        cin>>liczby[i];
    }
    cout<<"\n";
    cout<<"Cala tablica: \n";
    for(int i=0; i<10;i++)
    {
        cout<<liczby[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
