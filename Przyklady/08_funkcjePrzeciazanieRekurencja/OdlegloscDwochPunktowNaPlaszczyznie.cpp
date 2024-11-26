#include <iostream>
#include <cmath>

using namespace std;
//Liczymy odleglosc dwoch punktow na plaszczyznie
// P1(x1,y1), P2(x2,y2)
// d=sqrt((x2-x1)*x2-x1)+(y2-y1)*(y2-y1));

double odlegloscMiedzyPunktami(double x1 = 1.0, double y1 = 1.0, double x2 = 2.0, double y2 = 2.0);

int main()
{
    cout<<odlegloscMiedzyPunktami(4.0,2.0,3.0,2.0)<<"\n";
    cout<<odlegloscMiedzyPunktami(4.0,2.0,3.0)<<"\n";
    cout<<odlegloscMiedzyPunktami(4.0,2.0)<<"\n";
    cout<<odlegloscMiedzyPunktami(4.0)<<"\n";
    cout<<odlegloscMiedzyPunktami()<<"\n";
    return 0;
}

double odlegloscMiedzyPunktami(double x1, double y1, double x2, double y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
