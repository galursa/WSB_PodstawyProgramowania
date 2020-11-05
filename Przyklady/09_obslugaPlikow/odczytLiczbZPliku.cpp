#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	ifstream file("liczby.txt");
	string zdanie1;         //zmienna do odczytu pierwszej linijki z pliku
	int ile;                // zmienna do odczytu drugiej linijki, gdzie jest liczba z iloœci¹ elementów
	getline(file,zdanie1,'\n'); //odczytujemy pierwsz¹ linijkê z pliku do znaku przejœcia do nowej linii
	file>>ile;              //odczytujemy drug¹ linijkê pliku czyli iloœæ elementów
	int tab[ile];           //deklaracja tablicy
	cout<<zdanie1<<"\n"; 
	for(int i=0;i<ile;i++)
	{
		file>>tab[i];       //odczytujemy liczby do pierwszej spacji i zapisujemy od razu w tablicy.
		cout<<tab[i]<<" ";  //wyœwietlamy elementy tablicy
	}
	file.close();           //zamkniêcie pliku.
	return 0;
}
