#include <iostream>
#include <iomanip> 
using namespace std;
int main(int argc, char** argv) {
	//generujemy macierz jednostkowa 
/*Napisz program, który generuje macierz:
1 2 3 4 
2 3 4 5 
3 4 5 6
4 5 6 7
*/
	int rozmiar;
	cout<<"Podaj rozmiar macierzy";
	cin>>rozmiar;
	for(int i=1;i<=rozmiar;i++)
	{
		for(int j=i;j<rozmiar+i;j++)
		{
			cout<<setw(3)<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
