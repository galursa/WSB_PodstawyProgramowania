#include <iostream>

using namespace std;
/* Pobieramy od uzytkownika wyraz
    Zliczamy ile ma samoglosek (a e i o u y)
*/
int main()
{
    string wyraz;
    cout<<"Napisz wyraz bez polskich liter\n";
    cin >> wyraz;
    int rozmiar = wyraz.size();
    int licznik=0;
    for(int i=0; i<rozmiar; i++)
    {
        if (wyraz[i]=='a'||wyraz[i]=='e'||wyraz[i]=='i'||wyraz[i]=='o'||wyraz[i]=='u'||wyraz[i]=='y')
            licznik++;
    }
    cout<<"W wyrazie jest: "<< licznik << " samoglosek\n";
    return 0;
}
