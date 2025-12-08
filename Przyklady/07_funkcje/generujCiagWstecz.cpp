#include <iostream>

using namespace std;
/* napiszemy funkcjê, która generuje ci¹g od wartosci do 1.
*/

void ciagWstecz(int start, int krok)
{
    for(int i = start; i>=1; i-=krok)
    {
        cout << i << " ";
    }
    cout<<"\n";
}

int odczytajLiczbe()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    return liczba;
}

int main()
{
    int liczba1, liczba2;
    liczba1 = odczytajLiczbe();
    liczba2 = odczytajLiczbe();
    ciagWstecz(odczytajLiczbe(),1);
    ciagWstecz(liczba1,liczba2);
    ciagWstecz(50,5);
    return 0;
}
