#include <iostream>

using namespace std;

int main()
{
/*    odczytujemy znak od uzytkownika
    i sprawdzamy czy to jest a czy inny znak
*/
    char znak;
    cout << "Wpisz znak" << endl;
    cin >> znak;

 //   (warunek)?prawdziwy :falszywy
    cout << ((znak == 'a')?"Wybrano litere a":"Wybrano litere inna niz a");

    cout<<"\n";

    if (znak == 'a')
    {
        cout<<"Wybrano litere a";

    } else{
        cout<<"Wybrano litere inna niz a";
    }
    return 0;
}
