#include <iostream>

using namespace std;
//Tworzymy funkcję typu void, wyświetla pętle wsteczną.

void petlaWsteczna()
{
    for(int i=10; i>=0; i--)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main()
{
    petlaWsteczna();
    petlaWsteczna();
    petlaWsteczna();
    return 0;
}

