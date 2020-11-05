#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	cout << "Counting signum function\n";
	cout << "Give a number\n";
	int number;
	cin >> number;
	if (number==0)
		cout << "sgn(" << number << ")=0 \n";
	else if (number>0)
		cout << "sgn(" << number << ")=1 \n";
	else
		cout << "sgn(" << number << ")=-1 \n";
	return 0;
}
