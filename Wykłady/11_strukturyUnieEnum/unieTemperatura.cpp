#include <iostream>
#include <iomanip>

union jednostki
{
	float celsjusze;
	float kelwiny;
	float farenheity;
} temperatura;

float celsjuszNaFarenheit(float celsjusz)
{
	float farenheit = celsjusz*9/5+32;
	return farenheit;
}

float celsjuszNaKelwin(float celsjusz)
{
	return celsjusz+ 274.15;
}

using namespace std;

int main()
{
	temperatura.celsjusze = 30;
	cout<<"Temperatura w\n ";
	cout<<"celsjuszach: "<<temperatura.celsjusze<<"\n";
	temperatura.farenheity=celsjuszNaFarenheit(temperatura.celsjusze);
	cout<<"farenheitach:"<<temperatura.farenheity<<"\n";
	temperatura.kelwiny = celsjuszNaKelwin(30);
	cout<<"kelwinach:"<<temperatura.kelwiny<<"\n";
	return 0;
}
