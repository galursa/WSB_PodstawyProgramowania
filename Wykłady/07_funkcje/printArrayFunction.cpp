#include <iostream>
#include <ctime>
#include <cstdlib>

void printArray(int array[], int size)
{
	for (int i=0; i<size; i++)
		std::cout << array[i] << " ";
	std::cout << "\n";
}

void randomArray(int array[], int size, int range)
{
	for (int i=0; i<size; i++)
		array[i]=rand()%range;
}

int main(int argc, char** argv) {
	int size = 10;
	int array[size];
	randomArray(array, size, 100);
	printArray(array,size);
	return 0;
}

