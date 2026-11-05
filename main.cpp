
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Funcao para mostrar valores em reais
void mostrar_valor(int valor) {
    cout << "R$ " << valor / 100 << ","
         << setw(2) << setfill('0') << valor % 100
         << setfill(' ');
}

int main() {
    int saldo_atual = -1;
    int total_aguas = 0;
    int total_refris = 0;
    int total_vendas = 0;
    int deposito = 0;

    bool a_funcionar = true;
    string entrada;

    cout << "Aguarde o inicio da maquina...\n";

    while (a_funcionar) {
        cin >> entrada;

        // Estado: maquina desligada
        if (saldo_atual == -1) {
            if (entrada == "Q") {
                saldo_atual = 0;
                cout << "Maquina ligada!\n";
                cout << "Saldo: ";
                mostrar_valor(saldo_atual);
                cout << "\n";
            } else {
                cout << "Maquina desligada.\n";
            }
        }

        // Estados: maquina ligada
        else {
            switch (saldo_atual) {

                case 0:
                case 50:
                case 100:
                case 150:
                case 200:
                case 250:

                    if (entrada == "Q") {
                        if (saldo_atual == 0) {
                            cout << "\n--- RELATORIO DA MAQUINA ---\n";

                            cout << "Total de aguas vendidas: "
                                 << total_aguas << "\n";

                            cout << "Total de refrigerantes vendidos: "
                                 << total_refris << "\n";

                            cout << "Total de vendas: ";
                            mostrar_valor(total_vendas);
                            cout << "\n";

                            cout << "Moedas armazenadas: ";
                            mostrar_valor(deposito);
                            cout << "\n";

                            saldo_atual = -1;
                            cout << "Maquina desligada.\n";
                        } else {
                            cout << "Ainda existe saldo na maquina. "
                                 << "Nao e possivel desligar.\n";
                        }
                    }

                    else if (entrada == "I50") {
                        if (saldo_atual + 50 <= 250) {
                            saldo_atual += 50;
                            deposito += 50;

                            cout << "Saldo: ";
                            mostrar_valor(saldo_atual);
                            cout << "\n";
                        } else {
                            cout << "Limite excedido! Moeda devolvida.\n";
                        }
                    }

                    else if (entrada == "I100") {
                        if (saldo_atual + 100 <= 250) {
                            saldo_atual += 100;
                            deposito += 100;

                            cout << "Saldo: ";
                            mostrar_valor(saldo_atual);
                            cout << "\n";
                        } else {
                            cout << "Limite excedido! Moeda devolvida.\n";
                        }
                    }

                    else if (entrada == "A") {
                        if (saldo_atual >= 150) {
                            saldo_atual -= 150;
                            total_aguas++;
                            total_vendas += 150;

                            cout << "Agua comprada!\n";
                            cout << "Saldo restante: ";
                            mostrar_valor(saldo_atual);
                            cout << "\n";
                        } else {
                            cout << "Saldo insuficiente para comprar agua.\n";
                        }
                    }

                    else if (entrada == "R") {
                        if (saldo_atual >= 200) {
                            saldo_atual -= 200;
                            total_refris++;
                            total_vendas += 200;

                            cout << "Refrigerante comprado!\n";
                            cout << "Saldo restante: ";
                            mostrar_valor(saldo_atual);
                            cout << "\n";
                        } else {
                            cout << "Saldo insuficiente para comprar refrigerante.\n";
                        }
                    }

                    else if (entrada == "D") {
                        cout << "Valor devolvido: ";
                        mostrar_valor(saldo_atual);
                        cout << "\n";

                        deposito -= saldo_atual;
                        saldo_atual = 0;

                        cout << "Saldo atual: ";
                        mostrar_valor(saldo_atual);
                        cout << "\n";
                    }

                    else {
                        cout << "Entrada invalida!\n";
                    }

                    break;

                default:
                    cout << "Estado invalido!\n";
                    break;
            }
        }
    }

    return 0;
}