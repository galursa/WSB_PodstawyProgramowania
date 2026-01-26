#include <iostream>

using namespace std;

struct WyjatekZakres : public exception {
   const char * what () const throw () {
      return "Nieprawidlowy zakres liczb. Prawidlowy jest od 1 do 100";
   }
};

void podajLiczbyDoTablicy(int *tab,int wielkoscTablicy)
{
    cout<<"Prosze podac liczby z zakresu:
        \n";
    for(int i = 0; i<wielkoscTablicy; i++)
    {
        cout<<i<<" : ";
        cin>>tab[i];
        if ((tab[i]<1)||(tab[i]>100))
            throw WyjatekZakres();
    }
}

void wyswietlTablice(int *tab, int wielkosc)
{
    for(int i = 0; i<wielkosc; i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    try{
        int rozmiar=5;
        int tablica[rozmiar];
        podajLiczbyDoTablicy(tablica,rozmiar);
        wyswietlTablice(tablica, rozmiar);
    }catch(WyjatekZakres & wyjatek)
    {
        cout<<wyjatek.what();
    }
    return 0;
}
