#include <iostream>

using namespace std;

struct rok{
	int liczba;
};

int main(int argc, char** argv) {
	rok lata[10];
	for(int i=0;i<10;i++)
		lata[i].liczba=2000+i;
	for(int i=0;i<10;i++)
		cout<<"Rok: "<<lata[i].liczba<<"\n";
	return 0;
}
