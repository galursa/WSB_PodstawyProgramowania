#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	double number = 98.7654321;
	double number2 = 10.00;
	cout << "Displays number with setprecision: \n";
	cout << setprecision(3) << number << "\n";
	cout << "Displays number with fixed function: \n";
	cout << fixed << number << "\n";
	cout << "Displays number: "<< number2 << " with decimal points \n";
	cout << showpoint << number2 << "\n";
	cout << "Displays numbers  with  setw() \n";
	cout << setw(8) << number2 << setw(15) << number << "\n";
	cout << left;
	cout << setw(8) << number2 << setw(15) << number << "\n";
	cout << right;
	cout << setw(8) << number2 << setw(15) << number << "\n";
	return 0;
}

