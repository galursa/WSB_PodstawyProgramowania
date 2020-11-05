#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	ifstream ourFile("ourName.txt");
	string helloSentence;
	string word1, word2, word3, word4, word5;
	ourFile >> helloSentence;
	cout << helloSentence << "\n";
	ourFile >> word1 >> word2 >> word3 >> word4 >> word5;
	cout << word1 << " " << word2 << " " << word3 << " " << word4 << " " << word5 << "\n";
	ourFile.close();
	return 0;
}
