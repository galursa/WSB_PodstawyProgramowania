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
	//shuffling
	int index;
	for (int i=0; i<size; i++)
	{
		index = i + rand()% (size-i);
		//swaping;
		int temp = arrayOne[i];
		arrayOne[i] = arrayOne[index];
		arrayOne[index] = temp;
	}
	//printing
	for (int i=0; i<size; i++)
	{
		cout << arrayOne[i] << " ";
	}	
}
