#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){ 
    int saldo_atual = -1;
    int total_aguas = 0;
    int total_refris = 0; 
    bool a_funcionar = true;
    string entrada;

    cout << "Aguarde o inicio da máquina...\n";
    
    while(a_funcionar){
        cin >> entrada;

        switch (saldo_atual){        
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
                    cout << "Saldo insuficiente!\n";
                }        
                break;

            case 50:
                if(entrada == "Q"){                    
                    cout << "Ainda há saldo na máquina, não é possível desligar\n";                
                } else if(entrada == "a50"){
                    saldo_atual = 100;
                    cout << "Saldo 1,00\n";
                } else if(entrada == "a100"){
                    saldo_atual = 150;                
                    cout << "Saldo 1,50\n";                
                } else if(entrada == "D"){
                    saldo_atual = 0;
                    cout << "Devolvido 0,50\n Saldo 0,00\n"; 
                } else {
                    saldo_atual = 50;
                    cout << "Saldo insuficiente!\n";
                }
                break;
            
            case 100:
                if(entrada == "Q"){
                    cout << "Ainda há saldo na máquina, não é possível desligar\n";
                } else if(entrada == "a50"){
                    saldo_atual = 150;
                    cout << "Saldo 1,50\n";
                } else if(entrada == "a100"){
                    saldo_atual = 200;
                    cout << "Saldo 2,00\n";
                } else if(entrada == "D"){
                    saldo_atual = 0;
                    cout << "Devolvido 1,00\n Saldo 0,00\n"; 
                } else {
                    saldo_atual = 100;
                    cout << "Saldo insuficiente!\n";
                }
                break;

            case 150:
                if(entrada == "Q"){
                    cout << "Ainda há saldo na máquina, não é possível desligar\n";
                } else if(entrada == "a50"){
                    saldo_atual = 200;
                    cout << "Saldo 2,00\n";
                } else if(entrada == "a100"){
                    saldo_atual = 250;
                    cout << "Saldo 2,50\n";
                } else if(entrada == "D"){
                    saldo_atual = 0;
                    cout << "Devolvido 1,50\n Saldo 0,00\n";
                } else if (entrada == "A"){                    
                    saldo_atual = 0;                   
                    cout << "Água comprada\n Saldo 0,00\n";
                } else {
                    saldo_atual = 150;
                    cout << "Saldo insuficiente!\n";
                }                
                break;

        }
            

        
        
        
    }

    


}