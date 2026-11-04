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
            if(entrada == "Q"){
                saldo_atual = -1;
                cout << "Máquina Desligada\n";
            } else if(entrada == "a50") {
                saldo_atual = 50;
                cout << "Saldo 0,50\n";
            } else if(entrada == "a100"){
                saldo_atual = 100;
                cout << "Saldo 1,00\n";                
            } else if(entrada == "D"){
                saldo_atual = 0;
                cout << "Devolvido 0,00\n Saldo 0,00\n"; 
            } else {
                saldo_atual = 0;
                cout << "Saldo insuficiente\n";
            }        
            break;

        case 50:
            if(entrada == "Q"){
                saldo_atual = 50;
                cout << "Ainda há saldo na máquina, não é possível desligar\n";                
            } else if(entrada == "a50"){
                saldo_atual = 100;
                cout << "Saldo 1,00\n";
            } else if(entrada == "a100"){
                saldo_atual = 150;                
                cout << "Saldo 1,50\n";                
            } 

            }
            

        
        default:
            break;
        }
    }

    


}