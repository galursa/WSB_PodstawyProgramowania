#include <iostream>
#include <string>

using namespace std;

struct student{
	int nrAlbumu;
	string imie;
	string nazwisko;
};

int main(int argc, char** argv) {
	student informatyka;
	student zarzadzanie;
	informatyka.nrAlbumu = 1;
	informatyka.imie = "Jan";
	informatyka.nazwisko = "Studencki";
	zarzadzanie.nrAlbumu = 2;
	zarzadzanie.imie = "Anna";
	zarzadzanie.nazwisko = "Studencka";
	cout<<"Nr albumu: "<<informatyka.nrAlbumu ;
	cout<<", imie: "<<informatyka.imie;
	cout<<", nazwisko "<<informatyka.nazwisko<<"\n";
	cout<<"Nr albumu: "<<zarzadzanie.nrAlbumu ;
	cout<<", imie: "<<zarzadzanie.imie;
	cout<<", nazwisko "<<zarzadzanie.nazwisko<<"\n";
	return 0;
}


