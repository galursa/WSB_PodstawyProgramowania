#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	cout << "Some mathematical constants";
	cout << "Pi = "<<  M_PI << "\n";
	cout << "e = " << M_E << "\n";
	float x = M_PI;
	cout << "Sin(Pi) = " << sin(x) << "\n";
	cout << "Cos(Pi) = " << cos(x) << "\n";
	cout << "e^1 = " << exp(1) << " = " << M_E << "\n";
	cout << "log e = ln e = " << log(M_E) << "\n";
	cout << "3^4 = " << pow(3,4) << "\n";
	cout << "round(Pi) = " << round(M_PI) << "\n";
	cout << "ceil(Pi) = " << ceil(M_PI) << "\n";
	cout << "floor(Pi) = " << floor(M_PI) << "\n";
	return 0;
}
