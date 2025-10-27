#include <iostream>

using namespace std;

// Pobieramy od u¿ytkownika liczbe i sprawdzamy jaka jest reszta po podzieleniu jej przez drug¹ liczbê.

int main()
{
    cout << "Podaj liczbe\n";
    int liczba,dzielnik;
    cin >> liczba;
    cout << "Podaj dzielnik - liczbe z zakresu od 1-9 \n";
    cin >> dzielnik;
    int resztaZDzielenia = liczba%dzielnik;

    switch (resztaZDzielenia)
    {
        case 0:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" bez reszty\n";
            break;
        case 1:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 1\n";
            break;
        case 2:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 2\n";
            break;
        case 3:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 3\n";
            break;
        case 4:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 4\n";
            break;
        case 5:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 5\n";
            break;
        case 6:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 6\n";
            break;
        case 7:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 7\n";
            break;
        case 8:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 8\n";
            break;
        case 9:
            cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<" reszty 9\n";
            break;
        default:
            if (resztaZDzielenia >9)
            {
                 cout << "Liczba a= "<<liczba<<" dzieli sie przez liczbe b= "<<dzielnik<<"reszty "<<resztaZDzielenia<<"\n";
            } else{
                cout <<"Nierozpoznany wybor lub blad w programie\n";
            }
    }

    return 0;
}
