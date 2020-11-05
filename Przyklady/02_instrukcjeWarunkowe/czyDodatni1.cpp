#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int liczba;
	cout<<"Proszę podać liczbę\n";
	cin>>liczba;
	if(liczba>0){
		cout<<"Liczba dodatnia";
	}else if(liczba == 0)
	{
	    cout<<"Liczba jest równa 0";
	} else 
	{
	    cout<<"Liczba jest ujemna";
	}
	
	return 0;
}