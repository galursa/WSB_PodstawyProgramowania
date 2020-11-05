#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string word = "acdwzk";
	cout << "Printing a word\n";
	cout << word;
	cout << "\n";
	cout << "The length of the word is: " << word.length() << "\n";	
	cout << "The size of the word is: " << word.size() << "\n";	
	int index = 1;
	cout << "The letter at index : " << index << " is "<< word.at(index) << "\n";	
	return 0;
}

