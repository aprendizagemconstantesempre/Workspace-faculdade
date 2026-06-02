/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Ordenando o Vetor
                1. Leia 6 números inteiros e armazene em um vetor.
                2. Mostre o vetor antes da ordenação.
                3. Ordene o vetor em ordem crescente.
                4. Mostre o vetor depois da ordenação.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int V[6];           // Vetor que irá guardar os 6 números digitados pelo usuário.
    int i;              // Controlador do FOR() principal.
    int j;              // Controlador do FOR() interno da ordenação.
    int menor;          // Vai guardar a posição do menor valor encontrado.
    int temp;           // Variável temporária para realizar a troca dos valores.

    // Lendo os 6 números para o vetor V
    printf ("*** INSIRA 6 NÚMEROS INTEIROS ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 6; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &V[i]);
    }

    // Exibindo o vetor antes da ordenação
    printf ("\n");
    printf ("*** VETOR ANTES DA ORDENAÇÃO ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 6; i++) {
        printf ("O número na posição [%d] é.........: %d\n", i, V[i]);
    }

    // Ordenando o vetor V com Selection Sort
    for (i = 0; i < 6; i++) {
        menor = i;          // Assume que o menor está na posição atual.
        for (j = i + 1; j < 6; j++) {
            if (V[j] < V[menor]) {
                menor = j;  // Atualiza a posição do menor valor encontrado.
            }
        }
        // Trocando o menor encontrado com a posição atual
        temp     = V[i];
        V[i]     = V[menor];
        V[menor] = temp;
    }

    // Exibindo o vetor depois da ordenação
    printf ("\n");
    printf ("*** VETOR DEPOIS DA ORDENAÇÃO ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 6; i++) {
        printf ("O número na posição [%d] é.........: %d\n", i, V[i]);
    }

    return 0;
}