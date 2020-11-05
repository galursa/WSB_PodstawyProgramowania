#include <iostream>

struct Lista
{
	int liczba;
    Lista * nastepny;
};

void wypiszListe(Lista * element, int ile)
{
    if(element)
    {
        std::cout << ile<<":"<<element->liczba << "\n";
        wypiszListe(element->nastepny,ile+1);
    }
}

Lista * ostatni(Lista * element)
{
    if(element)
    while(element->nastepny)
         element = element->nastepny;
    return element;
}

Lista * pierwszy(Lista * element)
{
    if(element)
    	return element;   
}

void dodajNaKoniec(Lista *& element, int wartosc)
{
    // Tworzymy pusty element listy
    Lista * tmp = new Lista;
    tmp->liczba = wartosc;
    tmp->nastepny = NULL;
    // przepinamy wskaŸnik z poprzednio ostatniego elementu na nowy
    if(element)
         ostatni(element)->nastepny = tmp;
    else
         element = tmp;
}
void dodajNaPoczatek(Lista *& element, int wartosc)
{
    // Tworzymy pusty element listy
    Lista * tmp = new Lista;
    tmp->liczba = wartosc;
    tmp->nastepny = NULL;
    // przepinanie nowego elementu na liste;
    if(element)
         tmp->nastepny = element;
    element = tmp;
}
void usunPierwszy(Lista *& element)
{
	//tworzymy pusty element typu Lista
	Lista *tmp = new Lista;
	//ten nowy element to ma byæ drugi element po pierwszym
	tmp = element->nastepny;
	//teraz jeszcze musimy ustawiæ nowy element jako pierwszy
	element = tmp;
}
int main()
{
    int liczba;
    Lista * lista = NULL;
    std::cout<<"Podaj cztery liczby - dodaje na koniec :\n";
   	for(int i=1; i<5; i++)
    {
		std::cin>>liczba;
        dodajNaKoniec(lista, liczba);
	} 
    std::cout<<"Wypisuje liczby:\n";
    wypiszListe(lista,1);
    std::cout<<"Dodaje pierwszy element i wypisuje liste.\n";
 	dodajNaPoczatek(lista, 15);
    wypiszListe(lista,1);
    for(int i=1;i<4;i++)
    {
    	std::cout<<"Usuwam pierwszy element i wypisuje wypisuje liste.\n";
    	usunPierwszy(lista);
    	wypiszListe(lista,1);
	}
}
