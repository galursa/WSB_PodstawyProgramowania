#include <iostream>
#include <fstream>

/*




zapiszDoPliku()
odczytajZpliku()

*/

void generujCiag(double * tablicaCiag, double pierwszyWyraz, double roznica, int n, int rozmiar)
{
    if(n<=rozmiar)
    {
        for(int i=0; i<rozmiar; i++)
        {
            tablicaCiag[i]=0;
        }
        tablicaCiag[0]=pierwszyWyraz;
        for(int i=1; i<n; i++)
        {
            tablicaCiag[i] = tablicaCiag[i-1]+roznica;
        }
    }else{
        std::cout<<"Liczba elementow przekracza rozmiar tablicy\n";
    }
}

void wypiszCiag(double *tablicaCiag, int rozmiar )
{
    for(int i=0; i<rozmiar; i++)
    {
        if(tablicaCiag[i]==0)
            break;
        std::cout<<tablicaCiag[i]<<" ";

    }
    std::cout<<"\n";
}

double entyWyraz(double pierwszyWyraz, double roznica, int n)
{
    return pierwszyWyraz+(n-1)*roznica;
}

double entyWyraz(double katyWyraz,double roznica, int n, int k)
{
    return katyWyraz+(n-k)*roznica;
}

double sumaNWyrazow(double pierwszyWyraz, double entyWyraz, int n)
{
    return ((pierwszyWyraz+entyWyraz)/2)*n;
}

double entyWyraz(double SumaN, double SumaN_1)
{
    return SumaN - SumaN_1;
}

double obliczRoznice(double * tablicaCiag,int rozmiar)
{
    if ((tablicaCiag[0]!=0)&&(tablicaCiag[1]!=0))
    {
        return tablicaCiag[1]-tablicaCiag[0];
    } else {
        return 0;
    }
}

void zapisz(double * tablicaCiag, int rozmiar)
{
    std::ofstream zapiszPlik("ciag.txt");
    zapiszPlik << rozmiar;
    zapiszPlik << "\n";
    for(int i=0; i<rozmiar; i++)
    {
        zapiszPlik<<tablicaCiag[i];
        zapiszPlik<<" ";
    }
}

void odczytaj(double * tablicaCiag, int &rozmiar)
{
    std::ifstream odczytajPlik("ciag.txt");
    if(odczytajPlik.fail())
    {
        std::cout<<"Nie mozna otworzyc pliku\n";
        return;
    }
    odczytajPlik >> rozmiar;
    for (int i=0; i<rozmiar; i++)
    {
        odczytajPlik >> tablicaCiag[i];
    }
}

void menu(double * tablicaCiag, double pierwszyWyraz, double roznica, int n, int rozmiar)
{
    int wybor;
    while(true)
    {
      std::cout<<"Wybierz opcje: \n";
      std::cout<<"1. Generuje ciag \n";
      std::cout<<"2. Oblicz Roznice \n";
      std::cout<<"3. Oblicz n-ty wyraz \n";
      std::cout<<"4. Oblicz sume \n";
      std::cout<<"5. Odczytaj z pliku\n";
      std::cout<<"6. Zapisz do pliku\n";
      std::cout<<"Zakoncz - dowolny znak\n";
      std::cout<<"Co wybierasz: \n";
      std::cin >> wybor;
      switch(wybor)
      {
      case 1:
          generujCiag(tablicaCiag, pierwszyWyraz,roznica,n,rozmiar);
          wypiszCiag(tablicaCiag,rozmiar);
          break;
      case 2:
          std::cout<<"r = "<<obliczRoznice(tablicaCiag,rozmiar)<<"\n";
          break;
      case 3:
          std::cout<<"an = "<<entyWyraz(pierwszyWyraz,roznica, n)<<"\n";
          break;
      case 4:
          std::cout<<"Sn = "<<sumaNWyrazow(pierwszyWyraz,entyWyraz(pierwszyWyraz,roznica, n),n)<<"\n";
          break;
      case 5:
          odczytaj(tablicaCiag, rozmiar);
          wypiszCiag(tablicaCiag,rozmiar);
          break;
      case 6:
          zapisz(tablicaCiag,rozmiar);
          std::cout<<"Zapisano do pliku\n";
          break;
      default:
        std::cout<<"Nierozpoznany wybor\n";
      }
      if (!((wybor>=1)&&(wybor<=6)))
      {
          std::cout<<"Konczymy dzialanie programu\n";
          break;
      }
    }
}

using namespace std;

int main()
{
    int rozmiar = 10;
    double ciag[rozmiar];
    menu(ciag,1,1,5,rozmiar);
 /*   generujCiag(ciag,1,1,5,rozmiar);
    wypiszCiag(ciag,rozmiar);
    cout<<"En-ty wyraz: "<<entyWyraz(ciag[0],1,6)<<"\n";
    cout<<"Suma 5 wyrazow: "<<sumaNWyrazow(1,5,5)<<"\n";
    cout<<"Roznica :"<<obliczRoznice(ciag,rozmiar)<<"\n";
    */
    return 0;
}
