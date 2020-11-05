#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char** argv) {
	ifstream ourFile("dm.txt");
	if (ourFile.fail())
	{
		cout << "File does not exist" << "\n";
		return 0;
	}
   	string verse;

   	while (!ourFile.eof()) 
	{
		getline(ourFile, verse, '#');
		cout << verse << "\n";
  	}
	ourFile.close();
	return 0;
}

