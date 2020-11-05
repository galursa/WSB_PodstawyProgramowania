#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int numbers[5]={5, 10, 15, 20, 25};
	int* pointer = numbers;
	for(int i=0; i<5; i++)
	{
		cout << "Address: " << (numbers +i) << " *(numbers + i)=" << *(numbers + i) <<  " numbers [i]="<<numbers [i];
		cout << " *(pointer+i )="<<*(pointer+i )<< " p[i]=" <<pointer[i] << "\n";		
	}
	return 0;
}
