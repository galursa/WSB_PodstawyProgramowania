class Sluchawki
{
public:
    std::string nazwa;
    std::string model;
    double cenaBazowa;
    std::string rodzajWtyku;
    std::string czyPrzewodowe;
    std::string pasmoPrzenoszenia;
    bool modulSterowania;
    bool czyMaMikrofon;
    std::string ANC;
    double cenaZ30dni;
    //todo: konstruktor
    void info();
    void drukujEtykiete();
    double vat(double wielkosc);
    double cenaZVAT();
};

void Sluchawki::info()
{
    std::cout<<"Nazwa: "<<nazwa<<"\n";
    std::cout<<"Model: "<<model<<"\n";
    std::cout<<"Rodzaj wtyku: "<<rodzajWtyku<<" \n";
    std::cout<<czyPrzewodowe<<"\n";
    std::cout<<"Pasmo przenoszenia: "<<pasmoPrzenoszenia<<"\n";
    std::cout<<"Czy posiada modul sterowania: ";
    if(modulSterowania)
        std::cout<<"tak";
    else
        std::cout<<"nie";
    std::cout<<"\n";
    std::cout<<"Czy posiada mikrofon: ";
    if(czyMaMikrofon)
         std::cout<<"tak";
    else
        std::cout<<"nie";
    std::cout<<"\n";
    std::cout<<"ANC: "<<ANC<<" \n";
    std::cout<<"Cena: "<<cenaBazowa<<" zl\n";
    std::cout<<"Cena z ostatnich 30 dni: "<<cenaZ30dni<<" zl\n";
}

void Sluchawki::drukujEtykiete()
{
    std::cout<<"Nazwa: "<<nazwa<<"\n";
    std::cout<<"Model: "<<model<<"\n";
    std::cout<<"Cena: "<<cenaBazowa<<" zl\n";
    std::cout<<czyPrzewodowe<<"\n";
    std::cout<<"Cena z ostatnich 30 dni: "<<cenaZ30dni<<" zl\n";
}

double Sluchawki::vat(double wielkosc)
{
    return wielkosc*cenaBazowa;
}

double Sluchawki::cenaZVAT()
{
        return cenaBazowa+Sluchawki::vat(0.07);
}
