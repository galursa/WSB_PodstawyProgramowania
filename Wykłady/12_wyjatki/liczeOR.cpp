#include <iostream>
#include <stdexcept>
using namespace std;

int liczeOR(int p, int q)
{
	if ((p!=0&&p!=1)||(q!=0&&q!=1))
	{
		throw invalid_argument("Podano nieprawidlowy argument");
	}
	
	return p or q;
}

int main(int argc, char** argv) {
	try{
		cout<<liczeOR(0,1)<<"\n";
		cout<<liczeOR(1,1)<<"\n";
		cout<<liczeOR(0,0)<<"\n";
		cout<<liczeOR(1,0)<<"\n";
		cout<<liczeOR(2,1)<<"\n";
	} catch (invalid_argument & b)
	{
		cout<<"Blad: "<<b.what()<<"\n";	
	}
	return 0;
}
