#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	ifstream ourFile("f1.txt");
	if (ourFile.fail())
	{
	 cout << "File does not exist" << "\n";
	 return 0;
	}
	double sum = 0;
	double number;
	while (ourFile >> number) 
	{
		cout << number << " "; 
	}
	
	return 0;
}
