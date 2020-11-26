#include <iostream>
using namespace std;
                                //ESERCIZIO CHE CHIEDE NUMERI INTERI E CALCOLA LA MEDIA DEI NUMERI PARI QUANDO
                                //QUANDO L'UTENTE INSERISCE 0 CALCOLA IL RISULTATO
int main()
{
    int IN ;                    //Inizializzazione variabili intere
    int sum=0 ;
    int n=0 ;

    cout <<"Inserire numero ";  //Rischiesta primo numero
    cin >> IN ;                 //
    
    while(IN !=0) {             //Numero diverso da 0
        if(IN%2==0){            //Aggiunta dei numeri pari alla media
            sum += IN;
            n++;
        }
        cout <<"Inserire numero ";  //Richiesta del numeri successivi da inserire alla media
        cin >> IN ;
    }
    cout <<"Risultato " <<sum/n << "\n";    //Risultato della media
return 0;
}