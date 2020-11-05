#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	int size;
	cout << "Give your size of array: ";
	cin >> size;
	int elements[size];
	srand (time(NULL));
	
	for (int i=0; i<size; i++)
	{
		elements[i] = rand() % 100;
	}
	for (int i=0; i<size; i++)
	{
		cout << "element[" << i << "] = " << elements[i] << "\n";
	}
	
}
