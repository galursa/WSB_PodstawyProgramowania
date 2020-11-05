#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int liczby[] = {5, 4, 3, 2, 1};
	for(int i=0; i<5; i++)
		cout<<"Nr: "<<i<<" = "<<liczby[i]<<"\n";
	cout<<"Sama nazwa tablicy ="<<liczby<<"\n";
	cout<<"Pierwszy element w tablicy = "<<*liczby<<"\n";
	cout<<"Pierwszy element w tablicy = "<<(*liczby)+1<<"\n";
	cout<<"Drugi element tablicy = "<<*(liczby+1)<<"\n";
	cout<<"Ostatni element tablicy = "<<*(liczby+4)<<"\n";
	return 0;
}
