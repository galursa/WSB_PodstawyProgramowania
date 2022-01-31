#include <iostream>
#include "kalkulator.h"
using namespace std;

int main()
{
    cout<<"Pierwiastek 2 st. z 9: "<<pierwiastek(9.0,2.0)<<"\n";
    cout<<"e do potegi 2: "<<eDoN(2)<<"\n";
    cout<<"e do potegi 2: "<<eDoN(3.5)<<"\n";
    cout<<"Podloga z 3.567: "<<podloga(3.567)<<"\n";
    cout<<"Sufit z 3.567: "<<sufit(3.567)<<"\n";
    cout<<"Reszta z dzielenia: "<<resztaZDzielenia(5,4)<<"\n";
    return 0;
}
