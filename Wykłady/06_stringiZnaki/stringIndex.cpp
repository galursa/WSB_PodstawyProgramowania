#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string sentence = "Hello world. It is a lovely day";
	cout << sentence;
	cout << "\n";
	cout << "The first letter is: " << sentence.at(0) << "\n";	
	cout << "The first letter is: " << sentence[0] << "\n";	
	return 0;
}

