#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
		string s1 = "Hello";
		string s2 = "Hell";
		cout << (s1 == s2) << "\n"; 
		cout << (s1 != s2) << "\n"; 
		cout << (s1 > s2) << "\n"; 
		cout << (s1 >= s2) << "\n"; 
		cout << (s1 < s2) << "\n"; 
		cout << (s1 <= s2) << "\n";
	return 0;
}

