/*
SUP che legge 10 numeri dall'utente e ne calcola la somma. Fermarsi a leggere numeri quando l'utente
inserisce tutti i 10 numeri oppure quando inserisce 0, stabilendo un numero massimo a priori.
*/

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int arr[10];

    for (int i = 0; i < 10; i++) {

        cout << "inserire numero: ";
        cin >> arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] == 0) {
            cout << "il numero massimo digitato e': " << max;
            return 0;
        }
    }
    cout << "il numero massimo digitato e': " << max;
    return 0;
}