#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*Zadeklaruj tablic� jednowymiarow� i wype�nij j� warto�ciami losowymi. 
 U�ywaj�c wska�nik�w dodajemy warto�� pobran� od u�ytkownika do ka�dego elementu */
 
int main(int argc, char** argv) {
	//generowanie liczb losowych
	int size=20;
	srand(time(NULL));
	int losowe[size];
	cout<<"Tablica wyj�ciowa \n";
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
