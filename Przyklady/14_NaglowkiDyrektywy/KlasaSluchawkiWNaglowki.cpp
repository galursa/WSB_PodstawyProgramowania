#include <iostream>
#include "sluchawki.h"

using namespace std;

int main()
{
    Sluchawki abc123;
    abc123.cenaBazowa = 200;
    abc123.ANC = "tak dwustopniowy";
    abc123.cenaZ30dni = 189;
    abc123.czyMaMikrofon = true;
    abc123.czyPrzewodowe = "Bezprzewodowe";
    abc123.model = "abc123 slyszysz lepiej";
    abc123.modulSterowania = true;
    abc123.nazwa  = "sluchawki slysze wszedzie";
    abc123.pasmoPrzenoszenia = "20 Hz - 20000 Hz";
    abc123.rodzajWtyku = "mini Jack";
    abc123.info();
    cout<<"\n\n";
    abc123.drukujEtykiete();
    cout<<"\n\n";
    cout<<"Vat: "<<abc123.vat(0.07);
    cout<<"\n\n";
    cout<<"Cenaz Vat: "<<abc123.cenaZVAT();
    cout<<"\n\n";
    return 0;
}
