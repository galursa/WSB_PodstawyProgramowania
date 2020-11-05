#include <iostream>
#include <cmath>
/*SREDNIA - piszemy kilka funkcji */
using namespace std;

float ntyCiagGeom(float a1=1.0, float q=2.0, int n=3)
	{
		return a1*pow(q,n-1);
	}

float sumaCiagGeom(float a1=1.0, float q=2.0, int n=3)
{
	if (q==1)
		return a1*n;
	float an = ntyCiagGeom(a1, q, n);
	return a1*(1-pow(q,n))/(1-q);
}
int main(int argc, char** argv) {
	cout<<ntyCiagGeom(1.0,2.0,3)<<"\n";
	cout<<ntyCiagGeom(1.0)<<"\n";
	cout<<ntyCiagGeom(1.0,2.0)<<"\n";
	cout<<ntyCiagGeom()<<"\n";
	cout<<sumaCiagGeom(1.0,2.0,3)<<"\n";	
	return 0;
}


