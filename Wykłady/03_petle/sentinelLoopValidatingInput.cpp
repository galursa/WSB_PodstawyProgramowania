#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char letter;
	cout << "Type lowe case letter: ";
	cin >> letter;
	while (letter <'a' || letter >'z')
	{
		cout << "You have typed the wrong letter, please retype the letter: ";
		cin >> letter;
	}
	cout << "Very good. Your letter is: " << letter;
	return 0;
}
