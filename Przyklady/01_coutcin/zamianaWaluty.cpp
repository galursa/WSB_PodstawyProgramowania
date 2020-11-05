#include <iostream>
using namespace std;
int main() {
	cout<<"Proszê podaæ walutê w PLN\n";
	float zloty, dolary, euro;
	cin>>zloty;
	cout<<"Proszê wybraæ d-dolary czy e-euro.";
	char waluta;
	cin>>waluta;
	if(waluta=='d')
	{
		dolary = zloty*0.25;
		cout<<"\nZa kwotê: "<<zloty<<" z³ mo¿esz mieæ: ";
		cout<<dolary<< " $ ";				
	}else if(waluta=='e')
	{
		euro = zloty/4.38;
		cout<<"\nZa kwotê: "<<zloty<<" z³ mo¿esz mieæ: ";
		cout<<euro<< " euro ";	
	} else
	{
		cout<<"Podano nieprawid³ow¹ walutê\n";	
	}
	return 0;
}
