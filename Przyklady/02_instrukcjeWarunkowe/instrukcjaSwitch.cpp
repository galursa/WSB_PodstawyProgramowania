#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
/*Napisz program, kt�ry pobiera od u�ytkownika nazw� owocu i w zale�no�ci 
co u�ytkownik wybra� wy�wietla informacj� o witaminach. 
Prosz� da� do wyboru co najmniej 3 owoce. */
    string owoc;
    cout<<"Wybierz owoc: jablko, banan, cytryna\n";
    cin>>owoc;
    switch(owoc)
    {
        case "jablko":
            cout<<"Zawieraj� witaminy C, A, E, K\n";
            break;
        case "banan":
            cout<<"Zawiera potas\n";
            break;
        case "cytryna":
            cout<<"Zawiera witaminy: C, beta- karoten, witaminy z grupy B oraz K i E.\n ";
        default:
            cout<<"Niew�a�ciwa nazwa owocu lub nie ma owocu na li�cie";
    }

	return 0;
}
