#include <iostream>

/* operator trójargumentowy
	sprawdzamy czy liczba jest parzysta
	*/
using namespace std;
int main(int argc, char** argv) {
	cout<<"Podaj liczbê";
	int liczba;
	cin>>liczba;
	// (warunek)?jeœli spe³niony: jesli niespe³niony
	cout<<(liczba%2==0?"parzysta":"nieparzysta");
	return 0;
}
