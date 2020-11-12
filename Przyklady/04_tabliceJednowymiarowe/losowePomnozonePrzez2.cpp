#include <iostream>
#include <ctime>
using namespace std;
// zapisujemy losowe liczby do tablicy
// pomno¿ymy ka¿dy element tablicy przez liczbê pobran¹ od u¿ytkownika
int main()
{
    srand(time(NULL));
    int rozmiar = 10;
    int losowe[rozmiar];
    cout<<"Tablica przed mnozeniem\n";
    //zakres do losowania od 20 do 40
    for(int i=0; i<rozmiar; i++ )
    {
         losowe[i] = rand()%21 + 20;
         cout<<losowe[i]<<" ";
    }
    cout<<"\n";
    int liczba = 5;
    cout<<"Prosze podac liczbe\n";
    cin>>liczba;
    cout<<"Tablica po pomnozeniu\n";
    for(int i=0; i<rozmiar; i++ )
    {
         losowe[i]*=liczba;
         cout<<losowe[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
