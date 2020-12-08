#include <iostream>
using namespace std;

int main(int argc ,const char* argv[]){
    int find=3;
    int change=-1;
    int Intarray[argc];
    for(int i=1; i<argc ;i++){
        Intarray[i]= atoi(argv[i]);
        if(Intarray[i]==find){
            Intarray[i]=change;
        }
        cout<<Intarray[i]<<" ";
    }
    return 0;
}