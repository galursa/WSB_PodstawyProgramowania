#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

using namespace std;

int main(int argc, char** argv) {
	int a=10;
	int b=5;
	swap(a,b);
	cout<<"a = "<<a<<", "<<"b = "<<b<<".\n";
	cout<<"Wartosc a = "<<a<<"\n";
	cout<<"Adres a = "<<&a<<"\n";
	int * pA = &a;
	cout<<"Adres: "<< pA <<"\n";
	cout<<"Dzialanie "<< ++(*pA) <<"\n";
	cout<<"A "<<a<<"\n";
	cout<<"Adres: "<< pA <<"\n";
	cout<<"Dzialanie "<< pA++ <<"\n";
	cout<<"Adres: "<< pA <<"\n";
	cout<<"pA "<<*pA<<"\n";
	cout<<"A "<<a<<"\n";
	return 0;
}
