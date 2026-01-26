#include <iostream>
#include <ctime>
using namespace std;

string liczbyNaSlowa(int liczby)
{
    if((liczby<1)||(liczby>10))
    {
        throw invalid_argument("Liczby spoza zakresu");
    }
    switch(liczby)
    {
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    case 10:
        return "ten";
        break;
    }
}


int main()
{
    int liczba;
    srand(time(NULL));
    try
    {
        for(int i=0; i<10;i++)
        {
            liczba = rand()%11+1;
            cout<<liczbyNaSlowa(liczba)<<"\n";
        }
    }
    catch(invalid_argument &wyjatek)
    {

        cout<<"Wystapil blad: "<<wyjatek.what()<<"\n";
        cout<<"Wykonuje dzialanie jeszcze raz\n";
        liczba = rand()%11+1;
        int licznik;
        while((liczba<1)||(liczba>10))
        {
            liczba = rand()%11+1;
            licznik++;
        }
        cout<<"Po "<<licznik<<" iteracji mamy "<<liczbyNaSlowa(liczba)<<"\n";
    }
    return 0;
}
