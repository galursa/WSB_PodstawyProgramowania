#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    //chcemy od 3 do 6 wierszy  3 4 5 6
    int wiersze = rand()%4+3;
    int macierz[wiersze][wiersze];
    for(int i=0; i<wiersze; i++)
        for(int j=0; j<wiersze; j++)
            macierz[i][j]=0;
    /*  0 1 2
      0|2 0 0
      1|1 2 0
      2|2 4 2
    */
    for(int i=0; i<wiersze; i++)
        for(int j=0; j<=i; j++)
            macierz[i][j]=rand()%10;
    for(int i=0; i<wiersze; i++)
    {
        for(int j=0; j<wiersze; j++)
        {
            cout<<macierz[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
