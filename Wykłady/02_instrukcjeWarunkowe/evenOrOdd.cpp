#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	cout << "Give a number\n";
	int number;
	cin >> number;
	if ((number%2)==0)
		cout << "Your number " << number << " is even\n";
	else
		cout << "Your number " << number << " is odd\n";
	return 0;
}
