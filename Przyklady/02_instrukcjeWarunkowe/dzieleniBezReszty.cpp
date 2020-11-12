#include <iostream>
#include <string>
using namespace std;
/*
    Odczytamy od użytkownika imię. A następnie pobierzemy dwie liczby
    i sprawdzimy czy pierwsza dzieli się bez reszty przez drugą.
*/
int main()
{
    string imie;
    cout<<"Prosze podac imie \n";
    cin>>imie;
    cout<<"Witaj "<<imie<<"\n";
    int liczba1, liczba2;
    cout<<"Prosze podac liczbe 1\n";
    cin>>liczba1;
    cout<<"Prosze podac liczbe 2\n";
    cin>>liczba2;
    if ((liczba1%liczba2) == 0)
    {
        cout<<"Liczba dzieli sie bez reszty\n";
    } else
    {
        cout<<"Liczba ma reszte "<<liczba1%liczba2<<"\n";
    }
    return 0;
}
