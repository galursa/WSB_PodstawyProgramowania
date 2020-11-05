#include <iostream>

/*
	Pobieramy liczbê i zamieniamy na nazwê miesi¹ca
*/
using namespace std;
int main(int argc, char** argv) {
	cout<<"Prosze podac miesiac numerycznie: ";
	int miesiac;
	cin>>miesiac;
	switch(miesiac){
		case 1:
			cout<<"styczen";
			break;
		case 2:
			cout<<"luty";
			break;
		case 3:
			cout<<"marzec";
			break;
		case 4:
			cout<<"kwiecien";
			break;
		case 5:
			cout<<"maj";
			break;
		case 6:
			cout<<"czerwiec";
			break;
		case 7:
			cout<<"lipiec";
			break;
		case 8:
			cout<<"sierpien";
			break;
		case 9:
			cout<<"wrzesien";
			break;
		case 10:
			cout<<"pazdziernik";
			break;
		case 11:
			cout<<"listopad";
			break;
		case 12:
			cout<<"grudzien";
			break;
		default:
			cout<<"Nie rozpoznany wybor";
	}
	
	
	
	
	
	
	
	return 0;
}
