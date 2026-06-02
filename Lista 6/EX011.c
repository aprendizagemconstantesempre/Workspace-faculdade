/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Exercício 11 – Produto Escalar
                1. Leia dois vetores X e Y, ambos com 10 elementos.
                2. Calcule o produto escalar:
                    Produto = X[1]*Y[1] + X[2]*Y[2] + ... + X[10]*Y[10]
                3. Imprima o resultado.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int x[10];              // Vetor x que receberá 10 números inseridos pelo usuário.
    int y[10];              // Vetor y que receberá 10 números inseridos pelo usuário.
    int i;                  // Controlador para o FOR()
    int produto;            // Irá armazenar o resultado calculado.

    // Inicializando as variáveis
    produto = 0;

    // Lendo os números do vetor x
    printf ("*** NÚMEROS PARA O VETOR X ***\n");
    printf ("-----------------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf ("Digite um número para posição [%d]......: ", i);
        scanf ("%d", &x[i]);
    }

    // Lendo os números do vetor y
    printf ("\n");
    printf ("*** NÚMEROS PARA O VETOR Y ***\n");
    printf ("-----------------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf ("Digite um número para posição [%d]......: ", i);
        scanf ("%d", &y[i]);
    }

    // Calculando a equação proposta
    for (i = 0; i < 10; i++) {
        produto = produto + 
        x[i] * y[i];
    }

    // Exibindo o resultado escalar
    printf ("\n");
    printf ("O resultado escalar entre os verores X e Y, é.............: %d \n", produto);

    return 0;
}