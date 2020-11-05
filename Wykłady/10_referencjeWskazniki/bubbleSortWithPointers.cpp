#include <iostream>
#include <iomanip>

using namespace std;

int* bubbleSort(int* array, const int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=1; j<size; j++)
		{
			if (array[j-1]>array[j])
			{
				int temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}
		}
	}
}
void printArray(const int *array, const int size)
{
	for(int i=0; i<size; i++)
		cout << setw(3) << array[i];
	cout << "\n"; 
}

int main(int argc, char** argv) {
	int numbers[5]={6, 2, 4, 3, 1};
	printArray(numbers,5);
	bubbleSort(numbers,5);
	printArray(numbers,5);
	return 0;
}
