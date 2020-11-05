#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	//generujemy macierz jednostkowa 
	// o wymiarach podanych przez uzytkownika
	// 1 0 0
	// 0 1 0
	// 0 0 1
	int rozmiar;
	cout<<"Podaj rozmiar macierzy";
	cin>>rozmiar;
	for(int i=1;i<=rozmiar;i++)
	{
		for(int j=1;j<=rozmiar;j++)
		{
			if(i==j)
				cout<<1<<" ";
			else
				cout<<0<<" ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
