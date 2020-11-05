#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	ofstream ourFile;
	ourFile.open("shoppingList.txt");
	ourFile << "Eggs" << setw(2) << 3 << "price: " << setw(6) << 5.23342345 << "\n";
	ourFile << "Milk" << setw(2) << 1 << "price: " << setw(6) << 2.999999 << "\n";
	ourFile.close();
	cout << "The file has been created";
	return 0;
}

