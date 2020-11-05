#include <iostream>
#include <iomanip>

using namespace std;

enum weekDay {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY,
FRIDAY, SATURDAY};

int main(int argc, char** argv) {
	weekDay today = TUESDAY;
	weekDay yesterday = MONDAY;
	cout << "Today is :" << today << "\n";
	cout << "Yesterday was :" << yesterday << "\n";
	return 0;
}
