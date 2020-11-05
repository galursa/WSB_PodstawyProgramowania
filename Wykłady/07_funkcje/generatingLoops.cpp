#include <iostream>

void stepLoop(int howMany, int step)
{
	for(int i=1; i<=howMany; i+=step)
		std::cout << i << " ";
	std::cout << "\n";
}

int main(int argc, char** argv) {
	stepLoop(30,1);
	stepLoop(30,2);
	stepLoop(30,6);
	
	return 0;
}
