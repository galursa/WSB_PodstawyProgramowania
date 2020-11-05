#include <iostream>
using namespace std;
float celsjuszNaFarenheit(float celsjusz)
{
	float farenheit = celsjusz*9/5+32;
	return farenheit;
}
float celsjuszNaKelwin(float celsjusz)
{
	return celsjusz+ 274.15;
}
int main()
{
    //Napisz program, ktory pobiera od uzytkownika temperaturę w Celsiuszach a wyświetla w Farenheitach i Kelwinach.
    cout<<"Przeliczam temperature w Celsjuszach na Farenheity i Kelwiny\n";
    cout<<"Podaj temperatura w Celsjuszach\n";
    float temperaturaWCelsjuszach;
    cin>>temperaturaWCelsjuszach;
	cout<<celsjuszNaFarenheit(temperaturaWCelsjuszach)<<"\n";
	cout<<celsjuszNaKelwin(temperaturaWCelsjuszach);
    return 0;
}
