#include <iostream>
#include <exception>
#include <cmath>
using namespace std;
/* Napisaæ funkcjê, która pobiera od u¿ytkownika liczbê a nastêpnie generuje choinkê o wysokoœci liczby.
 Definiujemy w³asne wyj¹tki kiedy wielkoœæ jest wiêksza od 5 i gdy liczba jest mniejsza od 2 */
struct MojWyjatek : public exception {
   const char * what () const throw () {
      return "Nieprawidlowa liczba";
   }
};
void choinka(int wysokosc)
{
	if((wysokosc>5)||(wysokosc<2))
		throw MojWyjatek();
	
	for(int i=0;i<wysokosc;i++)
	{
		for(int j=0;j<=wysokosc/2-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i*2;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
int main() {
	try{
		choinka(2);
		choinka(4);
		choinka(5);
		choinka(1);
	}catch (MojWyjatek & blad)
	{
		cout<<"blad: "<<blad.what()<<"\n";
	}
   }
