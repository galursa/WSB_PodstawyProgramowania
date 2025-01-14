#include <iostream>
#include "QuadEqn.h"
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int a,b,c;
    a = rand()%10+1;
    b = rand()%10+1;
    c = rand()%10+1;
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<". \n";
    pierwiastki(a,b,c);
    cout<<"Delta = "<<delta(a,b,c)<<" \n";
    cout<<"Testowanie pozostalych funkcji \n";
    cout<<"Jeden pierwiastek: "<<jedenPierwiastek(1,2)<<" \n";
    cout<<"Pierwszy pierwiastek: "<<pierwiastekPierwszy(1,9,2)<<"\n";
    cout<<"Drugi pierwiastek: "<<pierwiastekDrugi(1,9,2)<<"\n";
    return 0;
}
