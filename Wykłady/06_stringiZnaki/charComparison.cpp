#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char c1, c2;
	c1 = 'a';
	c2 = 'z';
	cout << "Smaller value is :\n";
	if (c1<c2)
		cout << c1 << " : "<< (int)c1 << "\n";
	else
		cout << c2 << " : "<< (int)c2 << "\n";
	c1 = 'a';
	c2 = 'A';
	cout << "Smaller value is :\n";
	if (c1<c2)
		cout << c1 << " : "<< (int)c1 << "\n";
	else
		cout << c2 << " : "<< (int)c2 << "\n";
	c1 = '1';
	c2 = '9';
	cout << "Smaller value is :\n";
	if (c1<c2)
		cout << c1 << " : "<< (int)c1 << "\n";
	else
		cout << c2 << " : "<< (int)c2 << "\n";		
	return 0;
}
