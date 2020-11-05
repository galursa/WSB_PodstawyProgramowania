#include <iostream>
#include <iomanip>

using namespace std;

enum weekDay {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY,
FRIDAY, SATURDAY};

int main(int argc, char** argv) {
/*	We cant use 
	weekDay today = 2;
*/
	weekDay today = TUESDAY;
	string polishDayNames[7] = {
		"Niedziela",
		"Poniedzialek",
		"Wtorek",
		"Sroda",
		"Czwartek",
		"Piatek",
		"Sobota"
	};
	cout << "Today is " << polishDayNames[int(today)] << "\n";
	return 0;
}
