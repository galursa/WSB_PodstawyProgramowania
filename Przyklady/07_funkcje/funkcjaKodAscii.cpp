#include <iostream>
/* napiszemy funkcjê, która przyjmuje znak jako parametr
  i wypisuje jego kod ascii
*/
void wypiszKod(char znak)
{
	//chcemy wyœwietlaæ gdy mamy A-Z a-z 0-9
	// ((znak>='A')&&(znak<='Z'))
	//((znak>='a')&&(znak<='z'))
	//((znak>='0')&&(znak<='9'))
	if(((znak>='A')&&(znak<='Z'))||((znak>='a')&&(znak<='z'))||((znak>='0')&&(znak<='9')))
		std::cout<<"Kod ascii"<<(int)znak<<"\n";
	else
		return;	
}
using namespace std;
int main(int argc, char** argv) {
	char znak;
	cout<<"Podaj znak:\n";
	cin >>znak;
	wypiszKod(znak);
	return 0;
}
