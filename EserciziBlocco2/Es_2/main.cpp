//Dato in ingresso da riga di comando un array, stamparlo in ordine inverso
#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    for (int c = argc-1; c >= 1; c--) {
        cout << argv[c] << " ";
    }
    return 0;
}
