#include <iostream>
#include <map>
using namespace std;

int main()
{
   map<string, int> farby = {{"ochra", 12},{"ultramaryna", 15}};
   
   cout<<"Jaki numer ma ochra?: " <<farby["ochra"]<<"\n";
   cout<<"Jaki numer ma ultramaryna?: "<<farby.at("ochra")<<"\n";
   cout<<"Możemy zmieniać wartości\n";
   farby["ochra"]=22;
   farby.at("ultramaryna")=33;
   cout<<"Jaki numer ma ochra?: " <<farby["ochra"]<<"\n";
   cout<<"Jaki numer ma ultramaryna?: "<<farby.at("ochra")<<"\n";   
   cout<<"Gdy potrzebujemy dodac nowe elementy do istniejacej mapy\n";
   farby["zielony"]=23;
   farby.insert({"bialy", 55});
   cout<<"A tak wyswietlimy cala mape\n";
   for(auto kolor: farby)
   {
       cout<<"Farba: "<<kolor.first<<" - "<<kolor.second<<"\n";
   }
   cout<<"Klucze nie moga sie powtarzac. Jezeli probujemy dodac dwa takie same, system zapisze pierwszy\n";
   farby.insert({"szary",88});
   farby.insert({"szary",11});
   cout<<"Szara farba ma numer: "<<farby["szary"]<<"\n";
   cout<<"Element usuwamy:\n";
   farby.erase("ochra");
   cout<<"Mozemy teraz sprawdzic czy ten element istnieje w mapie "<<farby.count("ochra");
   cout<<"\nDo usuniecia wszystkiego sluzy funkcja: \n";
   farby.clear();
   cout<<"Teraz rozmiar jest: "<<farby.size()<<"\n";
   cout<<"Czy mapa jest pusta? "<<farby.empty()<<"\n";
    return 0;
}