/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Números Pares
                1. Leia 10 números inteiros e armazene em um vetor.
                2. Mostre apenas os números pares do vetor.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int V[10];          // Vetor que irá guardar os 10 números digitados pelo usuário.
    int i;              // Controlador do FOR()

    // Lendo os 10 números para o vetor V
    printf ("*** INSIRA 10 NÚMEROS INTEIROS ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &V[i]);
    }

    // Exibindo os números pares do vetor V
    printf ("\n");
    printf ("*** NÚMEROS PARES DO VETOR ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 10; i++) {
        if (V[i] % 2 == 0) {
            printf ("O número %d, na posição [%d], é par!\n", V[i], i);
        }
    }

    return 0;
}