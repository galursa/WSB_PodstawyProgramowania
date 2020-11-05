#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	fstream ourFile;
	ourFile.open("names.txt", ios::out);
	ourFile << "Polish Names are" << "\n";
	ourFile << "Adam" << " " << "Agnieszka" << " " << "Antonina" << " ";
   	ourFile.close();

	ourFile.open("names.txt",ios::out | ios::app);	
	ourFile << "Barbara" << " " << "Bartosz" << " " << "Bogumil" << " ";
	ourFile.close();

	string name;
	ourFile.open("names.txt", ios::in);
	while (ourFile >> name) 
	{
		cout << name << " "; 
	}
	ourFile.close();
	return 0;
}
