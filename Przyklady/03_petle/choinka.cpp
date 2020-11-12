#include <iostream>
#include <ctime>
using namespace std;
//Wygenerowac choinke, wielkosc pobrac od uzytkownika
/*      1 2 3 4 5
 1      *
 2    * * *
 3  * * * * *
*/
int main()
{
    int rozmiar;
    cout<<"Podaj rozmiar choinki\n";
    cin>>rozmiar;
    for(int i = 1; i < rozmiar+1; i++)
    {
        for(int j = 1; j < rozmiar+i ; j++ )
        {
            if(j<=(rozmiar-i))
            {
                cout<<"  ";
            }else
            {
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
