#include <iostream>

using namespace std;

int main()
{
/*
Chcemy napisac menu wyboru do maszyny sprzedajacej kawe, herbate.
1 - herbata
2  - goraca woda
3 - kawa czarna
4 - kawa z mlekiem
5 - cappuchino
*/
    cout<<"Prosze wybrac opcje\n";
    cout<<"  1 - herbata\n";
    cout<<"  2  - goraca woda\n";
    cout<<"  3 - kawa czarna\n";
    cout<<"  4 - kawa z mlekiem\n";
    cout<<"  5 - cappuchino\n";

    int wyborNapoju;
    int wyborCukru;
    cin>>wyborNapoju;

    if((wyborNapoju>=1)&&(wyborNapoju<=5))
    {
        cout<<"Czy chcesz dodac cukier 1-tak, inna opcja - nie\n";
        cin>>wyborCukru;
        cout<<"\nWybrales napoj: ";
        if(wyborCukru==1)
        {
            cout<<" z cukrem ";
        }else{
            cout<<" bez cukru ";
        }
    }

    switch(wyborNapoju)
    {
    case 1:
        cout<<" herbate ";
        break;
    case 2:
        cout<<" goraca wode ";
        break;
    case 3:
        cout<<" kawe czarna ";
        break;
    case 4:
        cout<<" kawe z mlekiem ";
        break;
    case 5:
        cout<<" cappuchino ";
        break;
    default:
        cout<<"Nie wybrano napoju lub wybrany napoj nie jest sprzedawany\n";
    }

    return 0;
}
