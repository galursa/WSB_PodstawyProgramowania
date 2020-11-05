#include <iostream>
/* zapisujemy w tablicy liczby podzielne przez 6 */
using namespace std;
int main(int argc, char** argv) {
	int r=10;
	int przez6[r];
	//robimy petle i ka¿d¹ kolejn¹ liczbê mno¿ymy przez 6
	for(int i=0;i<r;i++)
	{
		przez6[i]=(i+1)*6;
		cout<<przez6[i]<<" ";
	}
	cout<<"\n";
	//sposob drugi
	int przez6_2[r];
	for(int i=6; i<r*6+6; i=i+6)
	{
		przez6_2[(i-6)/6]=i;
		cout<<przez6_2[(i-6)/6]<<" ";
	}
	return 0;
}
