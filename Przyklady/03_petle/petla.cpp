#include <iostream>

using namespace std;
// chcemy wypisac ciag: 4, 8, 12, ... , n, gdzie n to liczba podana przez uzytkownika

int main()
{
    int n;
    cout << "Generuje ciag liczb: 4, 8, 12, ...\n";
    cout << "Podaj liczbe: ";
    cin >> n;
    for(int i=4; i<=n; i+=4)
    {
        cout<<i<<" ";
    }

    return 0;
}
