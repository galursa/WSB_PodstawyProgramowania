#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float startAmount = 500.0;
	float targetAmount = 100000.0;
	float rate = 0.02; // 2%
	float sum = startAmount;
	int years = 0;
	while (sum <= targetAmount)	
	{
		sum*=(1+rate);
		years++;
	}
	cout << "Interest rate: " << rate << "\n";
	cout << "Starting amount: " << startAmount << "\n";
	cout << "Target Amount: " << targetAmount << "\n";
	cout << "You need: " << years << " years to have this amount of money\n";
	return 0;
}
