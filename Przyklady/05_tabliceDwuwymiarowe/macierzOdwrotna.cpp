#include <iostream>
#include <iomanip>
/*
Napisz program, który oblicza odwrotnoœæ macierzy 2x2

Proszê u¿yæ wzoru:
   _    _                                _       _
   | a b|                       1       | d  -b |
A= |	|	odwrócona  A =  --------- x |	    |					
   | c d|                   ad  - bc   |-c   a |
   -    -                             -       - 
*/

using namespace std;
int main(int argc, char** argv) {
	cout<<" Liczymy macierz odwrotn¹ 2x2. Podaj wartoœci\n";
	int macierz[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"Element "<<i<<":"<<j<<"\n";
			cin>>macierz[i][j];
		}
	}
	int mianownik=macierz[0][0]*macierz[1][1]-macierz[0][1]*macierz[1][0];
	if(mianownik!=0)
	{
		float macierzOdw[2][2];
		macierzOdw[0][0]=macierz[1][1];
		macierzOdw[1][1]=macierz[0][0];
		macierzOdw[0][1]=(-1)*macierz[0][1];
		macierzOdw[1][0]=(-1)*macierz[1][0];
		float mnoznik = 1/(float)mianownik;
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				macierzOdw[i][j]*=mnoznik; //macierzOdw[i][j]=macierzOdw[i][j]*mnoznik;
				cout<<left;
				cout<<setw(6)<<macierzOdw[i][j]<<" ";
			}
			cout<<"\n";
		}		
	}
	else
		cout<<"Wyznacznik jest rowny zero nie mozemy policzyc macierzy odwrotnej";
	return 0;
}
