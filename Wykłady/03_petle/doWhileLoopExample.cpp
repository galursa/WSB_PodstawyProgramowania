#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i=1, range;
	cout << "I am printing numbers from 1 to given range\n";
	cout << "Type range for numbers \n";
	cin >> range;
	do 
	{
		cout << i << "\n";
		i++;
	}while (i<=range);
	return 0;
}
