#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	int sum=0, i=0;
	while(true)
	{
		sum=sum+i;
		i++;
		if(sum>100)
			break;
	}
	cout << "Sum of numbers from 1 to " << i-1 <<" = " << sum << "\n";
	return 0;
}
