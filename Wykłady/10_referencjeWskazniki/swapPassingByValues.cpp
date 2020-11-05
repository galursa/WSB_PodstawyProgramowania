#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(int argc, char** argv) {
	int n1 = 2, n2 = 5;
	cout << "Actual values: n1 = " << n1 << " and n2 = " << n2 << "\n";
	swap(n1,n2);	cout << "Values after swapping: n1 = " << n1 << " and n2 = " << n2 << "\n";
	return 0;
}

