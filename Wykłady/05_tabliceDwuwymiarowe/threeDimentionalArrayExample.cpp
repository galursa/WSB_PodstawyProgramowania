#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	//declaration of array
	//bigArray[numberOfLayers][NumberOfRows][NumberOfColumns]
	int numberOfLayers = 3;
	int numberOfRows = 2;
	int numberOfColumns = 3;
	int bigArray[numberOfLayers][numberOfRows][numberOfColumns] = {
		{{3,4,3},{1,2,5}},
		{{5,4,2},{7,3,4}},
		{{7,5,4},{9,3,7}}
	};
	//printing
	for(int i=0; i<numberOfLayers; i++)
	{
		for(int j=0; j<numberOfRows; j++)
		{
			for(int k=0; k<numberOfColumns; k++)
			{
				cout <<bigArray[i][j][k] << " ";
			}
			cout << "\n";
		}
		cout <<"\n";
	}
	return 0;
}

