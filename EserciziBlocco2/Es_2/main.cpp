#include <iostream>
using namespace std;

int main () 
{
  int max=0;
  int array[10];
  for(int i=0;i<10;i++){
    cout <<"inserire numero";
    cin >>array[i];
   
   if (array[i] > max) {
      max = array[i];
    }
  }
  cout <<"il numero massimo inserito e':" << max;
  return 0;
}

