#include <iostream>

using namespace std;
/*
  Pobieramy od uzytkownika liczba i sprawdzimy podzielnosc przez 3
*/

int main()
{
    cout << "Podaj jakas liczbe \n";
    int liczba;
    cin >> liczba;
    if (liczba%3==0)
    {
        cout<<"Liczba a = "<<liczba<<" jest podzielna przez 3\n";
    }else if (liczba%3==1)
    {
        cout<<"Liczba a = "<<liczba<<" dzieli sie przez 3 z reszta 1\n";
    }else {
        cout<<"Liczba a = "<<liczba<<" dzieli sie przez 3 z reszta 2\n";
    }
    return 0;
}
