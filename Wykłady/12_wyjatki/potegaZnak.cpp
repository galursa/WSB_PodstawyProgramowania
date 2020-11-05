#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

struct MojWyjatek : public exception {
   const char * what () const throw () {
      return "Niedobra potega";
   }
};

char potegaZnak(int liczba, int potega)
{
	if(potega<0)
		throw MojWyjatek();	
	if (pow(liczba,potega)<0)
		return '-';
	if (pow(liczba,potega)>0)
		return '+';
}
 
int main() {
   try {
      cout<<"Podnosze 2 do 2, sprawdzam znak:"<<potegaZnak(2,2)<<"\n";
      cout<<"Podnosze -3 do 3, sprawdzam znak:"<<potegaZnak(-3,3)<<"\n";
      cout<<"Podnosze 3 do -1, sprawdzam znak:"<<potegaZnak(3,-1)<<"\n";
   } catch(MojWyjatek& e) {
      cout <<"Blad: "<< e.what() <<"\n";
   } catch(exception& e) {
      cout<<"Wystapil nieznany blad\n";
   }
}
