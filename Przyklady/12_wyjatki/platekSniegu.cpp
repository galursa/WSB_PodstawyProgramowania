#include <iostream>
#include <exception>
#include <cmath>
using namespace std;
struct MojWyjatek : public exception {
   const char * what () const throw () {
      return "Nieprawidlowa liczba";
   }
};

void platekSniegu(int wielkosc)
{
	if(wielkosc<3)
		throw MojWyjatek();
	int polowa=wielkosc/2;
	for(int i=0; i<wielkosc; i++)
	{

		if (i==polowa)
		{
			for(int j=0; j<wielkosc; j++)
			{
				if((j==0)||(j==wielkosc-1))
					cout<<"+";
				else
					cout<<"*";	
			}	
		}else if ((i==polowa-1) ||(i==polowa+1))
		{
			for(int j=0; j<polowa-1; j++)
			{
				cout<<" ";
			}	
			cout<<"+*+";
		}
		else{
			for(int j=0; j<polowa; j++)
			{
				cout<<" ";
			}
			if((i==0)||(i==wielkosc-1))
				cout<<"+";
			else
				cout<<"*";
		}
	cout<<"\n";
	}
}

int main() {
	try{
		platekSniegu(5);
		cout<<"\n";
		platekSniegu(7);
		platekSniegu(2);
	}catch(MojWyjatek & blad)
	{
		cout<<"Blad: "<< blad.what()<<"\n";
	}
}
