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
	// summation
	int sum = 0;
	for (int i=0; i<size; i++)
	{
		sum+=arrayOne[i];
	}	
	//printing
	for (int i=0; i<size; i++)
	{
		cout << arrayOne[i] << " ";
	}	
	cout << "\nSum of array elements = " << sum;	
}
