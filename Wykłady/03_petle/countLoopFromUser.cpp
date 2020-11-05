#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int listSize;
	int countNumbers=0;
	int value;
	cout << "How many number do you want to have?\n";
	cin >> listSize;
	while (countNumbers<listSize)
	{
		cout << "It. No: " << countNumbers+1 << "Type value: ";
		cin >> value;
		if (value%2==0)
			cout << "Even.\n";
		else
			cout << "Odd.\n";
		countNumbers++;
	}
	return 0;
}
