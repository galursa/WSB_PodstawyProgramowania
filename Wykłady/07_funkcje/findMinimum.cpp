#include <iostream>


double minimum(double num1, double num2)
{
	if (num1<num2)
		return num1;
	else 
		return num2;
		
}

using namespace std;

int main(int argc, char** argv) {
	double n1, n2;
	cout << "Type number one \n";
	cin >> n1;
	cout << "Type number two \n";
	cin >> n2;
	minimum(n1,n2); //we don't see the result
	cout << minimum(n1,n2); //we see now the result
	return 0;
}
