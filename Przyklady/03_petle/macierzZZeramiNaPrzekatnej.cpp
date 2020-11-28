#include <iostream>
#include <ctime>

using namespace std;
// generujemy macierz, która na przek¹tnej ma zera a poza przek¹tn¹ liczby losowe
int main()
{
    //na razie wielkosc 3x3
    int los, wielkosc;
    srand(time(NULL));
    cout<<"Prosze podac wartosc\n";
    cin>>wielkosc;
    for(int i=0; i<wielkosc; i++)
    {
        for(int j=0; j<wielkosc; j++)
        {
            if(i == j)
            {
               cout<<"0 ";
            }else{
                los=rand()%9 +1; //1-10
                cout<<los<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
