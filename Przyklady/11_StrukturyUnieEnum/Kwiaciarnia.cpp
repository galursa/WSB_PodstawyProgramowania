#include <iostream>

using namespace std;

struct kwiat{
    string gatunek;
    float wysokosc;
    float cena;
    bool czyWDonicznie;
    string kolor;
};

union wysokosc{
    float wysoki;
    float sredni;
    float niski;
};

enum kolory{
    bialy = 9,
    czarny = 8,
    czerwony = 12,
    niebieski = 45,
    zielony = 13
};

int main()
{
   kwiat gwiazda;
   gwiazda.gatunek = "Gwiazda betlejemska";
   gwiazda.wysokosc = 10.0;
   gwiazda.cena = 2.99;
   gwiazda.czyWDonicznie = true;
   gwiazda.kolor = "bialy";
   cout<<"Gatunek: "<<gwiazda.gatunek<<"\n";
   cout<<"Wysokosc: "<<gwiazda.wysokosc<<"\n";
   cout<<"Cena: "<<gwiazda.cena<<"\n";
   cout<<"Kwiat doniczkowy? "<<(gwiazda.czyWDonicznie?"tak":"nie")<<"\n";
   cout<<"Kolor: "<<gwiazda.kolor<<"\n";
   wysokosc wys;
   wys.wysoki = 50.0;
   cout<<"\nWysokosc\n";
   cout<<"Wysoka: "<<wys.wysoki<<"\n";
   cout<<"Sredni: "<<wys.sredni<<"\n";
   cout<<"Niski: "<<wys.niski<<"\n";
   wys.sredni = 30.0;
   cout<<"Wysoka: "<<wys.wysoki<<"\n";
   cout<<"Sredni: "<<wys.sredni<<"\n";
   cout<<"Niski: "<<wys.niski<<"\n";
   wys.niski = 10.0;
   cout<<"Wysoka: "<<wys.wysoki<<"\n";
   cout<<"Sredni: "<<wys.sredni<<"\n";
   cout<<"Niski: "<<wys.niski<<"\n";
   kolory fiolek = bialy;
   cout<<"\nTyp enum\n";
   cout<<"Kolor: "<<fiolek<<"\n";
    return 0;
}
