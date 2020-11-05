#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numberOfDay;
	cout << "Type number for a day e.g. 1, 2, 3, ...\n";
	cin >> numberOfDay;
	if (numberOfDay == 1)
		cout << "Monday";
	else if (numberOfDay == 2)
		cout << "Tuesday";
	else if (numberOfDay == 3)
		cout << "Wednesday";
	else if (numberOfDay == 4)
		cout << "Thursday";
	else if (numberOfDay == 5)
		cout << "Friday";		
	else if (numberOfDay == 6)
		cout << "Saturday";
	else if (numberOfDay == 7)
		cout << "Sunday;";
	else
		cout << "Wrong number or wrong character";
	return 0;
}
