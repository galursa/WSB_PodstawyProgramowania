#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	ifstream file("liczby.txt");
	string zdanie1;         //zmienna do odczytu pierwszej linijki z pliku
	int ile;                // zmienna do odczytu drugiej linijki, gdzie jest liczba z ilo�ci� element�w
	getline(file,zdanie1,'\n'); //odczytujemy pierwsz� linijk� z pliku do znaku przej�cia do nowej linii
	file>>ile;              //odczytujemy drug� linijk� pliku czyli ilo�� element�w
	int tab[ile];           //deklaracja tablicy
	cout<<zdanie1<<"\n"; 
	for(int i=0;i<ile;i++)
	{
		file>>tab[i];       //odczytujemy liczby do pierwszej spacji i zapisujemy od razu w tablicy.
		cout<<tab[i]<<" ";  //wy�wietlamy elementy tablicy
	}
	file.close();           //zamkni�cie pliku.
	return 0;
}
