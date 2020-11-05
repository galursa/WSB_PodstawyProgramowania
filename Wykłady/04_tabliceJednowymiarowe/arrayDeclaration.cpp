#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numbers[3];
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 5;
	numbers[0]++;
	cout << numbers[0] << "," << numbers[1] << "," << numbers[2] <<"\n"; 
	float points[4];
	points[0] = 3.24;
	points[1] = 2.12;
	char sentence[10], word[5];
	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c'; 
	cout << word[0] << word[1] << word[2];
	return 0;
}
