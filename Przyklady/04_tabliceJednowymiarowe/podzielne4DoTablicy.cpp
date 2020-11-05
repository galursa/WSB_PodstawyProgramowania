#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
/*zapisujemy do tablicy liczby podzielne przez 4 */
using namespace std;
int main(int argc, char** argv) {
	int przez4[10];
	srand(time(NULL));
	//losujemy liczby i sprawdzamy czy jest podzielna przez 4	
	int z;
	int i=0;
	while(i<10){
		z= rand()%100+1;
		if((z%4)==0)
		{
			przez4[i]=z;
			i++;
		}
	}	
	for(i=0; i<10; i++)
		cout<<setw(4)<<przez4[i];
	return 0;
}
