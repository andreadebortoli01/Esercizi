#include <iostream>
using namespace std;

void Potenza(int Base, int Esp)
{
    int Ris;
    Ris = Base;
    for (int I = 1; I < Esp; I++) {
        Ris = Ris * Base;
    }
    cout << "Il risultato e': " << Ris;
}

int main()
{
    int Esp, Base;

    cout << "inserire base: ";
    cin >> Base;
    cout << "inserire esponente: ";
    cin >> Esp;

    Potenza(Base, Esp);

    return 0;
}