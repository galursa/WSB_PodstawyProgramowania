#include <iostream>
#include "tablice.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int rozmiar=10;
	int tab[rozmiar];
//	losujDoTab(tab,rozmiar);
	pobierzLiczby(tab,rozmiar);
	wypiszTab(tab, rozmiar);
	std::cout<<minTab(tab,rozmiar)<<"\n";
	std::cout<<maxTab(tab,rozmiar)<<"\n";
	std::cout<<sredniaTab(tab,rozmiar)<<"\n";
	return 0;
}
