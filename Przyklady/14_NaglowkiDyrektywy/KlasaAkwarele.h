/*
FarbyAkwarelowe
--
+producent: String
+kolor:int
+pigmenty: String
+cena: double
+trwalosc:String
+krycie:String
--
+info():void
+vat():double
+rachunek():void
*/

class FarbyAkwarelowe
{
public:
    std::string producent;
    int kolor;
    std::string pigmenty;
    double cena;
    std::string trwalosc;
    std::string krycie;
    FarbyAkwarelowe(std::string producentK,int kolorK, std::string pigmentyK, double cenaK, std::string trwaloscK, std::string krycieK);
    void info();
    double vat();
    void rachunek();
};

FarbyAkwarelowe::FarbyAkwarelowe(std::string producentK,int kolorK, std::string pigmentyK, double cenaK, std::string trwaloscK, std::string krycieK)
{
        producent = producentK;
        kolor = kolorK;
        pigmenty = pigmentyK;
        cena = cenaK;
        trwalosc = trwaloscK;
        krycie = krycieK;
}

void FarbyAkwarelowe::info()
{
    std::cout<<"Procudent: "<<producent<<" \n";
    std::cout<<"Kolor: "<<kolor<<" \n";
    std::cout<<"Pigmenty: "<<pigmenty<<" \n";
    std::cout<<"Cena: "<<cena<<" zl\n";
    std::cout<<"Trwalosc: "<<trwalosc<<"\n";
    std::cout<<"Krycie: "<<krycie<<"\n";
}

double FarbyAkwarelowe::vat()
{
    return 0.08*cena;
}

void FarbyAkwarelowe::rachunek()
{
    std::cout<<"Farba akwarelowa "<<producent<<" "<<kolor<<"\n";
    std::cout<<"Cena: "<<cena<<"zl \n";
    std::cout<<"W tym vat 8%: "<<vat()<<"\n";
}
