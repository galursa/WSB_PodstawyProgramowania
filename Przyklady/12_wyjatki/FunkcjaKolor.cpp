#include <iostream>

using namespace std;

/*
    Robimy funkcje, ktora przyjmuje liczbe jako argument
    zwraca nazwe koloru
    funkcja wyrzuca wyjatek, kiedy uzytkownik poda
    niedobry argument
*/

string kolor(int numer)
{
    if (!((numer>=1)&&(numer<=5)))
    {
        throw invalid_argument("Podano liczbe spoza zakresu\n");
    }
    switch (numer)
    {
    case 1:
        return "yellow";
        break;
    case 2:
        return "blue";
        break;
    case 3:
        return "red";
        break;
    case 4:
        return "green";
        break;
    case 5:
        return "black";
        break;
    }
}

int main()
{
    try{
        cout<<kolor(1)<<"\n";
        cout<<kolor(2)<<"\n";
        cout<<kolor(5)<<"\n";
        cout<<kolor(6)<<"\n";
        cout<<kolor(3)<<"\n";
    }catch(invalid_argument &wyjatek)
    {
        cout<<wyjatek.what();
    }
    return 0;
}
