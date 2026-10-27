#include <iostream>

using namespace std;

int main()
{
/*
read from user integer number
W divide it by 2 and we check the rest

czytamy liczbe od uzytkownika
Dzielimy przez 2 i sprawdzamy reszte
*/

    int number;
    cout<<"Type integer number\n";
    cin>>number;
    int rest;
    rest=((number%2)==0)?0:1;
    cout<<"Rest = "<<rest<<"\n";
    return 0;
}
