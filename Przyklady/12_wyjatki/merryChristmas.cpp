#include <iostream>
#include <exception>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


string merryChristmas()
{
	string wish[] = {
		"Merry Christmas \n",
		"Wesolych Swiat \n",
		"God Jul \n",
		"Gajan Kristnaskon\n"
	};
	
	int l = rand()%4;
	return wish[l];
}

int main() {
	cout<<"Zyczenia \n";
	cout<<"Dowolny klawisz - nowe zyczenia\n";
	cout<<"klawisz w - wyjscie z programu";
	char w='a';
	
	while(w!='w')
	{
		cout<<merryChristmas();
		cin>>w;
	}
	cout<<"i Szczesliwego Nowego Roku";
}
