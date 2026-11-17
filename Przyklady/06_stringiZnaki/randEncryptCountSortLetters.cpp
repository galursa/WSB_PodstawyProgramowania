#include <iostream>
#include <ctime>
using namespace std;
/*
   1.  Wylosujemy litery od zakresu od "A - Z"
   2.  Zaszyfrujemy je wykorzystujac tablice vigenere'a
   3.  Zliczmy ile razy wystepuja poszczegolne litery alfabetu.
   4.  Sortujemy litery w alfabecie.
*/


int main()
{
    int charSize = 50;
    char charArray[charSize];
    srand(time(NULL));
    cout << "Array before encryption: \n";
    for(int i=0; i<charSize; i++)
    {
        charArray[i] = 65+rand()%26;
        cout<<charArray[i]<<" ";
    }
    cout<<"\n";
    int j=1;
    cout << "Array after using Vigenere code: \n";
    for(int i=0; i<charSize; i++)
    {
        charArray[i]+=j%26;
        j++;
        if(charArray[i]>90)
        {
            charArray[i]-=26;
        }
        cout<<charArray[i]<<" ";
    }
    cout<<"\n";
    int alphabet[26];
    cout<<"Number of single letters in encrypted array \n";
    for(int i=0; i<26; i++)
    {
        alphabet[i]=0;
        cout << (char)(i+65) <<" ";
    }
    cout<<"\n";
    for(int i=0; i<charSize; i++)
    {
        alphabet[(int)charArray[i]-65]++;
    }
    for(int i=0; i<26; i++)
    {
        cout << alphabet[i]<<" ";
    }
    cout<<"\n";
    cout<< " BubbleSort \n";
    for(int i=0; i<charSize-1;i++)
    {
        for(int j=0; j<charSize-1; j++)
        {
            if (charArray[j]>charArray[j+1])
            {
                swap(charArray[j],charArray[j+1]);
            }
        }
    }
    for(int i=0; i<charSize; i++)
    {
        cout<<charArray[i]<<" ";
    }

    return 0;
}
