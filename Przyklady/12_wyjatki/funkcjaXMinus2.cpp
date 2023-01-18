#include <iostream>

using namespace std;

float jedenPrzezXMinus2(float x)
{
    if(x==2)
        throw domain_error("Wybrano x ktory nie nalezy do dziedziny funkcji");
    return 1/(x-2);
}


int main()
{
    try{
        cout<<jedenPrzezXMinus2(3)<<"\n";
        cout<<jedenPrzezXMinus2(-3)<<"\n";
        cout<<jedenPrzezXMinus2(-2)<<"\n";
        cout<<jedenPrzezXMinus2(2)<<"\n";
        cout<<jedenPrzezXMinus2(-2)<<"\n";
    }
    catch(domain_error &blad){
        cout<<blad.what()<<"\n";
    }

    return 0;
}
