#include <iostream>
#include <iomanip>

using namespace std;

void printArray(const int *array, const int size)
{
	for(int i=0; i<size; i++)
		cout << setw(4) << array[i];
	cout << "\n"; 
}

int main(int argc, char** argv) {
	int numbers[5]={5, 10, 15, 20, 25};
	printArray(numbers,5);
	return 0;
}
