#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
//suma elementów w kolumnach
using namespace std;
int main(int argc, char** argv) {
	int tab[10][10];
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			tab[i][j]= rand()%100;
			cout<<setw(5)<<tab[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";
	int suma;
	for(int i=0; i<10; i++)
	{
		suma=0;
		for(int j=0; j<10; j++)
		{
			suma+=tab[j][i]; //suma=suma+tab[j][i]
		}
		cout<<setw(5)<<suma;
	}
	return 0;
}
