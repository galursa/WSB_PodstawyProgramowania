#include <iostream>
using namespace std;
class Kwadrat
{
	public: 
		float bok;
	float pole()
	{
		return bok*bok;
	}
};
int main(int argc, char** argv) {
	Kwadrat k1;
	k1.bok=3.0;
	cout<<k1.bok<<"\n";		
	cout<<k1.pole()<<"\n";
	Kwadrat k2,k3;
	k2.bok=2;
	k3.bok=4;
	cout<<k2.bok<<"\n";		
	cout<<k2.pole()<<"\n";
	cout<<k3.bok<<"\n";		
	cout<<k3.pole()<<"\n";
	return 0;
}
