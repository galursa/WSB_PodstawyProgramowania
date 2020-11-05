#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(int argc, char** argv) {
	//generowanie liczb losowych
	int size=20;
	//srand(time(NULL));
	int losowe[size];
	cout<<"Tablica wyjœciowa \n";
	for(int i=0; i<size; i++)
	{
		losowe[i]=rand()%20;
		cout<<losowe[i]<<" ";
	}
	cout<<"\n";
	
	//pomys³ 1: tworzymy nowa tablice o wielkosci jak pierwsza i wype³niamy zerami
	//nastêpnie przesuwamy elementy i wyswietlamy tylko te ktore sa rozne od zera
	//pomysl 2: liczymy ile elementow jest wiekszych od 10 
	//tworzymy nowa tablice o tym rozmiarze i przesuwamy elementy
	//pomys³ 1:
	int wiekszeOd10[size];
	for(int i=0; i<size; i++)
		wiekszeOd10[i]=0;
	int j=0;
	for(int i=0; i<size; i++)
	{
	 	if(losowe[i]>10)	
	 	{
	 		wiekszeOd10[j]=losowe[i];
			j++;		
		}
	}
	cout<<"Tablica liczb wiêkszych od 10\n";
	for(int i=0; wiekszeOd10[i]!=0; i++)
		cout<<wiekszeOd10[i]<<" ";
	cout<<"\n";
	//pomys³ 2:
	int ile=0;
	for(int i=0; i<size; i++)
	{
		if(losowe[i]>10)
			ile++;
	}
	cout<<"Tablica liczb wiêkszych od 10 sposob II\n";
	int wiekszeOd10II[ile];
	j=0;
	for(int i=0; i<size; i++)
	{
	 	if(losowe[i]>10)	
	 	{
	 		wiekszeOd10II[j]=losowe[i];
			cout<<wiekszeOd10II[j]<<" ";
			j++;		
		}
	}
	return 0;
}
