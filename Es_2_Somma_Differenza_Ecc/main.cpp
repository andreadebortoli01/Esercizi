#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    cout <<"Inserire prima cifra  ";
    cin >> x;
    cout <<"Inserire seconda cifra  ";
    cin >> y;
   

    cout << "Somma= " << x+y << "\n" ;
    cout << "Differenza= " << x-y << "\n" ;
    cout << "Moltiplicazione= " << x*y << "\n" ;
    cout << "Divisione= " << x/y << " resto= " << x % y << "\n" ;

return 0;
}
