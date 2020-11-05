#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int number, i=0;
	cout << "Enter a number from range 0 to 15 (any other number to quit). ";
	cin >> number;
	while (number >=0 && number <=15)
	{
		if ((number%3)==0)
			cout << "Your number is divided by 3\n";
		else
			cout << "Your number is not divided by 3\n";
			i++;
		cin >> number;
	}
	cout << "It is end of the loop \n";
	cout << "You have typed: " << i << " numbers";
	return 0;
}
