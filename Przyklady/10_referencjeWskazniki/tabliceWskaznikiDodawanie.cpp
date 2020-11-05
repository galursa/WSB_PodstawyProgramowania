#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*Zadeklaruj tablicê jednowymiarow¹ i wype³nij j¹ wartoœciami losowymi. 
 U¿ywaj¹c wskaŸników dodajemy wartoœæ pobran¹ od u¿ytkownika do ka¿dego elementu */
 
int main(int argc, char** argv) {
	//generowanie liczb losowych
	int size=20;
	srand(time(NULL));
	int losowe[size];
	cout<<"Tablica wyjœciowa \n";
	for(int i=0; i<size; i++)
	{
		*(losowe+i)=rand()%20;
		cout<<*(losowe+i)<<" ";
	}
	cout<<"\n";
	int liczba;
	cout<<" Podaj liczbe \n";
	cin>>liczba;
	for(int i=0; i<size; i++)
	{
		*(losowe+i)+=liczba;
		cout<<*(losowe+i)<<" ";
	}
	cout<<"\n";	
}
