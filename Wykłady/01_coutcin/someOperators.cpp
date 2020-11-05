#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int result, numberOne=3, numberTwo=4;
	cout << ++numberOne << " " << numberOne << "\n";
	cout << numberTwo-- << " " << numberTwo << "\n";
	result = numberOne % numberTwo;
	cout << "(" << numberOne << "%" << numberTwo << ")=" << result << "\n";
	result = numberOne + numberTwo;
	cout << "(" << numberOne << "+" << numberTwo << ")=" << result << "\n";
	result = numberOne * numberTwo;
	cout << "(" << numberOne << "*" << numberTwo << ")=" << result << "\n";
	return 0;
}
