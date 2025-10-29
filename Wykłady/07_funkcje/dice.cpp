#include <iostream>
using namespace std;

void dice()
{
	static int x = 1;
	x*=2;
	cout << " x = " << 	x << "\n";
}

int main(int argc, char** argv) {
	dice();
	dice();
	dice();
	dice();
	return 0;
}

