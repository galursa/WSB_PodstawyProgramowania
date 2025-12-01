#include <iostream>

using namespace std;
// czy dwa wyrazy sa angramami
// anagramy - to sa dwa slowa ktore maja te same litery
// kot - tok
// mara - rama
// 1 . odczytujemy dwa slowa od uzytkownika
// 2 . sortujemy litery i porownujemy
// 2. alternatywny - zliczanie liter w obydwu wyrazach i porownianie
int main()
{
    string slowo1, slowo2;
    cout<<"Sprawdzam czy slowa sa anagramami\n";
    cout<<"Podaj slowo pierwsze: ";
    cin>> slowo1;
    cout<<"Podaj slowo drugie: ";
    cin >>slowo2;
    int dl1 = slowo1.length();
    int dl2 = slowo2.length();
    if( dl1==dl2)
    {
        for(int i=0; i<dl1;i++)
        {
            slowo1[i]=tolower(slowo1[i]);
            slowo2[i]=tolower(slowo2[i]);
        }
        for(int i=0; i<dl1-1;i++)
        {
            for(int j=0; j<dl1-1; j++)
            {
                if(slowo1[j+1]>slowo1[j])
                {
                    swap(slowo1[j+1],slowo1[j]);
                }
                if(slowo2[j+1]>slowo2[j])
                {
                    swap(slowo2[j+1],slowo2[j]);
                }
            }
        }
        int i=0;
        for(i; i<dl1; i++)
        {
            if(slowo1[i]!=slowo2[i])
            {
                cout<<"To nie sa anagramy\n";
                break;
            }
        }
        if (i==dl1)
        {
            cout<<"Wyrazy sa anagramami\n";
        }

    } else {
        cout<<"To nie sa anagramy\n";
    }

    return 0;
}
