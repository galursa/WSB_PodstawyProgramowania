#include <iostream>
#include <exception>
#include <cmath>
using namespace std;
/* Napisa� funkcj�, kt�ra pobiera od u�ytkownika liczb� a nast�pnie generuje choink� o wysoko�ci liczby.
 Definiujemy w�asne wyj�tki kiedy wielko�� jest wi�ksza od 5 i gdy liczba jest mniejsza od 2 */
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
