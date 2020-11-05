#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int numbers[5]={5, 10, 15, 20, 25};
	cout << "The starting address of numbers array is: " << numbers << "\n";
	cout << "First element of numbers array is: " << *numbers << "\n";
	cout << "Second element of numbers array is: " << *(numbers+1) << "\n";
	cout << "Fird element of numbers array is: " << *(numbers+2) << "\n";
	return 0;
}
