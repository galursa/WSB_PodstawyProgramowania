#include <iostream>

using namespace std;
//Generujemy losowo alfabet z zakresu od a do z
//Co drugi znak zamienimy na wielka litere

int main()
{
    char alfabet[26];
    for(int i=0; i<26 ;i++)
    {
        alfabet[i] = rand()%26+97;
        cout<<alfabet[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<26; i+=2)
    {
        alfabet[i] = toupper(alfabet[i]);
    }
    for(int i=0; i<26 ;i++)
    {
        cout<<alfabet[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
