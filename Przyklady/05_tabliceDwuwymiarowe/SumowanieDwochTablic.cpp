#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

/*
generujemy losowo dwie dwuwymiarowe tablice
liczbami z zakresu 50 do 100
Dodajemy te dwie tablice do siebie
*/


int main()
{
    int liczbaWierszy=5, liczbaKolumn=5;
    int tab1[liczbaWierszy][liczbaKolumn], tab2[liczbaWierszy][liczbaKolumn];
    int tabWynikowa[liczbaWierszy][liczbaKolumn];
    srand(time(NULL));
    for(int i=0; i<liczbaWierszy; i++)
    {
        for(int j=0; j<liczbaKolumn; j++)
        {
            tab1[i][j] = rand()%51 +50;
            tab2[i][j] = rand()%51 +50;
        }
    }
    cout<<"Pierwsza tablica:"<<endl;

    for(int i=0; i<liczbaWierszy; i++)
    {
        for(int j=0; j<liczbaKolumn; j++)
        {
            cout<<setw(4)<<tab1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Druga tablica:"<<endl;
    for(int i=0; i<liczbaWierszy; i++)
    {
        for(int j=0; j<liczbaKolumn; j++)
        {
             cout<<setw(4)<<tab2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Suma tablic:"<<endl;
    for(int i=0; i<liczbaWierszy; i++)
    {
        for(int j=0; j<liczbaKolumn; j++)
        {
            tabWynikowa[i][j] = tab1[i][j]+tab2[i][j];
            cout<<tabWynikowa[i][j]<<" ";
        }
        cout<<endl;
    }
    int I[liczbaWierszy][liczbaWierszy];
    cout<<"Macierz Jednostkowa:" << endl;
     for(int i=0; i<liczbaWierszy; i++)
    {
        for(int j=0; j<liczbaWierszy; j++)
        {
            if (i==j)
            {
                I[i][j] = 1;
            } else{
                I[i][j] = 0;
            }
        }
    }
     for(int i=0; i<liczbaWierszy; i++)
    {
        for(int j=0; j<liczbaWierszy; j++)
        {
            cout<<I[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
