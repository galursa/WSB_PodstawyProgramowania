#include <iostream>
#include <iomanip>

using namespace std;

union price {
	float inEuro;
	float inZloty;	
} trousers;

int main(int argc, char** argv) {
	trousers.inZloty = 100;
	cout << "Changing field inZloty for trousers variable.\n";
	cout << "In Zlotys: " << trousers.inZloty << "\n";
	cout << "In Euro: " << trousers.inEuro << "\n";
	cout << "\n";
	trousers.inEuro = 500;
	cout << "Changing field inEuro for trousers variable.\n";
	cout << "In Zlotys: " << trousers.inZloty << "\n";
	cout << "In Euro: " << trousers.inEuro << "\n";
	cout << "\n";
	
	return 0;
}
