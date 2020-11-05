#include <iostream>
using namespace std;

void ciag(int start, int stop){
	//generujemy ciag od 1 do 100
	int i=start;
	//wykonuj ... dopoki warunek jest spelniony
	do
	{
		cout<<i<<" ";
		i++;
	}while(i<=stop);
}

int main(int argc, char** argv) {
	ciag(5,25);
	cout<<"\n\n";
	ciag(100,120);
	cout<<"\n\n";
	ciag(50,100);
	return 0;
}
