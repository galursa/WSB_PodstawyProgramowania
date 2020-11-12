#include <iostream>

/* pobieramy od u¿ytkownika liczbe i sprawdzimy jej podzielnosc 
przez liczby od 2 do 3 */

using namespace std;

int main() {
	int liczba; //przykladNotacjiCamelCase
	cout<<"Prosze podac liczbe \n";
	cin>>liczba; // zwykle dzielenie /, dzielenie modulo % - reszta 
	if (liczba%2==0) 
	{
		cout<<"Liczba dzieli sie bez reszty przez 2 \n";	
	} else {
		cout<<"Mamy reszte, gdy dzielimy na 2: "<<liczba%2<<"\n";
	}
	if (liczba%3) 
	{
		cout<<"Liczba dzieli sie bez reszty przez 3\n";	
	} else {
		cout<<"Mamy reszte, gdy dzielimy na 3: "<<liczba%3<<"\n";
	}
	
	return 0;
}
