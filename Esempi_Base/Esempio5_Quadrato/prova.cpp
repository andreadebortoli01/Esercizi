#include <iostream>
using namespace std;

void square(int &x)
{
    x=x*x;
}

int main(){
    int a= 3 ;
    square(a) ;
    cout << a;
}
