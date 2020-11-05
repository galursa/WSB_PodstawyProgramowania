#include <iostream>
#include <ctime>
#include <cstdlib>
void randomNumbers(int howMany, int theSame)
{
	if (theSame==0)
		srand(time(NULL));
	for(int i=1;i<howMany;i++)
	{
		std::cout<< rand()%100 << " ";
	}
		
}


int main(int argc, char** argv) {
	int howMany, theSame;
	std::cout << "Type how many numbers do you want to generate\n";
	std::cin >> howMany;
	std::cout << "Do you want to have the same numbers all the time (1-yes, 0-no)\n";
	std::cin >> theSame;
	randomNumbers(howMany, theSame);
	return 0;
}
