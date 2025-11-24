#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
/* 1. Tworzymy dwie tablice dwywymiarowe o tych samych wymiarach
   2. Generujemy losowo zawartosc jednej tablicy.
   3. Kopiujemy te tablice do drugiej.
   4. Wyswietlamy zawartosc tablicy.
   5. Tworzymy mniejsza tablice dwywmiarowa.
   6. Wypelniamy ja wartosciami losowymi.
   7. Kopiujemy ja do wiekszej tablicy
*/

int main()
{
    int wiersz1, wiersz2, wiersz3, kolumna1, kolumna2, kolumna3;
    srand(time(NULL));
    wiersz1 = rand()%6+10;
    kolumna1 = rand()%6+10;
    wiersz2 = wiersz1;
    kolumna2 = kolumna1;
    wiersz3 = rand()%6+4;
    kolumna3 = rand()%6+4;
    int tab1[wiersz1][kolumna1], tab2[wiersz2][kolumna2], tab3[wiersz3][kolumna3];
    cout<<"Pierwsza talica: \n";
    for(int i=0; i<wiersz1; i++)
    {
        for(int j=0; j<kolumna1; j++)
        {
            tab1[i][j]=rand()%100;
            cout<<setw(3)<<tab1[i][j];
        }
        cout<<"\n";
    }
    cout<<"Druga talica: \n";
    for(int i=0; i<wiersz1; i++)
    {
        for(int j=0; j<kolumna1; j++)
        {
                tab2[i][j]=tab1[i][j];
                cout<<setw(3)<<tab2[i][j];
        }
        cout<<"\n";
    }
    cout<<"Trzecia tablica: \n";
    for(int i=0; i<wiersz3; i++)
    {
        for(int j=0; j<kolumna3; j++)
        {
            tab3[i][j]=rand()%100;
            cout<<setw(3)<<tab3[i][j];
        }
        cout<<"\n";
    }
    for(int i=0; i<wiersz1; i++)
    {
        for(int j=0; j<kolumna1; j++)
        {
            tab1[i][j]=-1;
        }
    }
    for(int i=0; i<wiersz3; i++)
    {
        for(int j=0; j<kolumna3; j++)
        {
            cout<<i<<":"<<j<<"\n";
            tab1[i][j]=tab3[i][j];
        }
    }
    cout<<"Tablica pierwsza po przekopiowaniu mniejszej \n";
     for(int i=0; i<wiersz1; i++)
    {
        for(int j=0; j<kolumna1; j++)
        {
            cout<<setw(3)<<tab1[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
