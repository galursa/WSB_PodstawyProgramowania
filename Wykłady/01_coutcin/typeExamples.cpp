#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	bool guess = "true";
	cout << "Size = " << sizeof(guess) << ". Value = " << guess << ".\n";
	char oneLetter = 'a';
	cout << "Size = " << sizeof(oneLetter) << ". Value = " << oneLetter << ".\n";
	int intNumber = 123;
	cout << "Size = " << sizeof(intNumber) << ". Value = " << intNumber << ".\n";
	float floatNumber = 435.14;
	cout << "Size = " << sizeof(floatNumber) << ". Value = " << floatNumber << ".\n";
	double pi = 3.14159265358979323;
	cout << "Size = " << sizeof(pi) << ". Value = " << pi << ".\n";	
	wchar_t wideCharacter = 'a';
	cout << "Size = " << sizeof(wideCharacter) << ". Value = " << wideCharacter << ".\n";	
	return 0;
}
