#include <iostream>

double minimum(const double& num1, const double& num2)
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
	cout << minimum(n1,n2); 
	return 0;
}
