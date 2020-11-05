#include <iostream>


double minimum(double num1, double num2)
{
	if (num1<num2)
		return num1;
	else 
		return num2;		
}

int minimum(int num1, int num2)
{
	if (num1<num2)
		return num1;
	else 
		return num2;		
}

char minimum(char num1, char num2)
{
	if (num1<num2)
		return num1;
	else 
		return num2;		
}

int minimum(int num1, int num2, int num3)
{
	return minimum(minimum(num1,num2),num3);
}


using namespace std;

int main(int argc, char** argv) {
	cout << minimum(2,3) << "\n";
	cout << minimum(5.45,3.34) << "\n";
	cout << minimum('b','a') << "\n";
	cout << minimum(5,3,6) << "\n";
	return 0;
}
