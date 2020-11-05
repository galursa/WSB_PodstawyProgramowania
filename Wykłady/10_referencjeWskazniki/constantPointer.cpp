#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int number = 10;
	int* const pNumber = &number;
	cout << "The value of number = " << number << "\n";
	cout << "The address of a = " << pNumber << "\n";
	*pNumber = 20;
	cout << "After changing \n";
	cout << "The value of number = " << number << "\n";
	cout << "The address of a = " << pNumber << "\n";
	return 0;
}
