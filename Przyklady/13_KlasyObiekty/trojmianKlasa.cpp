#include <iostream>
#include <cmath>
using namespace std;
//Napisz klasê, która liczy pierwiastki trójmianu kwadratowego (f(x) = a x^2 + b x + c, delta, x1 i x2)
class Trojmian
{
	public:
		float a;
		float b;
		float c;
		float delta;
		float liczDelta()
		{
			return b*b-4*a*c;
		}
		void pierwiastki()
		{
			delta = liczDelta();
			if(delta<0)
				cout<<"Brak pierwiastkow\n";
			else if(delta==0)
			{
				float x0;
				x0=-(b/(2*a));
				cout<<"Jest jeden pierwiastek: "<<x0<<"\n";
			} else
			{
				int pierwiastek = sqrt(delta);
				float x1, x2;
				x1=(-b-pierwiastek)/(2*a);
				x2=(-b+pierwiastek)/(2*a);
				cout<<"Dwa pierwiastki: x1 = "<<x1<<", x2 = "<<x2<<"\n";
			}
		}
};
int main(int argc, char** argv) {
	Trojmian pierwszy;
	pierwszy.b=2;
	pierwszy.a=1;
	pierwszy.c=1;
	pierwszy.pierwiastki();
	Trojmian drugi;
	drugi.b=2;
	drugi.a=4;
	drugi.c=3;
	drugi.pierwiastki();
	Trojmian trzeci;
	trzeci.b=3;
	trzeci.a=1;
	trzeci.b=1;
	trzeci.pierwiastki();
	return 0;
}
