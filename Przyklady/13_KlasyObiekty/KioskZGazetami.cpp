#include <iostream>
#include <iomanip>
using namespace std;

/*
Gazeta
--
+tytul: string
+wydawnictwo: string
+cenaOkladkowa: double
+numer: string
+czestotliwoscWydawania: string
+moznaPrenumerowac: bool
+iloscStron: int
+jezyk: string
--
+obliczVat(): double
+wyswietlInfo():void
+drukujKwit(): void
...

*/

class Gazeta
{
public:
    string tytul;
    string wydawnictwo;
    double cenaOkladkowa;
    string numer;
    string czestotliwoscWydawania;
    bool moznaPrenumerowac;
    int iloscStron;
    string jezyk;
    Gazeta(string tytulPar,string wydawnictwoPar, double cenaOkladkowaPar, string numerPar,string czestotliwoscWydawaniaPar, bool moznaPrenumerowacPar, int iloscStronPar, string jezykPar)
    {
        tytul = tytulPar;
        wydawnictwo = wydawnictwoPar;
        cenaOkladkowa = cenaOkladkowaPar;
        numer = numerPar;
        czestotliwoscWydawania = czestotliwoscWydawaniaPar;
        moznaPrenumerowac = moznaPrenumerowacPar;
        iloscStron = iloscStronPar;
        jezyk = jezykPar;
    }
    double obliczVat(){
        return 0.08 * cenaOkladkowa;
    }
    void wyswietlInfo()
    {
        cout<< tytul<<"\n";
        cout<< wydawnictwo<<"\n";
        cout<< "Numer: "<<numer<<"\n";
        cout<< "Cena: "<<cenaOkladkowa<<"\n";
        cout<< czestotliwoscWydawania<<"\n";
        cout<< "Jezyk: "<<jezyk<<"\n";
        cout<< "Zawiera: "<<iloscStron<<" stron\n";
        if(moznaPrenumerowac)
        {
            cout<<"Mozna prenumerowac\n";
        }else{
            cout<<"Nie podlega prenumeracie\n";
        }

    }
    void drukujKwit()
    {
        cout<<"Paragon fiskalny:\n";
        cout<<tytul << "koszt: "<<cenaOkladkowa<<"\n";
        cout<<"w tym Vat 8% "<<setprecision(3)<<obliczVat()<<"\n";
        cout<<"Razem do zaplaty: "<<setprecision(4)<<cenaOkladkowa<<"\n";
    }
};


int main()
{
    Gazeta gazeta1("Wiadomosci informatyczne", "Uniersytet WSB Merito",16.99, "Styczen 2025 nr 1", "miesiecznik", false, 40, "polski");
    gazeta1.wyswietlInfo();
    cout<<"\n";
    gazeta1.drukujKwit();
    cout<<"\n";
    cout<<"Vat: "<<setprecision(3)<<gazeta1.obliczVat()<<"\n";
    Gazeta gazeta2("Cyfrowa Era", "AI Press", 9.99, "Grudzien 2024 nr 12", "Kwartalnik", true, 20, "angielski");
    gazeta2.wyswietlInfo();
    cout<<"\n";
    gazeta2.drukujKwit();
    cout<<"\n";
    cout<<"Vat: "<<setprecision(3)<<gazeta2.obliczVat()<<"\n";
    return 0;
}
