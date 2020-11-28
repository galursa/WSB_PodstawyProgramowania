#include <iostream>

using namespace std;
/* generujemy liczby podzielne przez 15 u¿yjemy pêtli while */
int main()
{
    int i = 15;

    while(i<=300)
    {
        cout<<i<<" ";
        i+=15; //i=i+15;
    }

    cout<<"k - koniec";
    char znak = 'a';
    while(znak!='k')
    {
        cout<<"Podaj znak\n";
        cin>>znak;
    }
    return 0;
}
