#include <iostream>
#include <iomanip>
using namespace std;
//generujemy tablice dwuwymiarowa i wyswietlamy kolumny
int kwadrat(int n=1);


int main()
{
    int rozmiar = 10;
    int tab[rozmiar][rozmiar];
    for(int i=0; i<rozmiar; i++)
    {
        for(int j=0; j<rozmiar; j++)
        {
            tab[i][j]= rand()%100;
            cout<<setw(4)<<tab[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<kwadrat()<<"\n";
    cout<<kwadrat(2)<<"\n";
    return 0;
}
int kwadrat(int n)
{
    return n*n;
}
