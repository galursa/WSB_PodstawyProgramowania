#include <iostream>
#include <string>

enum dniTygodnia {
	poniedzialek = 1,
	wtorek = 2,
	sroda = 3,
	czwartek = 4,
	piatek = 5,
	sobota = 6,
	niedziela =7
};

using namespace std;

int main()
{
	dniTygodnia pierwszy = poniedzialek;
	dniTygodnia ostatni = niedziela;
	cout<<"Pierwszy dzien tygodnia: "<<pierwszy<<"\n";
	cout<<"Ostatni dzien tygodnia: "<<ostatni<<"\n";
	return 0;
}
