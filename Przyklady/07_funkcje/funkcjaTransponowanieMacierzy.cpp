#include <iostream>
#include <cstdlib>
#include <ctime>

void losujMacierz(int *tab, int rozmiar)
{
		
	srand(time(NULL));
	for(int i=0; i<rozmiar;i++)
		for(int j=0; j<rozmiar; j++)
			tab[i*rozmiar+j]=rand()%100;
}

void wyswietMacierz(int *tab, int rozmiar)
{
		for(int i=0; i<rozmiar;i++)
		{
			for(int j=0; j<rozmiar; j++)
			{
				std::cout<<tab[i*rozmiar+j]<<" ";
			}
			std::cout<<"\n";
		}
			std::cout<<"\n";
}

void transponuj(int *tab, int rozmiar)
{
		for(int i=0; i<rozmiar;i++)
		{
			for(int j=i; j<rozmiar; j++)
			{
				int temp=tab[i*rozmiar+j];
				tab[i*rozmiar+j]=tab[j*rozmiar+i];
				tab[j*rozmiar+i]=temp;			
			}
		}	
}

int main(int argc, char** argv) {
	std::cout<<"Podaj rozmiar macierzy:";
	int rozmiar;
	std::cin>>rozmiar;
	int macierz[rozmiar][rozmiar];	
	losujMacierz((int *)macierz,rozmiar);
	wyswietMacierz((int *)macierz,rozmiar);
	transponuj((int *)macierz, rozmiar);
	wyswietMacierz((int *)macierz,rozmiar);
	return 0;
}
