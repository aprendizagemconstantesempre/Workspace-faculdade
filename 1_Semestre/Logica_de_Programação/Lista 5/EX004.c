/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo:   Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20. Para
                verificar se o número é ímpar, efetuar dentro da malha a verificação lógica desta condição com a
                instrução IF, perguntando se o número é ímpar, sendo, mostre-o, não sendo, passe para o
                próximo passo.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int cont;

    for (cont = 0; cont <= 20; cont++){
        if (cont % 2 != 0) {
            printf ("O número %d é impar. \n", cont);
        }
    }
    return 0;
}