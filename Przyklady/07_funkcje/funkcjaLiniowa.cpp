#include <iostream>
#include <iomanip>
using namespace std;

float fLiniowa(float x, float a, float b);
void tabelaFLiniowej(int start, int koniec, float a, float b );

int main()
{
    cout<<fLiniowa(1,2,4)<<"\n";
    cout<<"Pierwsza tabela\n";
    tabelaFLiniowej(-5,5,2,4);
    cout<<"Druga tabela\n";
    tabelaFLiniowej(-2,5,5,0.5);
    return 0;
}

float fLiniowa(float x, float a, float b)
{
    return a*x+b;
}

void tabelaFLiniowej(int start, int koniec, float a, float b )
{
    for(int i=start; i<=koniec; i++)
    {
        cout<<"| "<<setw(5)<<i<<" |";
    }
    cout<<"\n";
    for(int i=start; i<=koniec; i++)
    {
        cout<<"| "<<setw(5)<<fLiniowa(i,a,b)<<" |";
    }
    cout<<"\n";
}
