#include <iostream>
#include <ctime>
using namespace std;
//Wygenerowa� ci�g liczb podzielnych przez liczb� podan� przez u�ytkownika
//1 spos�b: mo�emy wygenerowa� liczby losowe i zbada� ich podzielno��
//2 spos�b: zaczynamy od liczby pocz�tkowej i generujemy w p�tli kolejne liczby
int main()
{
    int liczba;
    cout<<"Prosze podac liczbe ktora posluzy do generowania ciagu liczb\n";
    cin>>liczba;
    srand(time(NULL)); //daje inne warto�ci losowe przy ka�dym uruchomieniu programu
    //2 spos�b:
    cout<<"Drugi sposob z ustawieniem wielkosci kroku w petli\n";
    for(int i = liczba; i <= liczba*10 ; i+=liczba )  //i=i+5
    {
        cout<<i/liczba<<":"<<i<<" ";
    }
    cout<<"\n";
    //1 spos�b;
    int los, j=0;
    cout<<"Pierwszy sposob z losowaniem liczb\n";
    while(j<10){
        los = rand()%50 + 1;  //zakres = 50 to mog� by� wylosowane liczby od 0 do 49
        // chcemy zakres od 3 do 5: liczymy ile mamy liczb a potem doda� l. pocz�tkow�, rand()%3+3
        if(los%liczba==0)
        {
            cout<<j+1<<":"<<los<<" ";
            j++;
        }
    }
    return 0;
}
