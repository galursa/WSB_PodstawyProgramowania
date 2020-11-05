#include <iostream>
#include <ctime>
#include <cstdlib>

void wordWithLetter(char letter)
{
	switch(letter)
	{
		case 'a':
			std::cout<< "Letter A: \n";
			std::cout<< "Words: apple, acorn, arabesque\n";
			break;
		case 'b':
			std::cout<< "Letter B: \n";
			std::cout<< "Words: bubble, buoy, baby\n";
			break;
		case 'c':
			std::cout<< "Letter C: \n";
			std::cout<< "Words: chip, cherry, ceremony\n";
			break;
		default :
			std::cout<< "There is no words for your letter\n";
			break;
	}
}

int main(int argc, char** argv) {
	wordWithLetter('a');
	wordWithLetter('b');
	wordWithLetter('c');
	return 0;
}

