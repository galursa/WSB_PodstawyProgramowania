#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int size;
	cout << "Give your size of array: ";
	cin >> size;
	int elements[size];
	for (int i=0; i<size; i++)
	{
		cout << "element[" << i << "] = ";
		cin >> elements[i];
	}
	cout << "\nYou have typed numbers: \n";
	for (int i=0; i<size; i++)
	{
		cout << "element[" << i << "] = " << elements[i] << "\n";
	}
	
}
