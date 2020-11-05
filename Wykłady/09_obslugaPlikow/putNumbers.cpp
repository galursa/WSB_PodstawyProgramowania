#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	ofstream ourFile("numbers.txt");

   	srand(time(NULL));
   	char c;
   	int number=2;
   	while (number!=0) 
	{
		number = rand()%10;
		
		c = number+48;
		cout << c << " ";
		ourFile.put(c); 
		ourFile.put(' ');
	}
   	
	ourFile.close();
	return 0;
}

