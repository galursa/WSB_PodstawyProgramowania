#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
/* 1. Tworzymy trójwymiarow¹ tablicê
    2. Losujemy liczby
    3. wyswietlamy
*/
int main()
{
   int warstwa, wiersz, kolumna;
   srand(time(NULL));
   warstwa = rand()%3+2;
   wiersz = rand()%3+5;
   kolumna = rand()%3+5;
   int tablica[warstwa][wiersz][kolumna];
   for(int i=0; i<warstwa; i++)
   {
       for(int j=0; j<wiersz; j++)
       {
           for(int k=0; k<kolumna; k++)
           {
                tablica[i][j][k]=rand()%100;
                cout<<setw(3)<<tablica[i][j][k];
           }
           cout<<"\n";
       }
       cout<<"\n";
   }


    return 0;
}
