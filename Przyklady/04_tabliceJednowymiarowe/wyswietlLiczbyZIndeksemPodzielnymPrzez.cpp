#include <iostream>
using namespace std;
//Generujemy liczby losowe i wy�wietlamy liczby, kt�rych indeks jest podzielny przez
//liczb� podan� przez u�ytkownika
int main()
{
    int rozmiar = 50;
    int liczLosowe[rozmiar];
    cout<<"Tablica liczb losowych z zakresu od 0 do 9\n";
    for(int i = 0; i < rozmiar; i++ )
    {
        liczLosowe[i] = rand()%10;
        cout<<i<<":"<<liczLosowe[i]<<" ";
    }
    cout<<"\n";
    cout<<"Prosze podac liczbe, ktora bedzie uzywana do indeksu w tablicy\n";
    int indeks;
    cin>>indeks;
    for(int i = indeks; i<rozmiar; i+=indeks)
    {
         cout<<i<<":"<<liczLosowe[i]<<" ";
    }
    return 0;
}
