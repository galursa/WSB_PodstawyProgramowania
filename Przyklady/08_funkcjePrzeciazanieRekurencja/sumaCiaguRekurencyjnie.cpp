#include <iostream>
#include <cmath>

using namespace std;

/*Napisz funkcjê rekurencyjn¹ obliczaj¹c¹ sumê n elementów ci¹gu:
1,2,3,4,5, ...
dla 3  ma byc: 1+2+3
dla 5  ma byc: 1+2+3+4+5
*/

int sumaCiagu(int n)
{
	if (n==1)
		return 1;
	return n+sumaCiagu(n-1);
}

int main(int argc, char** argv) {
	cout<<sumaCiagu(3)<<"\n";
	cout<<sumaCiagu(5)<<"\n";

	return 0;
}


