#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	//declaration of array
	int rows1, columns1, rows2, columns2;
	cout << "Matrix One\n";
	cout << "Give number of rows\n";
	cin >> rows1;
	cout << "Give number of columns\n";
	cin >> columns1;
	cout << "Matrix Two\n";
	cout << "Give number of rows\n";
	cin >> rows2;
	cout << "Give number of columns\n";
	cin >> columns2;
	int matrixOne[rows1][columns1];
	int matrixTwo[rows2][columns2];
	srand(time(NULL));
	if (columns1==rows2)
	{
		//initialization
		for (int i=0; i<rows1; i++)
			for (int j=0; j<columns1; j++)
				matrixOne[i][j]= rand()%10;
		for (int i=0; i<rows2; i++)
			for (int j=0; j<columns2; j++)
				matrixTwo[i][j]= rand()%2;
		//printing matrices
		for (int i=0; i<rows1; i++)
		{
			for (int j=0; j<columns1; j++)
			{
				cout << matrixOne[i][j] << " ";
			}
			cout << "\n";
		}		
		cout << "\n";
		for (int i=0; i<rows2; i++)
		{
			for (int j=0; j<columns2; j++)
			{
				cout << matrixTwo[i][j] << " ";
			}
			cout << "\n";
		}			
		cout << "\n";
		//result matrix
		int resultMatrix[rows1][columns2];
		for (int i=0; i<rows1; i++)
			for (int j=0; j<columns2; j++)
				resultMatrix[i][j]=0;
		//multiplication
		for (int i=0; i<rows1; i++)
			for (int j=0; j<columns2; j++)
			{
				int temp=0;
				for (int k=0; k<columns1; k++)
					temp += matrixOne[i][k]*matrixTwo[k][j];
				resultMatrix[i][j]=temp;
				
			}
		//printing on the console
		for (int i=0; i<rows1; i++)
		{
			for (int j=0; j<columns2; j++)
			{
				cout << resultMatrix[i][j] << " ";
			}
			cout << "\n";
		}
}
	else
	{
		cout << "The number of columns in first matrix does not match the number of rows in second matrix\n";
	}
	return 0;
}

