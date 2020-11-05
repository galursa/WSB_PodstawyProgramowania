#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

	ifstream binaryFile("names.dat");
	if (binaryFile.fail())
	{
	 cout << "File does not exist" << "\n";
	 return 0;
	}
	string str;
	binaryFile.seekg(4);
	getline(binaryFile, str);
    cout << str << "\n";
 	binaryFile.seekg(-4,ios::end);
 	getline(binaryFile, str);
 	cout << str << "\n";
	binaryFile.close();
	return 0;
}

