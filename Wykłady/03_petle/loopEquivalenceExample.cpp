#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i=0;
	cout << "While loop: \n";
	while(i<10)
	{
		cout << i << " ";
		i++;
	}
	cout <<"\n";
	
	cout << "For loop: \n";
	i=0;
	for(i;i<10;i++)
	{
		cout << i << " ";
	}
	cout <<"\n";
	
	cout << "do-while loop: \n";
	i=0;
	do
	{
		cout << i << " "; 
		i++;
	}while(i<10);
	
	return 0;
}
