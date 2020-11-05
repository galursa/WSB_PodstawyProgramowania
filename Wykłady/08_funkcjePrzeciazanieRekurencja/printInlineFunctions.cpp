#include <iostream>
#include <string>
using namespace std;

inline void print(string word)
{
	cout << word << "\n";
}

int main(int argc, char** argv) {
	print("Hello, Hello");
	print("Have a nice day");
	print("How are you?");
	return 0;
}

