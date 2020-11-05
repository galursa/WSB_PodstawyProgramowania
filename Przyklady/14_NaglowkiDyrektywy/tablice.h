#include<ctime>
#include<cstdlib>
#include <iostream>

void losujDoTab(int tab[], int rozmiar)
{
	srand(time(NULL));
	for(int i=0; i<rozmiar; i++)
	{
		tab[i]=rand()%100;
	}
}

void wypiszTab(int tab[], int rozmiar)
{
		for(int i=0; i<rozmiar; i++)
			std::cout<<tab[i]<<" ";
		std::cout<<"\n";
}

int minTab(int tab[], int rozmiar)
{
	int min=tab[0];
	for(int i=1; i<rozmiar; i++)
	{
		if(min >tab[i])
			min=tab[i];
	}
	return min;
}

int maxTab(int tab[], int rozmiar)
{
	int max=tab[0];
	for(int i=1; i<rozmiar; i++)
	{
		if(max <tab[i])
			max=tab[i];
	}
	return max;
}

float sredniaTab(int tab[], int rozmiar)
{
	int suma=0;
	for(int i=0; i<rozmiar; i++)
	{
		suma+=tab[i];
	}
	return suma/rozmiar;
}

void pobierzLiczby(int tab[], int rozmiar)
{
	std::cout<<"Podaj liczbe do tablicy: \n";
	for(int i=0; i<rozmiar; i++)
	{
		std::cout<<i+1<<": ";
		std::cin>>tab[i];
	}
	std::cout<<"Koniec\n";
}

