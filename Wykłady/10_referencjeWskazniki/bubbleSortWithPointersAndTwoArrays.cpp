#include <iostream>
#include <iomanip>

using namespace std;
int* bubbleSort(int* array, const int size)
{
	int* resultArray = new int[size];
	for(int i=0; i<size; i++)
		resultArray[i] = array[i];
	for(int i=0;i<size-1;i++)
	{
		for(int j=1; j<size; j++)
		{
			if (resultArray[j-1]>resultArray[j])
			{
				int temp = resultArray[j];
				resultArray[j] = resultArray[j-1];
				resultArray[j-1] = temp;
			}
		}
	}
	return resultArray;
}
void printArray(const int *array, const int size)
{
	for(int i=0; i<size; i++)
		cout << setw(3) << array[i];
	cout << "\n"; 
}
int main(int argc, char** argv) {
	int numbers[5]={6, 2, 4, 3, 1};
	int* numbersSorted = bubbleSort(numbers,5);
	printArray(numbers,5);
	printArray(numbersSorted,5);
	return 0;
}
