#include <iostream>
using namespace std;
/* generujemy ci¹g 4, 8, 12, ...  i zapiszemy go do tablicy */
int main()
{
    int iloscElementow = 10;  //i+=4 to oznacza i=i+4
    for(int i=4; i<=4*iloscElementow; i+=4)
    {
        cout<<i<<" ";
    }

    return 0;
}
