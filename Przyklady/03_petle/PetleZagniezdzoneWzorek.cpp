#include <iostream>

using namespace std;

/*
wygeneruj wzory:
  4 3 2 1
  3 2 1
  2 1
  1
*/

int main()
{
    int rozmiar = 4;
    cout<<"Program generuje liczby\n";
    for(int i=rozmiar; i>=1;i--)
    {
        for(int j=i; j>=1; j--)
        {
            cout << j << " ";
        }
        cout<<"\n";
    }

    return 0;
}
