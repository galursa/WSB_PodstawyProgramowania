#include <iostream>

using namespace std;
int main(int argc, char** argv) {
// pobieramy liczbę od użytkownika
//chcemy sprawdzić czy jest podzielna przez 2 i 5 jednocześnie
    int liczba;
    cout<<"Proszę podać liczbę\n";
    cin>>liczba;
    
    if((liczba%2==0)&&(liczba%5==0))
    {
        cout<<"Liczba "<<liczba<<" jest podzielna przez 2 i przez 5\n";
    } else
        cout<<"Liczba "<<liczba<<" nie spełnia warunków\n";
    
    


	return 0;
}
