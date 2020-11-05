#include <iostream>

using namespace std;
/*chcemy wypisaæ liczby parzyste */
int main(int argc, char** argv) {
	int i=2,zakres;
	cout<<"Podaj zakres";
	cin>>zakres;
	// wykonuj dopóki warunek jest spe³niony
	do{
		cout<<i<<" ";
		i+=2; //i=i+2	
	}while(i<=zakres);
	
	return 0;
}











