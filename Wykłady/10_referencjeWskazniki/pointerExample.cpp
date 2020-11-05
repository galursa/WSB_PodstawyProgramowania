#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(int argc, char** argv) {
	srand(time(NULL));
	int number = rand()%100;
	int* pNumber = &number;
	cout << "The value of number: " << number << "\n";
	cout << "The address of number: " << &number << "\n";
	cout << "The address of number: " << pNumber << "\n";
	cout << "The value of number: " << *pNumber << "\n";
	return 0;
}
