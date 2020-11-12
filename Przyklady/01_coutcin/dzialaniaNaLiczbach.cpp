#include <iostream>

using namespace std;
/*
    Pobieramy dwie liczby od użytkownika i wykonamy na nich operację
    dodawania, mnożenia, dzielenie, reszta z dzielnia, ++, --
*/

int main()
{
    int liczba1; //toJestPrzykladNotacjiCamelCase
    float liczba2;
    cout<<"Prosze podac liczbe calkowita \n";
    cin>>liczba1;
    cout<<"Prosze podac liczbe rzeczywista \n";
    cin>>liczba2;
    cout<<"Dodawanie: "<<liczba1+liczba2<<"\n";
    cout<<"Mnożenie: "<<liczba1*liczba2<<"\n";
    cout<<"Dodawanie: "<<liczba1/liczba2<<"\n";
    cout<<"Reszta z dzielenia (modulo): "<<liczba1%(int)liczba2<<"\n";
    cout<<"Liczba1 przed \"++\":"<<liczba1++<<" liczba1 po \"++\" "<<liczba1<<"\n";
    cout<<"Liczba1 przed \"++\":"<<++liczba1<<" liczba1 po \"++\" "<<liczba1<<"\n";
    liczba1+=liczba2; //liczba1 = liczba1 + liczba2
    cout<<"Dodawanie z przypisaniem"<<liczba1<<"\n";
    return 0;
}
