#include <iostream>


void numbers(int from, int to)
{
	for (int i=from; i<=to; i++)
		std::cout<<i<<" ";
	std::cout<<"\n";
		
}

int main(int argc, char** argv) {
	numbers(1,10);
	numbers(5,30);
	numbers(100,110);

	return 0;
}
