#include <iostream>
#include "Rectangle.h"

using namespace std;


int main(int argc, char** argv) {
	Rectangle R1;
	Rectangle R2(2.0,5.0);
	Rectangle R3(3,4);
	cout << "Area of the rectangle: " << R1.a << " * " << R1.b <<" = " <<R1.area() << "\n";
	cout << "Area of the rectangle: " << R2.a << " * " << R2.b <<" = " <<R2.area() << "\n";
	cout << "Area of the rectangle: " << R3.a << " * " << R3.b <<" = " <<R3.area() << "\n";
	return 0;
}
