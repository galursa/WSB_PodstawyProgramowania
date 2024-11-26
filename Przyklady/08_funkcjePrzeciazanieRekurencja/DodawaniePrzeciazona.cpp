#include <iostream>

using namespace std;
//piszemy funkcje przeciazona dla dodawania
// dla dwoch parametrow dla liczb calkowitych, rzeczywistych
//dla trzech parametrow dla liczb calkowitych i rzeczywistych.

int dodawanie(int liczba1, int liczba2)
{
    return liczba1+liczba2;
}

float dodawanie(float liczba1, float liczba2)
{
    return liczba1+liczba2;
}

int dodawanie(int liczba1, int liczba2, int liczba3)
{
    return dodawanie(liczba1,liczba2)+liczba3;
}

float dodawanie(float liczba1, float liczba2,float liczba3)
{
    return dodawanie(liczba1,liczba2)+liczba3;
}

int main()
{
    cout<<"Typ int, 2 parametry: " <<dodawanie(2,3)<<"\n";
    cout<<"Typ float, 2 parametry: " <<dodawanie(2.5f,2.5f)<<"\n";
    cout<<"Typ int, 3 parametry: " <<dodawanie(2,3,1)<<"\n";
    cout<<"Typ float, 3 parametry: " <<dodawanie(2.5f,2.5f,1.5f)<<"\n";
    return 0;
}
