#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	cout << "I am generating numbers.\nType range please\n";
	int range;
	cin >> range;
	for (int i=0 ;i<range; i++)
	{
		cout << i << " ";
	}
	cout << "\n";
	cout << "I am generating even numbers\n";
	for (int i=0; i<range; i+=2)
	{
		cout << i << " ";
	}
	cout << "\n";
	system("PAUSE");
	return 0;
}
