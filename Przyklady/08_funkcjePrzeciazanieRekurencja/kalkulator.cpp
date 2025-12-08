#include <iostream>

using namespace std;
/*Tworzymy kalkulator z operacjami:
1. Dodawanie
2. Odejmowanie
3. Mnozenie
4. Dzielenie
*/

float dodaj(float liczba1=0, float liczba2=0)
{
    return liczba1+liczba2;
}

float odejmij(float liczba1=0, float liczba2=0)
{

    return liczba1-liczba2;
}

float pomnoz(float mnozna=1, float mnoznik=1)
{
    return mnozna*mnoznik;
}

float podziel(float dzielna=1, float dzielnik=1)
{
    if(dzielnik!=0)
    {
        return dzielna/dzielnik;
    } else{
        cout<<"Dzielenie przez zero \n";
        return -99999;
    }
}

int menu()
{
    int wybor;
    cout<<"Menu wyboru. Wybierz liczbe oznaczajaca operacje\n";
    cout<<"1. Dodawanie\n";
    cout<<"2. Odejmowanie\n";
    cout<<"3. Mnozenie\n";
    cout<<"4. Dzielenie\n";
    cout<<"0. Koniec obliczen\n";
    cin >>wybor;
    return wybor;
}

int main()
{
    float liczba1, liczba2;
    int dzielnik = rand()%10+2;
    liczba1 = float(rand()%100)/dzielnik;
    liczba2 = float(rand()%100)/dzielnik;
    cout<<"Kalkulator - wykonuje operacje\n";
    int wybor=1;
    while(wybor!=0)
    {
        wybor = menu();
        switch(wybor){
            case 1:
                cout<<liczba1<<" + "<<liczba2<< " = "<<dodaj(liczba1,liczba2)<<"\n";
                break;
            case 2:
                cout<<liczba1<<" - "<<liczba2<< " = "<<odejmij(liczba1,liczba2)<<"\n";
                break;
            case 3:
                cout<<liczba1<<" * "<<liczba2<< " = "<<pomnoz(liczba1,liczba2)<<"\n";
                break;
            case 4:
                cout<<liczba1<<" / "<<liczba2<< " = "<<podziel(liczba1,liczba2)<<"\n";
                break;
            case 0:
                cout<<"Koniec obliczen\n";
                break;
            default:
                cout<<"Nierozpoznany wybor\n";

        }
    }
    cout<<"Funkcje z domyslnymi wartosciami\n";
    cout<<dodaj()<<"\n";
    cout<<odejmij()<<"\n";
    cout<<pomnoz()<<"\n";
    cout<<podziel()<<"\n";
    cout<<"Podziel z zerem\n";
    cout<<podziel(1,0)<<"\n";

    return 0;
}
