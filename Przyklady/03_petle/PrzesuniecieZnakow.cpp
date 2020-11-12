#include <iostream>
using namespace std;
//Generujemy losowo znaki
int main()
{
    int rozmiar = 10, kod = 3;
    char znaki[rozmiar];
    cout<<"Tablica liczb losowych z zakresu od 0 do 9\n";
    for(int i = 0; i < rozmiar; i++ )
    {
        znaki[i] = rand()%100+50;
        cout<<i<<":"<<znaki[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0; i < rozmiar; i++ )
    {
        znaki[i]+=kod;
        cout<<i<<":"<<znaki[i]<<" ";
    }

    return 0;
}
