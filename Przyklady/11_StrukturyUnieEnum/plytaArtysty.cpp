#include <iostream>

using namespace std;

struct plyta{
    string artysta;
    string tytul;
    float czasTrwania;
    int rokWydania;
    int iloscUtworow;
    float cena;
};

union muzyka{
    int rokPowstania;
    int popularnosc;
};

enum rodzajeMuzyki{
    rock = 1,
    pop = 2,
    powazna = 3,
    hipHop = 4,
    elektroniczna =5,
    techno = 7
};

int main()
{
    plyta DM;
    DM.artysta = "Depeche Mode";
    DM.tytul = "Speak&Spell";
    DM.czasTrwania = 45.0;
    DM.rokWydania = 1981;
    DM.iloscUtworow= 10;
    DM.cena = 69.99;
    cout<<"Artysta: "<<DM.artysta<<"\n";
    cout<<"Tytul: "<<DM.tytul<<"\n";
    cout<<"Czas trwania: "<< DM.czasTrwania<<"\n";
    cout<<"Rok wydania: "<<DM.rokWydania<<"\n";
    cout<<"Liczba utworow: "<<DM.iloscUtworow<<"\n";
    cout<<"Cena: "<<DM.cena<<"\n";
    muzyka m;
    m.rokPowstania = 1999;
    cout<<"Muzyka: "<< m.rokPowstania<<"\n";
    cout<<"Muzyka: "<<m.popularnosc<<"\n";
    m.popularnosc = 90;
    cout<<"Muzyka: "<< m.rokPowstania<<"\n";
    cout<<"Muzyka: "<<m.popularnosc<<"\n";
    rodzajeMuzyki rodzaj = powazna;
    cout<<"\nMuzyka rodzaj: "<<rodzaj<<"\n";
    rodzajeMuzyki rodzaj1 = techno;
    cout<<"\nMuzyka rodzaj: "<<rodzaj1<<"\n";
    return 0;
}
