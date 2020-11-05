#include <iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) {
	//generowanie liczb losowych
	int size=20;
	//srand(time(NULL));
	int losowe[size];
	srand(time(NULL));
	cout<<"Tablica wyjœciowa \n";
	for(int i=0; i<size; i++)
	{
		losowe[i]=rand()%20;
		cout<<losowe[i]<<" ";
	}
	cout<<"\n";
	//pomys³ 2:
	int ile=0;
	for(int i=0; i<size; i++)
	{
		if(losowe[i]>10)
			ile++;
	}	
	ofstream file("liczby.txt");	
	file<<"Tablica liczb wiêkszych od 10 sposob II\n";
	file<<ile<<"\n";
	int wiekszeOd10II[ile];
	int j=0;
	for(int i=0; i<size; i++)
	{
	 	if(losowe[i]>10)	
	 	{
	 		wiekszeOd10II[j]=losowe[i];
			file<<setw(4)<<wiekszeOd10II[j]<<" ";
			j++;		
		}
	}
	file.close();
	return 0;
}
