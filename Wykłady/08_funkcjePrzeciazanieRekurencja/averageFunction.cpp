#include <iostream>
using namespace std;

double average(double num1 = 1.0, double num2 = 1.0)
{
	return (num1+num2)/2;
}

int main(int argc, char** argv) {
	cout << average() << "\n";
	cout << average(2.0) << "\n";
	cout << average(2.0,4.0) << "\n";
	return 0;
}

