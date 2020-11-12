#include<iostream>

using namespace std;
/* Pobieramy od u¿ytkownika liczbe
   i sprawdzamy czy jest parzysta */

int main()
{
	cout<<"Podaj prosze liczbe calkowita\n";
	int liczba;
	cin>>liczba;
	if (liczba%2==0)
	{
	  cout<<"Liczba jest parzysta "<<endl;
	} else
	{
		cout<<"Liczba nie jest parzysta\n";
	}
	
	/*operator trójargumentowy
	 (warunek) ? jesli spelniony: jesli nie spelniony
	 */
	
	cout<<((liczba%2==0)?"Liczba jest parzysta ":"Liczba nie jest parzysta\n");
	 
	
	
	return 0;
}


