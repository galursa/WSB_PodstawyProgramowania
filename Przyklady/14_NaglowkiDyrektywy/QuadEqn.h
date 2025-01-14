#include <cmath>
// chcemy napisac naglowek ktory wykonuje obliczenia dla
// rownania kwadratowego
// a*x^2+b*x+c = 0
// delta = b^2-4*a*c
// pierwiastki - potrzebujemy takiej funkcji
// x0 = -b/(2*a) gdy delta = 0
// x1 = (-b-sqrt(delta))/(2*a) gdy delta>0
// x2 = (-b+sqrt(delta))/(2*a)
double delta(double a, double b, double c)
{
    return b*b-4*a*c;
}

double jedenPierwiastek(double a, double b)
{
    return -b/(2*a);
}

double pierwiastekPierwszy(double a, double b, double c)
{
    return (-b-sqrt(delta(a,b,c)))/(2*a);
}

double pierwiastekDrugi(double a, double b, double c)
{
    return (-b+sqrt(delta(a,b,c)))/(2*a);
}

void pierwiastki(double a, double b, double c)
{
    double d = delta(a,b,c);
    if (d<0)
    {
        std::cout<<"Brak pierwiastkow\n";
    }else if (d==0)
    {
        std::cout<<"Rownanie ma jeden pierwiastek x0 = "<<jedenPierwiastek(a,b)<<" \n";
    }else if (d>0)
    {
        std::cout<<"Rownanie ma dwa pierwiastki\n";
        std::cout<<"x1 = "<<pierwiastekPierwszy(a,b,c)<<", \n";
        std::cout<<"x2 = "<<pierwiastekDrugi(a,b,c)<<". \n";
    }
}
