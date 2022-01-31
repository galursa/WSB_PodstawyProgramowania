#ifndef KALKULATOR_H_INCLUDED
#define KALKULATOR_H_INCLUDED
#include <math.h>

double pierwiastek(double liczba, double stopien)
{
    return pow(liczba, 1.0/stopien);
}

double eDoN(double n)
{
    return pow(M_E,n);
}

int sufit(double wartosc)
{
    return ceil(wartosc);
}

int podloga(double wartosc)
{
    return floor(wartosc);
}

int resztaZDzielenia(int dzielna, int dzielnik)
{
    return dzielna%dzielnik;
}

#endif // KALKULATOR_H_INCLUDED
