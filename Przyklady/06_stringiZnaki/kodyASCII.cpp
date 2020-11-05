#include <iostream>
#include <iomanip>
/*
Wygeneruj tablicê znaków ASCII
*/
using namespace std;
int main(int argc, char** argv) {
	for(int i=0; i<255; i++)
	{
		cout<<setw(6)<<(char)i<<":"<<i;
		if(i%10==0)
			cout<<"\n";
	}
	return 0;
}
