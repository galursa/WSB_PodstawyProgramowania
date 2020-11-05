#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int a = 3, b = 4;
	int *pA = &a;
	int *pB = &b;
	cout << "The value of a = " << a << "\n";
	cout << "The value of b = " << b << "\n";
	cout << "The address of a = " << pA << "\n";
	cout << "The address of b = " << pB << "\n";
	pA = pB;
	cout << "After assignment pA = pB" << "\n";
	cout << "The value of a = " << a << "\n";
	cout << "The value of b = " << b << "\n";
	cout << "The address of a = " << pA << "\n";
	cout << "The address of b = " << pB << "\n";
	return 0;
}
