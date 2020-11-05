#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int nameSize = 10;
	int surnameSize = 30;
	char name[nameSize];
	char surname[surnameSize];
	cout << "Enter your name please: ";
	cin >> name;
	cout << "Surname: ";
	cin >> surname;
	name[0] = toupper(name[0]);
	surname[0] = toupper(surname[0]);
	cout << "Your name is: " << name << " surname: " << surname;
	return 0;
}
