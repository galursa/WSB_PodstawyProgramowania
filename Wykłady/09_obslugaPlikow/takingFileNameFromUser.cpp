#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string fileName;
	cout << "Type the name of file\n";
	cin >> fileName;
	ifstream ourFile(fileName.c_str());
	if (ourFile.fail())
	{
	 	cout << fileName << " does not exist" << "\n";
	 	return 0;
	} else
		cout << fileName << " exists" << "\n";		
	
	return 0;
}

