#include <iostream>
#include <string>
/* Pobieramy od u¿ytkownika liczbê i sprawdzamy czy jest dodatnia */

using namespace std;

int main() {
	int liczba; 
	cout<<"Prosze podac liczbe \n";
	cin>>liczba; 
	string przykladowaZmienna;
	cout<<(liczba>0?"Liczba dodatnia\n":"Liczba ujemna lub rowna zero\n");
	if (liczba>0)
		przykladowaZmienna = "Liczba dodatnia\n";
	else
	    przykladowaZmienna ="Liczba ujemna lub rowna zero\n";
	    
	cout<<przykladowaZmienna;
	
	return 0;
}
