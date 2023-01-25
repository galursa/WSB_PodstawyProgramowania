#include <iostream>

using namespace std;
/*
PrzyboryRysunkowe
--
+nazwa: string
+producent: string
+rodzaj: string
+kodProduktu: int
+cena: float
+iloscWOpakowaniu: int
--
PrzyboryRysunkowe( lista wszystkich w³asnoœci)
generujEtykiete(): void
cenaBruttoNetto(): void
rabat(float wielkosc): float
cenaPoRabacie(): float
*/

class PrzyboryRysunkowe
{
public:
    string nazwa;
    string producent;
    string rodzaj;
    int kodProduktu;
    float cena;
    int iloscWOpakowaniu;
    PrzyboryRysunkowe(string nazwaK, string producentK, string rodzajK, int kodProduktuK, float cenaK, int iloscWOpakowaniuK)
    {
        nazwa = nazwaK;
        producent = producentK;
        rodzaj = rodzajK;
        kodProduktu = kodProduktuK;
        cena = cenaK;
        iloscWOpakowaniu = iloscWOpakowaniuK;
    }

    void generujEtykiete()
    {
        cout<<"Rodzaj: "<<rodzaj<<"\n";
        cout<<"Nazwa: "<<nazwa<<"\n";
        cout<<"Producent: "<<producent<<"\n";
        cout<<"W opakowaniu jest: "<<iloscWOpakowaniu<<" sztuk."<<"\n";
        cout<<"Cena: "<<cena<<"\n";
        cout<<"Kod Produktu: "<<kodProduktu<<"\n";
    }
    void cenaBruttoNetto()
    {
        cout<<"Cena netto: "<<0.78*cena <<"\n";
        cout<<"Vat: "<<0.22*cena <<"\n";
        cout<<"Cena brutto: "<<cena<<"\n";
    }

    float rabat(float wielkosc)
    {
        return wielkosc*cena;
    }
    float cenaPoRabacie(float wielkosc)
    {
        return cena-rabat(wielkosc);
    }

};

int main()
{
    PrzyboryRysunkowe kredki("Rysuj wszystko", "Kolorowe Kredki", "Olowkowe", 12345, 29.99, 12);
    PrzyboryRysunkowe wegiel("Natura", "Lesniczowka", "Wegiel Prasowany", 1234, 15.5, 6);
    kredki.generujEtykiete();
    wegiel.generujEtykiete();
    cout<<"\n";
    kredki.cenaBruttoNetto();
    wegiel.cenaBruttoNetto();
    cout<<"\n";
    cout<<"Kredki - cena wyjsciowa: "<<kredki.cena<<", po rabacie: "<<kredki.cenaPoRabacie(0.2)<<"\n";
    cout<<"Wegiel - Cena wyjsciowa: "<<wegiel.cena<<", po rabacie: "<<wegiel.cenaPoRabacie(0.2)<<"\n";

    return 0;
}
