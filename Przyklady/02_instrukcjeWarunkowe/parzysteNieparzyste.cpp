#include <iostream>

/* operator trójargumentowy
	sprawdzamy czy liczba jest parzysta
	*/
using namespace std;
int main(int argc, char** argv) {
	cout<<"Podaj liczbę";
	int liczba;
	cin>>liczba;
	// (warunek)?jeśli spełniony: jesli niespełniony
	cout<<(liczba%2==0?"parzysta":"nieparzysta");
	return 0;
}
