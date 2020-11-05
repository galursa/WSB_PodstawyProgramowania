#include <iostream>
#include <ctime>
#include <cstdlib>

double multiplyDouble(double number1, double number2)
{
	return number1*number2;
}
using namespace std;

int main(int argc, char** argv) {
	cout << multiplyDouble(3.14,3.14) << "\n";
	cout << multiplyDouble(2.12,3.54) << "\n";
	return 0;
}

