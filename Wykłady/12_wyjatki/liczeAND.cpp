#include <iostream>
#include <string>
using namespace std;

int liczeAND(int p, int q)
{
	if ((p!=0&&p!=1)||(q!=0&&q!=1))
	{
		throw -10;
	}
	
	return p and q;
}

int main(int argc, char** argv) {
	try{
		cout<<liczeAND(0,1)<<"\n";
		cout<<liczeAND(1,1)<<"\n";
		cout<<liczeAND(0,0)<<"\n";
		cout<<liczeAND(1,0)<<"\n";
		cout<<liczeAND(2,1)<<"\n";
	} catch (int w)
	{
		cout<<w<<"\n";	
	}
	return 0;
}
