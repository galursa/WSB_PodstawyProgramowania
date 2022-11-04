#include <iostream>

using namespace std;
/*
1. Wygenerowac ciag od 3, 6, 9, ..., do zadanej liczby
2. i zapisac go do tablicy.
3. wyswietlic tablice.
*/
int main()
{
    int ciag[34];
    int j=0;
    for(int i = 0;i<100; i=i+3)
    {
        ciag[j]=i;
        j++;
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"Ciag ma: "<<j<<" elementow\n";
    cout<<"Wyswietlamy zawartosc tablicy\n";
    for(int i=0; i<34; i++)
    {
        cout<<ciag[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
