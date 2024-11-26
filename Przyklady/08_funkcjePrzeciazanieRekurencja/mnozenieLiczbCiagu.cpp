#include <iostream>

using namespace std;

//liczymy mnozenie elementow ciagu
//1*2*3*4*...*n
//zapiszemy to za pomoca funkcji rekurencyjnej
// mnozenieElemCiagu(5)
// 5*4*3*2*1

int mnozenieElemCiagu(int n)
{
    if (n == 1)
        return 1;
    return n*mnozenieElemCiagu(n-1);
}

int mozenieElemCiaguWPetli(int n)
{
    int iloczyn=1;
    for(int i=1; i<=n;i++)
    {
        iloczyn*=i;
    }
    return iloczyn;
}

int main()
{
    cout << "Dla 5: " <<mnozenieElemCiagu(5) <<endl;
    cout << "Dla 4: " <<mnozenieElemCiagu(4) <<endl;
    cout << "Dla 3: " <<mnozenieElemCiagu(3) <<endl;
    cout << "Petla dla 5: " <<mozenieElemCiaguWPetli(5) <<endl;
    cout << "Petla dla 4: " <<mozenieElemCiaguWPetli(4) <<endl;
    cout << "Petla dla 3: " <<mozenieElemCiaguWPetli(3) <<endl;


    return 0;
}
