#include <iostream>

/* podajemy boki tr�jk�ta 
  i sprawdzamy czy mo�na z nich zbudowa� tr�jk�t */
using namespace std;

int main(int argc, char** argv) {
	cout<<"Prosze podac boki\n";
	float bok1, bok2, bok3;
	cout<<"Bok1: ";
	cin>>bok1;
	cout<<"Bok2: ";
	cin>>bok2;
	cout<<"Bok3: ";
	cin>>bok3;    
	if(((bok1+bok2)>bok3)&&((bok1+bok3)>bok2)&&((bok2+bok3)>bok1)){
		cout<<"Z podanych bokow mozna zbudowa� trojkat";
	}else{
		cout<<"Z podanych bokow nie mo�na zbudowa� trojkat";
	}
	
	
	
	
	
	
	return 0;
}
