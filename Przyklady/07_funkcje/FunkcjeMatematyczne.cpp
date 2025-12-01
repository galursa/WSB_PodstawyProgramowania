#include <iostream>

using namespace std;
/*Definiujemy funkcje
f(x)=x^2
f1(x)=3x+2
*/

double f(double x)
{
    return x*x;
}

float f1(float x)
{
    return 3*x+2;
}


int main()
{
    double liczba1;
    float liczba2;
    cout<<"Licze funkcje f(x)=x^2. Podaj x: ";
    cin >>liczba1;
    cout<<"f(x)="<<f(liczba1)<<"\n";
    cout<<"Licze funkcje f1(x)=3x+2. Podaj x: ";
    cin >> liczba2;
    cout<<"f1(x)="<<f1(liczba2)<<"\n";
    return 0;
}
