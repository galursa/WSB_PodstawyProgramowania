#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    //chcemy pobrać liczbę i zamienić na nazwę miesiąca
    int miesiac;
    cout<<"Podaj numer miesiaca\n";
    cin>>miesiac;
    switch(miesiac)
    {
        case 1:
            cout<<"Styczen\n";
            break;
        case 2:
            cout<<"Luty\n";
            break;
        case 3:
            cout<<"Marzec\n";
            break;
        case 4:
            cout<<"Kwiecień\n";
            break;
        default:
            cout<<"Nierozpoznany wybór.\n";
    }
	return 0;
}
