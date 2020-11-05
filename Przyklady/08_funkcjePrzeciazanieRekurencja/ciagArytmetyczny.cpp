#include <iostream>
/*SREDNIA - piszemy kilka funkcji */
using namespace std;

int ntyWyrazCiagArytm(int a1, int r, int n);
int sumaCiagArytm(int a1, int r, int n);

int main(int argc, char** argv) {
	cout<<ntyWyrazCiagArytm(1,1,5)<<"\n";
	cout<<sumaCiagArytm(1,1,5)<<"\n";
	return 0;
}

int ntyWyrazCiagArytm(int a1, int r, int n)
{
	return a1+(n-1)*r;
}

int sumaCiagArytm(int a1, int r, int n){
	int an=ntyWyrazCiagArytm(a1, r, n);
	return ((a1+an)/2)*n;
}
