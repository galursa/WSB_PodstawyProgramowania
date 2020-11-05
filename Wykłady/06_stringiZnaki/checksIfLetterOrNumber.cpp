#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char letter;
	cout << "Type something and I will guess what it is\n";
	cout << "Type \"!\" to end game\n";
	cin >> letter;
	
	while(letter!='!')
	{
		if (isdigit(letter))
			cout << "You have type number\n";
		else if (isalpha(letter))
		{
			cout << "You have type letter ";
			if (islower(letter))
				cout << "which is lowercase\n";
			else if (isupper(letter))
				cout << "which is uppercase\n";
		} else
		{
			cout << "You have character which is neither number nor letter\n";
		}
		cout << "Type your letter: ";
		cin >> letter;
		
	}
	return 0;
}
