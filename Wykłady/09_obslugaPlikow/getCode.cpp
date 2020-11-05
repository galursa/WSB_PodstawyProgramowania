#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	ifstream ourFile("code.txt");
	if (ourFile.fail())
	{
		cout << "File does not exist" << "\n";
		return 0;
	}
   	char c;
	while (!ourFile.eof()) 
	{
		c = ourFile.get(); 
		if (c!=' ')
			cout << c;
	}
   	
	ourFile.close();
	return 0;
}

