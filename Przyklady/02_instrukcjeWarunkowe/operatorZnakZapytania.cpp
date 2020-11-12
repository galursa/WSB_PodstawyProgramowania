#include <iostream>

using namespace std;
// czy liczba jest podzielna przez 2 i przez 5 jednocześnie
// wykorzystamy operator ?
int main()
{   int liczba=15;

    //warunek? co się wykona jeśli spełniony : co się wykona jeśli nie spełniony
    cout<<(((liczba%2==0) && (liczba%5==0))?"liczba podzielna przez 2 i 5":"liczba nie jest jednocześnie podzielna przez 2 i 5");
    return 0;
}
