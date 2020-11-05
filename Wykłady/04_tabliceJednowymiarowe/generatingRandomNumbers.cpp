#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int range = 10;
	int numberOne = rand() %range;
	int numberTwo = rand() %range;
	cout<< "Number one: "<<numberOne<<"\n";
	cout<< "Number two: "<<numberTwo<<"\n";
	return 0;
}
