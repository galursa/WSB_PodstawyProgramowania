#include <iostream>

using namespace std;

int main()
{
    /* Odczytujemy od uzytkownika miesiac cyfrowo
     i liczymy ile miesiecy zostalo do konca roku
    */
    cout << "Licze ile miesiecy zostalo do konca roku.\n";
    cout << "Wpisz liczbe oznaczajaca miesiac.\n";
    int miesiac, ileDoKoncaRoku;
    cin >> miesiac;
    switch (miesiac)
    {
    case 1:
        ileDoKoncaRoku = 11;
        break;
    case 2:
        ileDoKoncaRoku = 10;
        break;
    case 3:
        ileDoKoncaRoku = 9;
        break;
    case 4:
        ileDoKoncaRoku = 8;
        break;
    case 5:
        ileDoKoncaRoku = 7;
        break;
    case 6:
        ileDoKoncaRoku = 6;
        break;
    case 7:
        ileDoKoncaRoku = 5;
        break;
    case 8:
        ileDoKoncaRoku = 4;
        break;
    case 9:
        ileDoKoncaRoku = 3;
        break;
    case 10:
        ileDoKoncaRoku = 2;
        break;
    case 11:
        ileDoKoncaRoku = 1;
        break;
    case 12:
        ileDoKoncaRoku = 0;
        break;
    default:
        cout<<"Podano nieprawidlowe oznaczenie miesiaca \n";
        return 0;
    }
    cout <<"Do konca roku zostalo:" << ileDoKoncaRoku <<" miesiecy\n";
    return 0;
}
;
