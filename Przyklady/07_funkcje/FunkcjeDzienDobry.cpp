#include <iostream>


/*
Napisa� funkcj�, kt�ra przyjmuje jako parametr liczb� i wy�wietla napis �Dzien dobry�
 tyle razy ile wynosi ta liczba
*/

void dzienDobry()
{
    std::cout<<"Dzien dobry \n";
    std::cout<<"\n";
}

void wieleDzienDobry(int ilosc)
{
    for(int i=1; i<=ilosc; i++ )
    {
        std::cout<<"Dzien dobry \n";
    }
    std::cout<<"\n";
}


int main()
{
    dzienDobry();
    wieleDzienDobry(3);
    wieleDzienDobry(6);
    return 0;
}

