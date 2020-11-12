#include <iostream>
#include <ctime>
using namespace std;
//Wygenerowaæ ci¹g liczb podzielnych przez liczbê podan¹ przez u¿ytkownika
//1 sposób: mo¿emy wygenerowaæ liczby losowe i zbadaæ ich podzielnoœæ
//2 sposób: zaczynamy od liczby pocz¹tkowej i generujemy w pêtli kolejne liczby
int main()
{
    int liczba;
    cout<<"Prosze podac liczbe ktora posluzy do generowania ciagu liczb\n";
    cin>>liczba;
    srand(time(NULL)); //daje inne wartoœci losowe przy ka¿dym uruchomieniu programu
    //2 sposób:
    cout<<"Drugi sposob z ustawieniem wielkosci kroku w petli\n";
    for(int i = liczba; i <= liczba*10 ; i+=liczba )  //i=i+5
    {
        cout<<i/liczba<<":"<<i<<" ";
    }
    cout<<"\n";
    //1 sposób;
    int los, j=0;
    cout<<"Pierwszy sposob z losowaniem liczb\n";
    while(j<10){
        los = rand()%50 + 1;  //zakres = 50 to mog¹ byæ wylosowane liczby od 0 do 49
        // chcemy zakres od 3 do 5: liczymy ile mamy liczb a potem dodaæ l. pocz¹tkow¹, rand()%3+3
        if(los%liczba==0)
        {
            cout<<j+1<<":"<<los<<" ";
            j++;
        }
    }
    return 0;
}
