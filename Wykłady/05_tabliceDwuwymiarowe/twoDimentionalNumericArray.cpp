#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	//declaration of array
	int numberArray[3][3];
	//putting numbers into array
	numberArray[0][0] = 1;
	numberArray[0][1] = 2;
	numberArray[0][2] = 5;
	numberArray[1][0] = 7;
	numberArray[1][1] = 3;
	numberArray[1][2] = 4;
	numberArray[2][0] = 9;
	numberArray[2][1] = 3;
	numberArray[2][2] = 7;
	//printing on the console
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << numberArray[i][j] << " ";
		}
		cout << "\n";
	}	

	return 0;
}

