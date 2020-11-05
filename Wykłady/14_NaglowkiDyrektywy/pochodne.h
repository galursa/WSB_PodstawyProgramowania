#include <iostream>
int menu()
{
	std::cout<<"Wybierz pochodna (Wpisz numer):\n";
	std::cout<<"1 - sin(ax) \n";
	std::cout<<"2 - ax \n";
	std::cout<<"3 - ax^b \n";
	int wybor;
	std::cin>>wybor;
	return wybor;
}
void pochodna(int wybor)
{
	switch(wybor)
	{
		case 1:
			std::cout<<"Pochodna postaci: sin(ax). Podaj a";
			int a;
			std::cin>>a; //(sin3x)' = 3cos3x
			std::cout<<"(sin"<<a<<"x)'="<<a<<"cos"<<a<<"x\n";
			break;
		case 2:
			std::cout<<"Pochodna postaci: ax. Podaj a";
			std::cin>>a; 
			std::cout<<"("<<a<<"x)'="<<a<<"\n";
			break;
		case 3:
			std::cout<<"Pochodna postaci: ax^b. Podaj a";
			std::cin>>a; 
			std::cout<<"Podaj b";
			int b;
			std::cin>>b; 
			std::cout<<"("<<a<<"x^"<<b<<")'="<<a*b<<"x^"<<b-1<<"\n";
			break;
		default:
			std::cout<<"Nie rozpoznany wybor";
	}
}
