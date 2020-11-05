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
	//initialization
	for (int i=0; i<rows; i++)
		for (int j=0; j<columns; j++)
			numberArray[i][j]= rand()%100;
	int sumOfColumns[columns];
	for (int i=0; i<columns; i++)
		sumOfColumns[i]=0;
	//counting sum of columns
	for (int i=0; i<columns; i++)
	{
		int sum = 0;
		for (int j=0; j<rows; j++)
		{
			sum+=numberArray[j][i];
		}
		sumOfColumns[i]=sum;
	}
	//printing on the console
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<columns; j++)
		{
			cout << numberArray[i][j] << " ";
		}
		cout << "\n";
	}
	//printing sum of columns	
	for (int i=0; i<columns; i++)
		cout << sumOfColumns[i] << " ";
	return 0;
}

