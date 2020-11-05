#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numberOfDay;
	cout << "Type number for a day e.g. 1, 2, 3, ...\n";
	cin >> numberOfDay;
	switch(numberOfDay)
	{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday;";
			break;
		default:
			cout << "Wrong number or wrong character";
	}
	return 0;
}
