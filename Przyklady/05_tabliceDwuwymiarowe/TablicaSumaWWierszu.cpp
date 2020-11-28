#include <iostream>
#include <iomanip>
using namespace std;
// Pobieramy wartosci od uzytkownika i liczymy sume w wierszach i ja wyswietlamy
int main()
{
    int rozmiar = 3;
    int losowe[rozmiar][rozmiar];
    cout<<"Liczymy sume w wierszach. Prosze podac wartosci do tablicy\n";
    for(int i = 0; i<rozmiar; i++)
    {
        for (int j=0; j<rozmiar; j++)
        {
            cout<<i<<","<<j<<" : ";
            cin>>losowe[i][j];
        }
    }
    cout<<"   ";
    for(int j=0; j<rozmiar; j++)
        cout<<setw(3)<<j;
    cout<<"\n"<<"   ";;
    for(int j=0; j<=rozmiar; j++)
        cout<<"---";
    cout<<"\n";
    int suma = 0;
    for(int i = 0; i<rozmiar; i++)
    {
        cout<<i<<" |";
        for (int j=0; j<rozmiar; j++)
        {
            suma+=losowe[i][j];
            cout<<setw(3)<<losowe[i][j]<<" ";
        }
        cout<<" : "<<suma;
        suma=0;
        cout<<"\n";
    }

    return 0;
}
