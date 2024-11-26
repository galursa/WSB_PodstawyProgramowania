#include <iostream>
#include <cmath>
using namespace std;
//chcemy zamienic nazwe sqrt na pierwiastek

inline double pierwiastek(double x)
{
    return sqrt(x);
}

int main()
{
    cout << pierwiastek(4) << endl;
    cout << pierwiastek(5.3) << endl;
    cout << pierwiastek(6) << endl;
    return 0;
}
