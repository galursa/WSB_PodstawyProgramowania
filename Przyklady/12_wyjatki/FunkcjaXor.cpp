#include <iostream>

using namespace std;
/*
realizujemy funkcje xor
chcemy sprawdzac czy podano 0 i 1 do funkcji
p | q | p XOR q
0 | 0 | 0
0 | 1 | 1
1 | 0 | 1
1 | 1 | 0
*/

int liczeXOR(int p, int q)
{
    if (((p!=0)&&(p!=1))||((q!=0)&&(q!=1)))
    {
        throw invalid_argument("Podano liczbe inna niz 0 lub 1");
    }
    return p^q;
}


int main()
{
    try{
        cout<<liczeXOR(0,0)<<"\n";
        cout<<liczeXOR(0,1)<<"\n";
        cout<<liczeXOR(1,0)<<"\n";
        cout<<liczeXOR(1,1)<<"\n";
        cout<<liczeXOR(2,1)<<"\n";
        cout<<liczeXOR(1,1)<<"\n";
    }
    catch (invalid_argument &wyjatek)
    {
        cout<<"Blad: "<<wyjatek.what()<<"\n";
    }
    return 0;
}
