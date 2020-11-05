#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a1, a2, a3;
	cout << "Give number a1: ";
	cin >> a1;
	cout << "Give number a2: ";
	cin >> a2;
	cout << "Give number a3: ";
	cin >> a3;
	if (a1<=a2)
	{
		if (a2<=a3)
			cout << a1 << " " << a2 << " "<< a3 << "\n";
		else
		{
			if (a1<=a3)
				cout << a1 << " " << a3 << " "<< a2 << "\n";
			else
				cout << a3 << " " << a1 << " "<< a2 << "\n";
		}
	}
	else
	{
		if (a1<=a3)
			cout << a2 << " " << a1 << " "<< a3 << "\n";
		else
		{
			if (a1<=a3)
				cout << a2 << " " << a3 << " "<< a1 << "\n";
			else
				cout << a3 << " " << a2 << " "<< a1 << "\n";	
		}
	}	
	return 0;
}
