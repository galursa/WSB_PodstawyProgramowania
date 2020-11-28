#include <iostream>
using namespace std;
int main()
{
    int rozmiar;
    cout<<"Prosze podac rozmiar macierzy \n";
    cin>>rozmiar;
    for(int j=0;j<rozmiar;j++)
    {
        for(int i=0;i<rozmiar;i++)
        {
            if(j == i)
            {
                cout<<"1 ";
            } else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
/* wygenerujemy macierz jednostkow¹ o
   wielkoœci podanej przez u¿ytkownika
   1 0 0
   0 1 0
   0 0 1*/
