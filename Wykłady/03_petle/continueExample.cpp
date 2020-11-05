#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	int count=0;
	for(int i=0;i<=100;i++)
	{
		if ((i%3==0 )&&(i%7==0))
		{
			count++;
			cout << "Number: " << i << "\n";
			continue;
		}
		cout << "Iteration: " << i << "\n";
	}
	cout << "There is " << count << " numbers divided by 3 and 7 \n";
	return 0;
}
