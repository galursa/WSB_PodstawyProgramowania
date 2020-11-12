#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	cout<<"Podaj liczbê\n";
	int liczba;
	cin>>liczba;
	switch (liczba)
	{
		case 1:
			cout<<"Jeden";
			break;
		case 2:
			cout<<"Dwa";
			break;
		case 3:
			cout<<"Trzy";
			break;
		default:
			cout<<"Nie znam liczby";
	};
	
	return 0;
}
