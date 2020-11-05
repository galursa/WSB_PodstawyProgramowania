#include <iostream>
#include <ctime>
#include <cstdlib>
/* funkcja która losuje liczby z podanego zakresu
	potrzebujemy zakres <start, stop>
	chcemy dostaæ w wyniku liczbe */
int losujZakres(int start, int stop)
{
	return rand()%(stop-start+1)+start;
}
void losujTab(int tab[], int rozmiar)
{
		for(int i=0; i<rozmiar;i++)
		{
			tab[i]=rand()%100;
			std::cout<<tab[i]<<" ";
	}
}
int main(int argc, char** argv) {
	srand(time(NULL));
	for(int i=0; i<10;i++)
	{
		std::cout<<losujZakres(5,10)<<" "; //wylosowano: 1 
	}
	std::cout<<"\n"<<losujZakres(100,200);
	int tab[10];
	losujTab(tab,10);
	return 0;
}
