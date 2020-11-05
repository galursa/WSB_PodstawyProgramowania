#include <iostream>
#include <ctime>
#include <cstdlib>
/*Napisz program, który generuje macierz symetryczn¹ sk³adaj¹c¹ siê z liczb od 0 do 2. 
Pobierz rozmiar od u¿ytkownika.*/
using namespace std;
int main(int argc, char** argv) {
	cout<<"Generuje macierz symetryczna. Podaj rozmiar";
	int rozmiar;
	cin>>rozmiar;
	int macierz[rozmiar][rozmiar];
	//generujemy macierz symetryczna
	for(int i=0; i<rozmiar; i++)
	{
		for(int j=i;j<rozmiar;j++)
		{
			macierz[i][j]=rand()%3;
			if(j!=i)
				macierz[j][i]=macierz[i][j];
		}
	}
	//wyswietlami na konsoli
	for(int i=0; i<rozmiar; i++)
	{
		for(int j=0;j<rozmiar;j++)
			cout<<macierz[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
