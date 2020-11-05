#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	ofstream ourFile;
	ourFile.open("ourName.txt");
	ourFile << "Hello " << "\n";
	ourFile << "Today is a great day\n";
	ourFile.close();
	cout << "File has been written";
	return 0;
}
