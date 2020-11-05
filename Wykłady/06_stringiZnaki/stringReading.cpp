#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
		string title, author;
		cout << "Type the title of your favourite book\n";
		getline(cin, title, '\n');
		cout << "Type the autors surname\n";
		cin >> author;
		cout << title << "\n" << author;		
	return 0;
}

