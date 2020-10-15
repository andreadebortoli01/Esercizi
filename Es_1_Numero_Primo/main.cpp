#include "prime.h"
#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "inserire numero intero positivo ";
    cin >> n;

    if (isPrime(n))
        cout << n << " e un numero primo";
    else
        cout << n << " non e un numero primo";
}