#include <iostream>
#include <ctime>
using namespace std;
//Tworzymy funkcję, która losuje elementy do tablicy.
void losujDoTablicy(int tab[], int rozmiar)
{
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++)
    {
        tab[i] = rand()%100;
    }
}

void wyswietlTablice(int tab[], int rozmiar)
{
      for(int i=0; i<rozmiar; i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int rozmiar = 15;
    int tab[rozmiar];
    losujDoTablicy(tab, rozmiar);
    wyswietlTablice(tab, rozmiar);
    return 0;
}

