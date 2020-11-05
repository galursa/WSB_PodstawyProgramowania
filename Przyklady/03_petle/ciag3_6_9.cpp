#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	//generujemy ciag 3, 6, 9, 12, ...
	int i=1;
	//dopoki warunek jest spelniony wykonuj
	while(i<=5)
	{
		//i*3  3, 6, 9, 12
		cout<<i*3<<" ";
		i++;
	}	
	return 0;
}
