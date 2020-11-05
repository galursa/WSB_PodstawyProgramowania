#include <iostream>
#include <string>
using namespace std;

int size;

void loopSize(int from, int to)
{
	for(int i=from; i<=to;i++)
		cout << i << " ";
	cout << "\n";
}

int main(int argc, char** argv) {
	loopSize(5,20);
	int array[size];
	return 0;
}

