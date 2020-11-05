#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int number;
	cout << "Type a number\n";
	cin >> number;
	cout << ((number>50) ? "Your number is greater than 50" : "Your number is less than or equal to 50");
	return 0;
}
