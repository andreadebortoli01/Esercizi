//proramma che prende in ingresso due misure dei cateti e da in uscita la lunghezza dle ipotenusa

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void lunghezzaIpotenusa(int& Cat2, int& Cat1)
{
    Cat1 = pow(Cat1, 2);
    Cat2 = pow(Cat2, 2);
    cout << setprecision(5) << sqrt(Cat1+Cat2);
}

int main()
{
    int Cat1, Cat2;

    cout << "inserire dimensione primo cateto ";
    cin >> Cat1;
    cout << "inserire dimensione secondo cateto ";
    cin >> Cat2;
    lunghezzaIpotenusa(Cat1, Cat2);
    return 0;
}
