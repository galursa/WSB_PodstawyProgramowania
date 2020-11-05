#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int size;
	cout << "Type the size of identity matrix: ";
	cin >> size;
	for (int i=0;i<size;i++)
	{
		for (int j=0;j<size; j++)
		{
			if (i==j)
				cout << 1 << " ";	
			else 
				cout << 0 << " ";
		}	
		cout << "\n";
	}	

	return 0;
}
