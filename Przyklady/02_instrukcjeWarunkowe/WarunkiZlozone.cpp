#include <iostream>

using namespace std;

int main()
{
    cout << "Napisz liczbe" << endl;
    float x;
    cin >> x;
/*
    if(x>=7)
    {
     cout<<"Liczba jest wieksza badz rowna 7"<<endl;
    } else
    {
      cout<<"Liczba jest mniejsza od 7"<<endl;
    }
*/

    if((x>=3)&&(x<8))
    {
        cout<<"Badana liczba zawiera sie w zbiorze\n";
    } else {
        cout<<"Badana liczba nie zawiera sie w zbiorze\n";
    }

    if((x<2)||(x>=6))
    {
       cout<<"Podana liczba zawiera sie w zbiorze\n";
    }else
    {
       cout<<"Podana liczba nie zawiera sie w zbiorze\n";
    }

    return 0;
}
