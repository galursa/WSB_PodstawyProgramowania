#include <iostream>
#include <iomanip>

using namespace std;

class Square
{
	public:
		double a;

		
		double area()
		{
			return a*a;
		}
};

int main(int argc, char** argv) {
	Square S1;
	Square S2;
	S1.a = 2;
	S2.a = 3;
	cout << "Area of the square: " << S1.a << " * " << S1.a <<" = " <<S1.area() << "\n";
	cout << "Area of the square: " << S2.a << " * " << S2.a <<" = " <<S2.area() << "\n";
	return 0;
}
