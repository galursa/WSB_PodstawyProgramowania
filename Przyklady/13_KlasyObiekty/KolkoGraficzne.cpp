#include <iostream>

using namespace std;
/*
Kolko
--
kolor
wielkosc
kolorObwodki
--
wyswietlInfo()
skaluj(double oIle)
*/

class Kolko
{
public:
   string kolor;
   double wielkosc;
   string kolorObwodki;
   void wyswietlInfo()
   {
        cout<<"Obiekt - Kolko\n";
        cout<<"Kolor: "<<kolor<<"\n";
        cout<<"Kolor obrysu: "<<kolorObwodki<<"\n";
        cout<<"Wielkosc: "<<wielkosc<<"\n";
   }
    void skaluj(double oIle)
    {
        wielkosc = oIle * wielkosc;
    }
};

int main()
{
    Kolko kCzerwone;
    Kolko kZielone;
    kCzerwone.kolor = "Czerwony";
    kCzerwone.wielkosc = 10;
    kCzerwone.kolorObwodki = "Czarny";
    kCzerwone.wyswietlInfo();
    cout<<"\n";
    kCzerwone.skaluj(2);
    kCzerwone.wyswietlInfo();
    cout<<"\n";
    kZielone.kolor = "Zielony";
    kZielone.wielkosc = 5.5;
    kZielone.kolorObwodki = "Czerwony";
    kZielone.wyswietlInfo() ;
    cout<<"\n";
    kZielone.skaluj(0.5);
    kZielone.wyswietlInfo();
    return 0;
}
