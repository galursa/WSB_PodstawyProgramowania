#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	fstream ourFile;
	ourFile.open("temp.txt", ios::out);
	ourFile << "In other words";
	cout << "Stream status: " << "\n";
	cout << " eof(): " << ourFile.eof() << "\n";
	cout << " fail(): " << ourFile.fail() << "\n";
	cout << " bad(): " << ourFile.bad() << "\n";
	cout << " good(): " << ourFile.good() << "\n";
   	ourFile.close();
	
	ourFile.open("temp.txt", ios::in);
	string sentence;
	ourFile >> sentence;
	cout << sentence;
	cout << "Stream status: " << "\n";
	cout << " eof(): " << ourFile.eof() << "\n";
	cout << " fail(): " << ourFile.fail() << "\n";
	cout << " bad(): " << ourFile.bad() << "\n";
	cout << " good(): " << ourFile.good() << "\n";
	ourFile.close();
	
	ourFile >> sentence;
	cout << "Stream status: " << "\n";
	cout << " eof(): " << ourFile.eof() << "\n";
	cout << " fail(): " << ourFile.fail() << "\n";
	cout << " bad(): " << ourFile.bad() << "\n";
	cout << " good(): " << ourFile.good() << "\n";
	ourFile.close();
	
	return 0;
}


