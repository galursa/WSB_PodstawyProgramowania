#include <iostream>
#include "slowa.h"

using namespace std;

int main()
{
    Wyrazy paraWyrazow("komputer","klawiatura");
    paraWyrazow.porownajPierwszeLitery();
    paraWyrazow.porownajOstatnieLitery();
    cout<<"Czy tak samo d�ugie: "<<paraWyrazow.czyDlugosciTakieSame()<<"\n";
    return 0;
}
