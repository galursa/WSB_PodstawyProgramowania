#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
	public:
		Rectangle()
		{
			a = 1;
			b = 1;
		}
		
		Rectangle(double newA, double newB)
		{
			a = newA;
			b = newB;
		}
		
		double area()
		{
			return a*b;
		}
		double getA()
		{
			return a;
		}
		double getB()
		{
			return b;
		}
		void setA(double newA)
		{
			a = newA;
		}
		void setB(double newB)
		{
			b = newB;
		}
		
	private:
		double a;
		double b;
};

int main(int argc, char** argv) {
	Rectangle R1;
	Rectangle R2(2.0,5.0);
	Rectangle R3(3,4);
	
	cout << "Area of the rectangle: " <<R1.getA() << " * "<< R1.getB()<< " = " <<R1.area() << "\n";
	cout << "Area of the rectangle: " <<R2.getA() << " * "<< R2.getB()<< " = "<<R2.area() << "\n";
	cout << "Area of the rectangle: " <<R3.getA() << " * "<< R3.getB()<< " = " <<R3.area() << "\n";
	
	R1.setA(3);
	R1.setB(5);
	cout << "After changing values: \n";
	cout << "Area of the rectangle: " <<R1.getA() << " * "<< R1.getB()<< " = " <<R1.area() << "\n";
	
	
	
	return 0;
}
