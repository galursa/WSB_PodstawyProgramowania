#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	int size = 10;
	int arrayOne[size];
	//generating
	srand (time(NULL));	
	for (int i=0; i<size; i++)
	{
		arrayOne[i] = rand() % 100;
	}
	int max = arrayOne[0];
	int indexOfMax = 0;
	for (int i=1; i<size; i++)
	{
		if (arrayOne[i]>max)
		{
			max = arrayOne[i];
			indexOfMax = i;	
		}		
	}	
	//printing
	for (int i=0; i<size; i++)
	{
		cout << arrayOne[i] << " ";
	}	
	cout << "\nMaximum = " << max << ", index = " <<indexOfMax;	
}
