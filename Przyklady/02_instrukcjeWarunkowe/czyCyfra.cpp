#include <iostream>

/* sprawdzamy czy podany znak jest cyfra
*/
using namespace std;
int main(int argc, char** argv) {
	char znak;
	cout<<"Podaj jakis znak\n";
	cin>>znak;
	//[48,57] 
	if((znak>=48)&&(znak<=57))
		cout<<"To jest liczba: "<<znak;
	else
		cout<<"To nie jest liczba";
	
	return 0;
}
