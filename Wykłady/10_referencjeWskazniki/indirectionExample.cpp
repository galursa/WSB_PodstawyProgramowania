#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int number = 5;
	int* pNumber = &number;
	cout << "The value of number: " << number << "\n";
	cout << "The address of number: " << &number << "\n";
	number++;
	cout << "The value of number after first increasing: " << number << "\n";
	cout << "The address of number after first increasing: " << &number << "\n";
	(*pNumber)++;
	cout << "The value of number after second increasing: " << number << "\n";
	cout << "The address of number after second increasing: " << &number << "\n";
	return 0;
}
