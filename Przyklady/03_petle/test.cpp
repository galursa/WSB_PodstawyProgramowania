#include <iostream>

using namespace std;
/*wyœwietliæ wzór:
O   i=1
OO i=2
OOO i=3
OOOO i=4
OOOOO i=5
 */
int main(int argc, char** argv) {
	int zakres=5;
	/*
	cout<<"Podaj zakres";
	cin>>zakres; */
	for(int i=1;i<=zakres;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<"O";
		cout<<"\n";	
	}
	
	return 0;
}











