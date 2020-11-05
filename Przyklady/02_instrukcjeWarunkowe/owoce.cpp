#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
/*Napisz program, który pobiera od użytkownika nazwę owocu i w zależności 
co użytkownik wybrał wyświetla informację o witaminach. 
Proszę dać do wyboru co najmniej 3 owoce. */
    int owoc;
    cout<<"Wybierz owoc: 1 - jablko, 2 -  banan, 3 - cytryna\n";
    cin>>owoc;
    switch(owoc)
    {
        case 1:
            cout<<"Zawierają witaminy C, A, E, K\n";
            break;
        case 2:
            cout<<"Zawiera potas\n";
            break;
        case 3:
            cout<<"Zawiera witaminy: C, beta- karoten, witaminy z grupy B oraz K i E.\n ";
        default:
            cout<<"Niewłaściwa nazwa owocu lub nie ma owocu na liście";
    }

	return 0;
}
