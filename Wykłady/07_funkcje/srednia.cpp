#include <iostream>

using namespace std;

float srednia(float a, float b, float c)
{
	return (a+b+c)/3;
}

int main(int argc, char** argv) {
	cout<<"Licze srednia.\n";	
	cout<<"\nSrednia = "<<srednia(2,2,1);
	return 0;
}
