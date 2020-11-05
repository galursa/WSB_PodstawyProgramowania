#include <iostream>
/*SREDNIA - piszemy kilka funkcji */
float srednia(int a, int b, int ile)
{
	return float(a+b)/ile;
}
float srednia(float a, float b, float c, int ile)
{
	return (a+b)/ile;
}
float srednia(float tab[], int ile)
{
	int suma=0;
	for(int i=0; i<ile; i++)
		suma+=tab[i];
	return suma/ile;
}
using namespace std;
int main(int argc, char** argv) {
	cout<<srednia(2,3,2)<<"\n";
	cout<<srednia(2.5,3.5, 4.5, 3)<<"\n";
	float tab[] = { 0.3, 5.3, 2.1};
	cout<<srednia(tab, 3)<<"\n";
	return 0;
}
