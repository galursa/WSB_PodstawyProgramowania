#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// hexadecimal value
	char c = 0XFF40; 
	cout << c << " \n";
	//floating point value
	c = 41.34;
	cout << c << " \n";
	//integer value
	int in = 'Z';
	cout << in << "\n";
	cout << (char)in << "\n";
	//numeric calculations
	for (char i=65; i<70; i++)
		cout << i << "\n";		
	return 0;
}
