// Example program
#include <iostream>

using namespace std;

int main()
{
    //Napisz program, ktory pobiera od uzytkownika temperaturę w Celsiuszach a wyświetla w Farenheitach i Kelwinach.
    cout<<"Przeliczam temperature w Celsjuszach na Farenheity i Kelwiny\n";
    cout<<"Podaj temperatura w Celsjuszach\n";
    float temperaturaWCelsjuszach;
    cin>>temperaturaWCelsjuszach;
    float temperaturaWFarenheitach, temperaturaWKelwinach;
    temperaturaWFarenheitach = temperaturaWCelsjuszach*9/5+32;
    cout<<"Celsjusze na Farenheity: "<<temperaturaWFarenheitach<<"\n";
    temperaturaWKelwinach = temperaturaWCelsjuszach + 274.15;
    cout<<"Celsjusze na Kelwiny: "<<temperaturaWKelwinach<<"\n";
    return 0;
}
