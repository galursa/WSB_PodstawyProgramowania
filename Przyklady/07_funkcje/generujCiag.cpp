#include <iostream>
// zad1. chcemy wypisac liczby z podanego zakresu <3,5>
//o zadan¹ wielkoœæ kroku 
// float f(x)
void generujCiag(int start, int stop, int krok)
{
	for(int i=start; i<=stop; i=i+krok)
		std::cout<<i<<" ";	
	std::cout<<"\n";
}
void hello()
{
		std::cout<<"Hello world";
 } 
int main(int argc, char** argv) {
	generujCiag(0,10,3);
	generujCiag(50,100,2);
	generujCiag(5,15,1);
	hello();
	hello();
	return 0;
}
