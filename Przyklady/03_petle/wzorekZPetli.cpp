#include <iostream>

using namespace std;
/*
wygeneruj wzory:

1234
123
12
1

****
***
**
*

*/


int main()
{
    for(int i=1; i<=4; i++) //wiersze
    {
        for(int j=i; j<=4; j++) //kolumny
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<=4; i++) //wiersze
    {
        for(int j=i; j<=4; j++) //kolumny
        {
            cout<<j-i+1;
        }
        cout<<"\n";
    }



    return 0;
}
