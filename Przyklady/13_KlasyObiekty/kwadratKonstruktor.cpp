#include <iostream>
using namespace std;
class Kwadrat
{
	public: 
		float bok;
	Kwadrat()
	{
		bok=1;
	}
	Kwadrat(float b)
	{
		bok=b;
	}
	float pole()
	{
		return bok*bok;
	}
};
int main(int argc, char** argv) {
	cout<<"Obiekt, gdzie uzywamy konstruktora, ktory nadaje wartosci domyslne.\n";
	Kwadrat k1;
	k1.bok=3.0;
	cout<<k1.bok<<"\n";		
	cout<<k1.pole()<<"\n";
	cout<<"Obiekt, gdzie uzywamy konstruktora z parametrem.\n";
	Kwadrat k2(2);
	cout<<k2.bok<<"\n";		
	cout<<k2.pole()<<"\n";
	cout<<"Obiekt, gdzie uzywamy konstruktora, ktory nadaje wartosci domyslne.\n";
	Kwadrat k3;
	cout<<k3.bok<<"\n";		
	cout<<k3.pole()<<"\n";
	return 0;
}
