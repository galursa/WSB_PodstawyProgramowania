#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	//declaration of array
	int rows, columns;
	cout << "Give number of rows\n";
	cin >> rows;
	cout << "Give number of columns\n";
	cin >> columns;
	int numberArray[rows][columns];
	srand(time(NULL));
	//generating random values
	for (int i=0; i<rows; i++)
		for (int j=0; j<columns; j++)
			numberArray[i][j]= rand()%100;
	//printing on the console
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<columns; j++)
		{
			cout << numberArray[i][j] << " ";
		}
		cout << "\n";
	}	

	return 0;
}

