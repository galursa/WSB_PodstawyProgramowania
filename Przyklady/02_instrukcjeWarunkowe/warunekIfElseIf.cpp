#include <iostream>

using namespace std;

int main()
{
    cout << "Napisz liczbe" << endl;
    int liczba;
    cin >> liczba;
    if ((liczba%3)==0)
    {
        cout<<"Liczba "<<liczba<<" jest podzielna bez reszty przez trzy\n";
    } else if ((liczba%5)==0)
    {
        cout<<"Liczba "<<liczba<<" jest podzielna bez reszty przez piec\n";
    } else if ((liczba%7)==0)
    {
        cout<<"Liczba "<<liczba<<" jest podzielna bez reszty przez siedem\n";
    }else
    {
        cout<<"Liczba "<<liczba<<" nie jest podzielna przez trzy, piec lub siedem\n";
    }

    return 0;
}
