#include <iostream>

/* operator tr�jargumentowy
	sprawdzamy czy liczba jest parzysta
	*/
using namespace std;
int main(int argc, char** argv) {
	cout<<"Podaj liczb�";
	int liczba;
	cin>>liczba;
	// (warunek)?je�li spe�niony: jesli niespe�niony
	cout<<(liczba%2==0?"parzysta":"nieparzysta");
	return 0;
}
