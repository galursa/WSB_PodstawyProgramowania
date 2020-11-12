#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
//Wygenerować tablicę losowych liczb i wypisać całą tablicę oraz elementy z przekątnej.
int main()
{
    int rozmiar = 5;
    int tabLosowa[rozmiar][rozmiar];
    srand(time(NULL));
    for(int i = 0; i<rozmiar;i++)
    {
        for(int j = 0; j<rozmiar; j++)
        {
            tabLosowa[i][j] = rand()%100;
            cout<<setw(4)<<tabLosowa[i][j];
        }
        cout<<"\n";
    }
    cout<<"Elementy z przekatnej\n";
    for(int i = 0; i<rozmiar; i++)
    {
        cout<<setw(4)<<tabLosowa[i][i];
    }
    return 0;
}
