#include <iostream>
#include <stdexcept>
using namespace std;

float jedenPrzezX(float x)
{
	if(x==0)
	{
		throw domain_error("Dzielenie przez zero");
	}
	return 1/x;
}

int main(int argc, char** argv) {
	try{
		try{
			cout<<jedenPrzezX(1)<<"\n";
			cout<<jedenPrzezX(2)<<"\n";
			cout<<jedenPrzezX(3)<<"\n";
			cout<<jedenPrzezX(0)<<"\n";
		}catch(exception &b)
		{
			cout<<"Wystapil nieokreslony blad";
		}
	} catch (domain_error & b)
	{
		cout<<"Blad: "<<b.what()<<"\n";	
	}
	return 0;
}
