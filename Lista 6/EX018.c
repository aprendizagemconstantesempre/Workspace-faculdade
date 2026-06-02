/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Maior e Menor Valor
                1. Leia 7 números inteiros e armazene em um vetor.
                2. Mostre o maior valor e a posição onde ele aparece.
                3. Mostre o menor valor e a posição onde ele aparece.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int V[7];           // Vetor que irá guardar os 7 números digitados pelo usuário.
    int i;              // Controlador do FOR()
    int maior;          // Vai guardar o maior valor encontrado no vetor.
    int menor;          // Vai guardar o menor valor encontrado no vetor.
    int posMaior;       // Vai guardar a posição do maior valor.
    int posMenor;       // Vai guardar a posição do menor valor.

    // Lendo os 7 números para o vetor V
    printf ("*** INSIRA 7 NÚMEROS INTEIROS ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 7; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &V[i]);
    }

    // Inicializando as variáveis
    maior    = V[0];    // Assume que o primeiro elemento é o maior.
    menor    = V[0];    // Assume que o primeiro elemento é o menor.
    posMaior = 0;       // Assume que a posição do maior é a posição 0.
    posMenor = 0;       // Assume que a posição do menor é a posição 0.

    // Procurando o maior e o menor valor no vetor
    for (i = 1; i < 7; i++) {
        if (V[i] > maior) {
            maior    = V[i];    // Atualiza o maior valor.
            posMaior = i;       // Atualiza a posição do maior valor.
        }
        if (V[i] < menor) {
            menor    = V[i];    // Atualiza o menor valor.
            posMenor = i;       // Atualiza a posição do menor valor.
        }
    }

    // Exibindo os resultados para usuário.
    printf ("\n");
    printf ("*** RESULTADO ***\n");
    printf ("-----------------------------------\n");
    printf ("O maior valor é %d e está na posição [%d].\n", maior, posMaior);
    printf ("O menor valor é %d e está na posição [%d].\n", menor, posMenor);

    return 0;
}