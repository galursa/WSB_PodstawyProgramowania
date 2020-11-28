#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
// losujemy elementy do tablicy
// wyœwietlamy numery indeksów
// liczymy œredni¹
int main()
{
    int rozmiar = 3;
    srand(time(NULL));
    int losowe[rozmiar][rozmiar];
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
            losowe[i][j]=rand()%10+1;
            cout<<setw(3)<<losowe[i][j]<<" ";
            suma+=losowe[i][j];
        }
        cout<<"\n";
    }
    cout<<"Srednia ze wszystkich elementow: "<<(double)suma/(rozmiar*rozmiar)<<"\n";
    return 0;
}
