#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	char znak='a';	
	while(znak!='z')
	{		
		cout<<"Witamy w menu. Wybierz litere a, b lub c\n";
		cout<<"a - slowo na a\n";
		cout<<"b - slowo na b\n";
		cout<<"c - slowo na c\n";
		cin>>znak;
		switch(znak)
		{
			case 'a':
				cout<<"alarm\n";
				break;
			case 'b':
				cout<<"brazowy\n";
				break;
			case 'c':
				cout<<"cieplo\n";
				break;
			case 'z':
				break;
			default:
				cout<<"Nierozponany wybor";
		}
		system("pause");
		system("cls");
	}	
	return 0;
}
