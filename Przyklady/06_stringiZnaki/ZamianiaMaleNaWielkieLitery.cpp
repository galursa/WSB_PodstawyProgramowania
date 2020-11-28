#include <iostream>

using namespace std;
//Pobierz od użytkownika wyraz i zamień pierwszą literę w wyrazie na wielką

int main()
{
    string word;
    cout<<"Prosze podac wyraz\n";
    cin>>word;
    word[0]=toupper(word[0]);
    cout<<"Zmieniony wyraz\n"<<word<<"\n";
    int wSize = word.size();
    for(int i=0; i<wSize; i++)
    {
            word[i]=toupper(word[i]);
    }
    cout<<"Zamieniamy wszystkie litery na wielkie \n"<<word<<"\n";
    return 0;
}
