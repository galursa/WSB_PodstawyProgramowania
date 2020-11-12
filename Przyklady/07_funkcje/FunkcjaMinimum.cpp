#include <iostream>

using namespace std;
//Tworzymy funkcję, która pobiera 2 wartości i szuka wśród nich minimum.
// f(x) = a+b
int minimum(int a, int b)
{
    if (a<b)
        return a;
    else
        return b;
}

int main()
{
    cout<<"Minimalna wartosc\n";
    cout<<minimum(1,2)<<"\n";
    cout<<"Minimalna wartosc\n";
    cout<<minimum(8,2)<<"\n";
    return 0;
}
