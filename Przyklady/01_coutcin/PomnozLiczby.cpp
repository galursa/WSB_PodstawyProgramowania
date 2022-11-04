#include <iostream>

using namespace std;

int main()
{
    /*
    1. pobieramy trzy liczby od uzytkownika
    2. nastepnie mnozymy je przez siebie
    3. wyswietlamy wynik
    */
    int liczba1, liczba2, liczba3;
    cout << "Podaj pierwsza liczbe" << "\n";
    cin >> liczba1;
    cout << "Podaj druga liczbe" << "\n";
    cin >> liczba2;
    cout << "Podaj trzecia liczbe" << "\n";
    cin >> liczba3;

    int wynik = liczba1 * liczba2 * liczba3;

    cout<<"Wynik = "<<wynik<<"\n";
    return 0;
}
