#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	cout<<"Sprawdzam czy zdanie jest palindromowe.\n";
	cout<<"Napisz zdanie\n";
	string zdanie,sprawdz="";
	getline(cin,zdanie,'\n');
	//Madam I'm Adam
	int dl=zdanie.length();
	for(int i=0;i<dl;i++)
	{
		if((zdanie[i]!=' ')&&(zdanie[i]!='\'')&&(zdanie[i]!='.')&&(zdanie[i]!=','))
		{
			sprawdz+=tolower(zdanie[i]);
		}
	}
	dl=sprawdz.length()-1;
	int sr=dl/2;
	int i;
	for(i=0; i<=sr;i++)
	{
		if(sprawdz[i]!=sprawdz[dl-i])
		{
			cout<<"nie jest palindromem"; 
			break;
		}
	}
	if ((i-1)==sr)
		cout<<"Jest palindromem";	
	return 0;
}
