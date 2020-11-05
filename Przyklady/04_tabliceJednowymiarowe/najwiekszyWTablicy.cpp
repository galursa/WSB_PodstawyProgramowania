#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
//szukamy najwiêkszej liczby w tablicy
using namespace std;
int main(int argc, char** argv) {
	int r = 10;
	int liczby[r];
	srand(time(NULL));
	for(int i=0; i<r; i++)
	{
		liczby[i] = rand()%100;
		cout<<setw(3)<<liczby[i];
	}
	int maks=liczby[0];
	for(int i=1; i<r; i++)
	{
		if(maks<liczby[i])
			maks=liczby[i];
	}
	cout<<"\n Maksimum: "<<maks;
	return 0;
}
