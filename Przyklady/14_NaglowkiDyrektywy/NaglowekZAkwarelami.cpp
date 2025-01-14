#include <iostream>
#include "KlasaAkwarele.h"

using namespace std;

int main()
{
    FarbyAkwarelowe zielony("Renesans",38,"PG7", 6, "trwale 7","kryjaca");
    zielony.info();
    cout<<"\n";
    cout<<"Vat: "<<zielony.vat();
    cout<<"\n";
    zielony.rachunek();
    return 0;
}
