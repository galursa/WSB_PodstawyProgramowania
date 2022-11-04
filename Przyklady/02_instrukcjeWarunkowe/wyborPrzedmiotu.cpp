#include <iostream>

using namespace std;

int main()
{
    /*
    wyswietlamy info dla uzytkownika z przedmiotami do wyboru
    uzytkownik wybiera przedmiot wpisujac liczbe
    Program wyswietla informacje zwrotna o wybranym przedmiocie
    */
    int przedmiot;
    cout << "Prosze wybrac przedmiot." << endl;
    cout << "Aby wybrac przedmiot nalezy wpisac numer mu odpowiadajacy" << endl;
    cout << "Lista przedmiotow" << endl;
    cout << "1. Matematyka "<< endl;
    cout << "2. Statystyka"<< endl;
    cout << "3. Geometria wykreslna "<< endl;
    cin >> przedmiot;

    switch(przedmiot)
    {
    case 1:
        cout << "Brawo. Jestes zapisany na matematyke\n";
        break;
    case 2:
        cout << "Brawo. Jestes zapisany na statystyke\n";
        break;
    case 3:
        cout << "Brawo. Jestes zapisany na geometrie wykreslna\n";
        break;
    default:
        cout << "Nierozpoznany wybor \n";
    }
    return 0;
}
