#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	// o wymiarach podanych przez uzytkownika
	// 1 0 1     a13
	// 0 1 0     a22
	// 1 0 1     a31
	int rozmiar;
	cout<<"Podaj rozmiar macierzy";
	cin>>rozmiar;
	int k=rozmiar;
	for(int i=1;i<=rozmiar;i++)
	{
		for(int j=1;j<=rozmiar;j++)
		{
			if(i==j)
			{
				cout<<1<<" ";
				if(j==k)
					k--;
			}
			else if(j==k)
			{	
				cout<<1<<" ";
				k--;
			} else{
				cout<<0<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
