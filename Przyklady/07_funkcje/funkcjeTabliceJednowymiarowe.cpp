#include <iostream>
#include<ctime>
#include<cstdlib>

void losujTablice(int tab[], int wielkosc)
{
	for(int i=0; i<wielkosc; i++)
		tab[i] = rand()%100;	
}
void losujTabliceZakres(int tab[], int wielkosc, int start, int stop)
{
	for(int i=0; i<wielkosc; i++)
		tab[i] = rand()%(stop-start+1)+start;
		//rand()%(stop-start)+start   0-(stop-1) <5,10>  10-5 = 5+5	
}
void wypiszTablice(int tab[], int wielkosc)
{
		for(int i=0; i<wielkosc; i++)
			std::cout<<tab[i]<<" ";
		std::cout<<"\n";
}
using namespace std;
int main(int argc, char** argv) {	
	srand(time(NULL));
	cout<<"Podaj rozmiar tablicy";
	int rozmiar;
	cin>>rozmiar;
	int tab[rozmiar];
	losujTablice(tab,rozmiar);
	wypiszTablice(tab,rozmiar);
	losujTabliceZakres(tab,rozmiar, 5,10);
	wypiszTablice(tab,rozmiar);
	return 0;
}
