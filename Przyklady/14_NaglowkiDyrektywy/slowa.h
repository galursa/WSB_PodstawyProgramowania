#ifndef SLOWA_H_INCLUDED
#define SLOWA_H_INCLUDED
#include <iostream>

class Wyrazy
{
    private:
        std::string wyraz1;
        std::string wyraz2;
    public:
        Wyrazy();
        Wyrazy(std::string w1, std::string w2);
        void porownajPierwszeLitery();
        void porownajOstatnieLitery();
        bool czyDlugosciTakieSame();
};

Wyrazy::Wyrazy()
{
    wyraz1 = "Ala";
    wyraz2 = "kotek";
}

Wyrazy::Wyrazy(std::string w1, std::string w2)
{
    wyraz1 = w1;
    wyraz2 = w2;
}

void Wyrazy::porownajPierwszeLitery()
{
    std::cout<<wyraz1[0]<<", "<<wyraz2[0]<<"\n";
    if(wyraz1[0]==wyraz2[0])
    {
       std::cout<<"Pierwsze litery sa takie same. \n";
    }else{
       std::cout<<"Pierwsze litery sa rozne. \n";
    }
}


void Wyrazy::porownajOstatnieLitery()
{

    int dl1 = wyraz1.length()-1;
    int dl2 = wyraz2.length()-1;
    std::cout<<wyraz1[dl1]<<", "<<wyraz2[dl2]<<"\n";
    if(wyraz1[dl1]==wyraz2[dl2])
    {
       std::cout<<"Ostatnie litery sa takie same. \n";
    }else{
       std::cout<<"Ostatnie litery sa rozne. \n";
    }

}

bool Wyrazy::czyDlugosciTakieSame()
{
    return wyraz1.length()==wyraz2.length()? true:false;
}


#endif // SLOWA_H_INCLUDED
