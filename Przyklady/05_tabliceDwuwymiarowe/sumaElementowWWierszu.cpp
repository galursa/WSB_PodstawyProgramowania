#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
/*generujemy losowo tablicê dwuwymiarow¹
 i liczymy sumê wartoœci w wierszu */
using namespace std; 
int main(int argc, char** argv) {
	int tab[5][5];
	int suma;
	for(int i=0; i<5 ; i++)
	{
		suma=0;
		for(int j=0; j<5; j++)
		{
			tab[i][j]=rand()%10;
			suma=suma+tab[i][j];
			cout<<setw(3)<<tab[i][j];
		}
		cout<<" | "<<suma;
		cout<<"\n";
	}
	

	return 0;
}
