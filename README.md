# Trabalho 4 – Máquina de Vender Bebidas

**Disciplina:** DIM0176 – Programação 1  
**Universidade:** Universidade Federal do Rio Grande do Norte (UFRN)  
**Professor:** Martin A. Musicante

## 1. Integrantes e participação

- Erick Calixto – 100%
- Luana Mendonça – 100%

## 2. Descrição do projeto

Este projeto consiste no desenvolvimento de um programa em C++ para controlar uma máquina de venda de bebidas.

A máquina permite a inserção de moedas de R$ 0,50 e R$ 1,00, com limite máximo de R$ 2,50 por usuário.

O cliente pode escolher entre duas bebidas:

- **Água (A):** R$ 1,50.
- **Refrigerante (R):** R$ 2,00.

O programa também permite devolver o saldo disponível e controlar o funcionamento da máquina por meio dos botões de ligar e desligar.

## 3. Funcionamento da máquina

A máquina possui as seguintes entradas:

| Entrada | Função |
|---|---|
| `Q` | Liga ou desliga a máquina |
| `I50` | Insere uma moeda de R$ 0,50 |
| `I100` | Insere uma moeda de R$ 1,00 |
| `A` | Compra uma água |
| `R` | Compra um refrigerante |
| `D` | Devolve o saldo disponível |

Quando uma moeda ultrapassa o limite de R$ 2,50, ela é devolvida automaticamente.

Após uma compra, o valor restante permanece disponível para outras compras. O cliente também pode solicitar a devolução desse valor utilizando o botão `D`.

A máquina só pode ser desligada quando não houver saldo pendente para devolução.

## 4. Estados da máquina

A máquina foi representada utilizando um tipo enumerado (`enum`), com os seguintes estados:

| Estado | Saldo |
|---|---:|
| DESLIGADA | — |
| S0 | R$ 0,00 |
| S50 | R$ 0,50 |
| S100 | R$ 1,00 |
| S150 | R$ 1,50 |
| S200 | R$ 2,00 |
| S250 | R$ 2,50 |

Cada estado representa uma situação possível da máquina durante seu funcionamento.

### Diagrama de Estados (AFD)

![Diagrama de Estados da Máquina](diagrama(1).png)

As transições acontecem de acordo com as entradas recebidas, atualizando o saldo e o estado correspondente.

## 5. Tecnologias utilizadas

- Linguagem de programação C++.
- Biblioteca `iostream` para entrada e saída de dados.
- Biblioteca `string` para trabalhar com as entradas do usuário.
- Git para controle de versão do projeto.

## 6. Como compilar e executar

É necessário ter um compilador C++ instalado, como o G++.

No terminal, acesse a pasta do projeto e execute:

```bash
g++ main.cpp -o maquina
```

Para executar no Linux:

```bash
./maquina
```

No Windows:

```bash
maquina.exe
```

## 7. Limitações do projeto

O programa considera que a máquina sempre possui bebidas e moedas suficientes para atender às operações.

Não são controlados os estoques de água e refrigerante, nem a quantidade física de moedas de cada valor.

## 8. Dificuldades de aprendizagem

Durante o desenvolvimento do projeto, uma das principais dificuldades foi compreender como representar o funcionamento da máquina por meio de um autômato finito determinístico (AFD).

Também foi necessário compreender como as entradas do usuário provocam mudanças de estado, principalmente nas operações de inserção de moedas, compra de bebidas e devolução de saldo.

Outra dificuldade foi adaptar a primeira implementação, inicialmente desenvolvida com estruturas condicionais, para representar os estados da máquina.

## 9. Participação e reconhecimento de assistência

As porcentagens de participação dos integrantes representam a contribuição de cada um no desenvolvimento do projeto.

As orientações externas utilizadas durante o desenvolvimento devem ser reconhecidas, conforme as regras de autoria e colaboração estabelecidas no enunciado da atividade.
