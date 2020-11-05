#include <iostream>
//generujemy macierz jednostkow¹
void jednostkowa(int rozmiar)
{
	for(int i=0; i<rozmiar; i++)
	{
		for(int j=0; j<rozmiar; j++)
		{
			if(i==j)
				std::cout<<1<<" ";
			else
				std::cout<<0<<" ";
		}
		std::cout <<"\n";
	}
}
int main(int argc, char** argv) {
	jednostkowa(4);
	std::cout<<"\n\n";
	jednostkowa(6);
	std::cout<<"\n\n";
	jednostkowa(10);
	return 0;
}
