#include <iostream>

using namespace std;
/*
Przepisy
--
+nazwa: string
+kalorycznosc: float
+iloscPorcji: float
+sposobWykonania: string
+skladniki: string
--
+Przepisy(nazwa: string,
kalorycznosc: int, iloscPorcji: float,
sposobWykonania: string, skladniki: string)
+wyswietlPrzepis():void
+kalorycznoscPorcji():float

*/

class Przepisy{
public:
    string nazwa;
    float kalorycznosc;
    float iloscPorcji;
    string sposobWykonania;
    string skladniki;
    Przepisy(string nazwaK, float kalorycznoscK, float iloscPorcjiK, string sposobWykonaniaK, string skladnikiK)
    {
        nazwa = nazwaK;
        kalorycznosc = kalorycznoscK;
        iloscPorcji = iloscPorcjiK;
        sposobWykonania = sposobWykonaniaK;
        skladniki = skladnikiK;
    }

    void wyswietlPrzepis()
    {
        cout<<"--------------------------------------------\n";
        cout<<nazwa<<"\n";
        cout<<"--------------------------------------------\n";
        cout<<"Kalorycznosc: "<<kalorycznosc<<" kcal\n";
        cout<<"Przepis zawiera: "<<iloscPorcji<<" porcji\n";
        cout<<"--------------------------------------------\n";
        cout<<"Skladniki:\n";
        cout<<skladniki<<"\n";
        cout<<"--------------------------------------------\n";
        cout<<"Sposob wykonania: \n";
        cout<<sposobWykonania<<"\n";
    }
    float kalorycznoscPorcji()
    {
        return kalorycznosc/iloscPorcji;
    }
};


int main()
{
    Przepisy kanapka("Kanapka", 300, 1, "wez jedna kromka, posmaruj maslem poloz wedline lub tofu","jedna kromka chleba, lyzeczka masla, jeden plaster wedliny lub tofu");
    kanapka.wyswietlPrzepis();
    cout<<"Kalorycznosc jednej porcji: "<<kanapka.kalorycznoscPorcji()<<" kcal \n";
    Przepisy jarzynowa("Zupa jarzynowa", 985.95, 4.5, "Umyj i obierz warzywa, wrzuæ do garnka, zalej 1.25 litra wody, gotuj 45 min, dodaj przyprawy ", " marchew - 1 szt., pietruszka - 1 sztuka korzen, ziemniaki - 0,5 kg , sol - pol lyzeczeki, pieprz - pol lyzeczki");
    jarzynowa.wyswietlPrzepis();
    cout<<"Kalorycznosc jednej porcji: "<<jarzynowa.kalorycznoscPorcji()<<" kcal \n";
    return 0;
}
