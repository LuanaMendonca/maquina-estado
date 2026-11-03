#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int saldo_atual = -1;    
    bool a_funcionar = true;
    string entrada;

    cout << "Aguarde o inicio da máquina...\n";
    
    while(a_funcionar){
        cin >> entrada;

        switch (saldo_atual)
        {
        case -1:
            if(entrada == "Q"){
                saldo_atual = 0;
                cout << "Máquina Ligada\n Saldo: 0,00\n";
            } else {
                cout << "Máquina Desligada";
            }
            break;

        case 0:
            if(entrada == "0"){
                saldo_atual = -1;
                cout << "Máquina Desligada";
            } else if(entrada == "a50") {
                saldo_atual = 50;
                cout << "Saldo 0,50\n";
            } else if(entrada == "a100"){
                saldo_atual = 100;
                cout << "Saldo 1,00\n";                
            } else {
                saldo_atual = 0;
                cout << "Saldo insuficiente";
            }        
            break;

        
        default:
            break;
        }
    }

    


}