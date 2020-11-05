#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	int size = 10;
	int arrayOne[size], arrayTwo[size];
	//generating
	srand (time(NULL));	
	for (int i=0; i<size; i++)
	{
		arrayOne[i] = rand() % 100;
	}
	// copying it is not allowed arrayTwo = arrayOne
	for (int i=0; i<size; i++)
	{
		arrayTwo[i] = arrayOne[i];
	}	
	//printing
	for (int i=0; i<size; i++)
	{
		cout << arrayOne[i] << " ";
	}	
	cout << "\n";
	for (int i=0; i<size; i++)
	{
		cout << arrayTwo[i] << " ";
	}		
}
