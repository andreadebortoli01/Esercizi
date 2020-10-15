#include <iostream>
using namespace std;

int main()
{
    int IN ;
    int sum=0 ;
    int n=0 ;
    cout <<"Inserire numero \n";
    cin >> IN ;
    
    while(IN !=0) {
        if(IN%2==0){
            sum += IN;
            n++;
        }
        cout <<"Inserire numero \n";
        cin >> IN ;
    }
    cout <<"Risultato " <<sum/n << "\n";
}