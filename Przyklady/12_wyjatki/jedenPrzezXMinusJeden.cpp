#include <iostream>
#include <stdexcept>
using namespace std;

//Obliczanie wartoœci funkcji: 1/(x-1). Funkcja nie mo¿e przyjmowaæ wartoœci 1.

float jedenPrzezMinusJeden(float x)
{
	if(x==1)
		throw domain_error("X=1, nie mozna wykonac obliczen.");
		
	return 1/(x-1);
}


int main(int argc, char** argv) {
	try{
		cout<<jedenPrzezMinusJeden(4)<<"\n";
		cout<<jedenPrzezMinusJeden(-4)<<"\n";
		cout<<jedenPrzezMinusJeden(1)<<"\n";
	} catch (domain_error & b)
	{
		cout<<"Blad: "<<b.what()<<"\n";	
	}
	return 0;
}
