#include <iostream>
using namespace std;
int main() {
	cout<<"Prosz� poda� walut� w PLN\n";
	float zloty, dolary, euro;
	cin>>zloty;
	cout<<"Prosz� wybra� d-dolary czy e-euro.";
	char waluta;
	cin>>waluta;
	if(waluta=='d')
	{
		dolary = zloty*0.25;
		cout<<"\nZa kwot�: "<<zloty<<" z� mo�esz mie�: ";
		cout<<dolary<< " $ ";				
	}else if(waluta=='e')
	{
		euro = zloty/4.38;
		cout<<"\nZa kwot�: "<<zloty<<" z� mo�esz mie�: ";
		cout<<euro<< " euro ";	
	} else
	{
		cout<<"Podano nieprawid�ow� walut�\n";	
	}
	return 0;
}
