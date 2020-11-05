#include <iostream>
#include <ctime>
#include <cstdlib>
const int size = 20;

using namespace std;

int main(int argc, char** argv) {
	int array[size];
	srand(time(NULL));
	for (int i=0; i<size; i++)
	{
		array[i] = rand()%100;
		cout << array[i] << " ";
	}
	return 0;
}
