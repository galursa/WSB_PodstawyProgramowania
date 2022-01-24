#include <iostream>

using namespace std;

/*
PrzyboryDoMalowania
--
+nazwaFirmy: String
+rodzaj: String
+pojemnosc: int
+ilosc: int
+cena: float
--
+info():void
+podajCene(): float
+vat(float procent): float
*/

class PrzyboryDoMalowania{
public:
    string nazwaFirmy;
    string rodzaj;
    int pojemnosc;
    int ilosc;
    float cena;
    PrzyboryDoMalowania(string naz, string rod, int poj, int ilo, float cen)
    {
        nazwaFirmy = naz;
        rodzaj = rod;
        pojemnosc = poj;
        ilosc = ilo;
        cena = cen;
    }

    void info()
    {
        cout<<"Nazwa firmy: "<<nazwaFirmy<<"\n";
        cout<<"Rodzaj: "<<rodzaj<<"\n";
        cout<<"Pojemnosc : "<<pojemnosc<<"\n";
        cout<<"Ilosc: "<<ilosc<<"\n";
        cout<<"Cena: "<<cena<<"\n";
    }

    float podajCene()
    {
        return cena;
    }

    float vat(float procent){ //zakladamy, ze procent jest dany w formie ulamka czyli 10% to 0,1
        return procent*cena;
    }

};

int main()
{
    PrzyboryDoMalowania olejne("Maluj Jak Chcesz", "olejne", 20, 12, 80.21);
    olejne.info();
    cout<<"\nCena: "<<olejne.podajCene()<<"\n";
    cout<<"Vat: "<<olejne.vat(0.2)<<"\n";
    return 0;
}
