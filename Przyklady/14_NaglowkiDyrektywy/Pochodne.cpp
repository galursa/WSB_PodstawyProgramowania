#include <iostream>
#include "pochodne.h"

int main(int argc, char** argv) {
	int wybierz=1;
	while(wybierz!=0)
	{
		wybierz = menu();
		pochodna(wybierz);
	}
	return 0;
}
