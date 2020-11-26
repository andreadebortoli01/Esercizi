// Scrivere un programma che prende due numeri interi e determina se il primo è un multiplo del secondo
 
#include <iostream>
using namespace std;

int main(){
    int a , b;
    cout << "inserire primo numero intero a=";
    cin >> a;
    cout <<"\n" << "inserire secondo numero intero b=";
    cin >> b;

    
    if(a%b!=0) {
        cout << "il primo numero non e multiplo del secondo";
        }
    else{
        cout << "il primo numero e multiplo del secondo";
    }
    
return 0;
}