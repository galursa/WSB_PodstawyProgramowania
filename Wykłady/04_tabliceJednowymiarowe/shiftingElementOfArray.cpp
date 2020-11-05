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
		for (int i=0; i<size; i++)
	{
		cout << arrayOne[i] << " ";
	}
	cout << "\n";
	int temp = arrayOne[0];
	
	for (int i=0; i<size-1; i++)
	{
		arrayOne[i] = arrayOne[i+1];
	}
	arrayOne[size-1] = temp;
	//printing
	for (int i=0; i<size; i++)
	{
		cout << arrayOne[i] << " ";
	}	
}
