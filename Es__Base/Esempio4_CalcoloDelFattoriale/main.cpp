#include <iostream>
using namespace std;
//calcolo del fattoriale

long long fact(int x) 
{
  long long fatt = 1;
  for (int i=1; i<=x; i++)
    fatt *= i;
  return fatt;
}

int main() 
{
  int  num;
  long long fattoriale;
  
  cout << "Dammi il numero: ";
  cin >> num;
  fattoriale=fact(num);
  cout  << "Fact = "  << fattoriale   << endl;
  return 0;
}
