#include <iostream>
#include <ctime>
using namespace std;
// chcemy pomnożyć przez siebie wszystkie elementy tablicy
int main()
{
    srand(time(NULL));

    int rozmiar = 5;
    int losowe[rozmiar];
    cout<<"Tablica przed mnozeniem\n";
    //zakres do losowania od 20 do 40
    for(int i=0; i<rozmiar; i++ )
    {
         losowe[i] = rand()%5+1;
         cout<<losowe[i]<<" ";
    }
    int wynik = 1;
    cout<<"\n";
    for(int i=0; i<rozmiar; i++ )
    {
        wynik*=losowe[i]; // wynik=wynik*losowe[i]
    }
    cout<<"Wynik mnozenia: "<<wynik<<"\n";
    return 0;
}
