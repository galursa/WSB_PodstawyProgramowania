#include <iostream>

using namespace std;
//Pobierz od użytkownika string zapisz kodowanie Cezara (przesunięcie co trzy)
//A - D,
int main()
{
    string word, newWord = "" ;
    cout<<"Prosze podac slowo \n";
    cin>>word;
    int wSize = word.size();
    for(int i=0; i<wSize; i++)
    {
        newWord+=word[i]+3;
    }

    cout<<"Nowe slowo\n"<<newWord<<"\n";



    return 0;
}
