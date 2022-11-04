#include <iostream>

using namespace std;

int main()
{

    /* pobieramy cout<<"-1 \n";od uzytkownika liczbe
     nastepnie sprawdzamy znak funkcja signum */
    int liczba;
    cout << "Prosze podac liczbe" << endl;
    cin >> liczba;

    if(liczba<0)
    {
        cout<<"sgn(x) = -1 \n";
    } else if (liczba == 0)
    {
        cout<<"sgn(x) = 0 \n";
    }else
    {
        cout<<"sgn(x) = 1 \n";
    }

    return 0;
}
