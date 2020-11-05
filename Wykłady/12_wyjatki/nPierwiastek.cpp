#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float nPierwiastek(float liczba, int stopien)
{
	if (liczba<=0.0)
	{
		string wyjatek = "Nie mozna wykonac funkcji poniewaz podano liczbe mniejsza lub rowna zero. ";
		throw wyjatek;
	}	
	if (stopien<2)
	{
		string wyjatek = "Nie mozna wykonac funkcji poniewaz podano stopien mniejszy od 2";
			throw wyjatek;
	}
	return pow(liczba,1/float(stopien));
}

int main(int argc, char** argv) {
	try{
		cout<<nPierwiastek(4.0,2)<<"\n";
		cout<<nPierwiastek(1.5,3)<<"\n";
		cout<<nPierwiastek(-2.3,3)<<"\n";
	} catch (string w)
	{
		cout<<w<<"\n";	
	}
	try{
		cout<<nPierwiastek(9.0,2)<<"\n";
		cout<<nPierwiastek(3.0,1)<<"\n";
	}catch (string w)
	{
		cout<<w<<"\n";	
	}
	return 0;
}
