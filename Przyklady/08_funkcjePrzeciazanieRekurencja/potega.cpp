#include <iostream>
#include <cmath>
/*SREDNIA - piszemy kilka funkcji */
using namespace std;

double power(double x, unsigned int n){
	if (n == 0)
		return 1.0;
	//else
		return x*power(x,n-1);
}

double powerIt(double x, unsigned int n)
{
	if (n == 0)
		return 1.0;
	double power=1.0;
	for(int i=1; i<=n ;i++)
		power*=x;
	return power;
}

int main(int argc, char** argv) {
	cout<<power(2,3)<<"\n";
	cout<<powerIt(2,3)<<"\n";
	return 0;
}


