#include <iostream>

/*Napisz program, który pobiera od u¿ytkownika trzy wartoœci i 
sprawdza czy mo¿na zbudowaæ z nich trójk¹ta. */
using namespace std;

int main(int argc, char** argv) {
	cout<<"Prosze podac trzy boki trojkata\n";
	int bok1, bok2, bok3;
	cout<<"Bok 1: ";
	cin>>bok1;
	cout<<"Bok 2: ";
	cin>>bok2;
	cout<<"Bok 3: ";
	cin>>bok3;  
	if(((bok1+bok2)>bok3)&&((bok1+bok3)>bok2)&&((bok3+bok2)>bok1))
	{
		cout<<"Z podanych bokow mozna zbudowaæ trojkat";
	}else{
		cout<<"Z podanych bokow NIE mozna zbudowaæ trojkata";
	}
	
	
	
	
	
	
	return 0;
}
