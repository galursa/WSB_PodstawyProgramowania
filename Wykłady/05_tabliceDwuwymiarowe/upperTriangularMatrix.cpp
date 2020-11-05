#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//declaration of array
	
	int size;
	cout << "Type the size of the matrix\n";
	cout << "Give number of rows\n";
	cin >> size;
	cout << "Type your numbers\n";
	int matrix[size][size];
	//initialization by 0
	for(int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
		{
			matrix[i][j]=0;
		}
	}
	//generating upper triangular matrix
	for(int i=0; i<size; i++)
	{
		for (int j=i; j<size; j++)
		{
			cin >> matrix[i][j];
		}
	}
	//printing on the console
	for (int i=0; i<size; i++)
	{
	 	for (int j=0; j<size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	system("PAUSE");
	return 0;
}

