#include <iostream>
#include <ctime>
using namespace std;
// sortowanie przez wstawianie

int main()
{
    srand(time(NULL));

    int rozmiar = 10;
    int losowe[rozmiar];
    cout<<"Tablica przed sortowaniem\n";
    for(int i=0; i<rozmiar; i++ )
    {
         losowe[i] = rand()%100;
         cout<<losowe[i]<<" ";
    }
    cout<<"\n";
    for(int i=1; i<rozmiar; i++ )
    {
        int el = losowe[i];
        int j=i-1;
        while((losowe[j]>el)&&(j>=0))
        {
            losowe[j+1] = losowe[j];
            j--;
        }
        losowe[j+1] = el;
    }
    for(int i=0; i<rozmiar; i++ )
    {
         cout<<losowe[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
