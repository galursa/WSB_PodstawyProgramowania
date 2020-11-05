#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	//declaration of array
	int numberArray[3][3] = 			
	{ {1, 2, 5},
	  {7, 3, 4},
	  {4, 9, 3}
	};
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

