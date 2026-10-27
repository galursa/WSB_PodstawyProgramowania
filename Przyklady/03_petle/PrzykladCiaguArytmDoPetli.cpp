#include <iostream>

using namespace std;

int main()
{
/*
Arithmetic progression: difference r = 7;
first element a1 = 3
we want to generate 10 numbers
We calculate stop clause by taking initial value of i plus 10*step value

Ciag arytemtyczny: r= 7, a1=3;
Generujemy 10 liczb
Warunek zatrzymania obliczamy do wartosci poczatkowej i dodajemy 10*wielkosc kroku.

*/

    cout<<"We generate 10 numbers for arithmetic progression\n";
    for(int i=3;i<3+10*7 ;i+=7)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

    return 0;
}
