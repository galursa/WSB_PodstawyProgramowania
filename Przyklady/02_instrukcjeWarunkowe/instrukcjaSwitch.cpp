#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
/*Napisz program, który pobiera od u¿ytkownika nazwê owocu i w zale¿noœci 
co u¿ytkownik wybra³ wyœwietla informacjê o witaminach. 
Proszê daæ do wyboru co najmniej 3 owoce. */
    string owoc;
    cout<<"Wybierz owoc: jablko, banan, cytryna\n";
    cin>>owoc;
    switch(owoc)
    {
        case "jablko":
            cout<<"Zawieraj¹ witaminy C, A, E, K\n";
            break;
        case "banan":
            cout<<"Zawiera potas\n";
            break;
        case "cytryna":
            cout<<"Zawiera witaminy: C, beta- karoten, witaminy z grupy B oraz K i E.\n ";
        default:
            cout<<"Niew³aœciwa nazwa owocu lub nie ma owocu na liœcie";
    }

	return 0;
}
