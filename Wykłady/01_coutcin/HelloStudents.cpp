#include <iostream>
#include <string>
/*
	We want to take name from user and print greetings
*/

using namespace std;

int main() {
	int number1;
	float number2;
	cout<<"Write integer value please\n";
	cin>>number1;
	cout<<"Write floating point value please\n";
	cin>>number2;
	cout<<"Multiplication= "<<number1*number2<<"\n";
	cout<<"Division= "<<number1/number2<<"\n";
	cout<<"Modulo division= "<<number1%(int)number2<<"\n";
	number1++; //number1=number1+1;
	number2--; //number2=number2-1;
	cout<<number1<<" "<<number2<<"\n";		
	//number1=number1*2;
	number1*=2; //-= /= %=
	cout<<number1<<"\n";
	return 0;
}


