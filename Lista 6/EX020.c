/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Trocar Valores
                1. Leia 2 vetores A e B, ambos com 5 posições.
                2. Troque os valores entre eles.
                3. Mostre os dois vetores após a troca.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int A[5];           // Vetor A que irá guardar os 5 números digitados pelo usuário.
    int B[5];           // Vetor B que irá guardar os 5 números digitados pelo usuário.
    int temp;           // Variável temporária para realizar a troca dos valores.
    int i;              // Controlador do FOR()

    // Lendo os 5 números para o vetor A
    printf ("*** INSIRA 5 NÚMEROS PARA O VETOR A ***\n");
    printf ("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &A[i]);
    }

    // Lendo os 5 números para o vetor B
    printf ("\n");
    printf ("*** INSIRA 5 NÚMEROS PARA O VETOR B ***\n");
    printf ("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &B[i]);
    }

    // Trocando os valores entre os vetores A e B
    for (i = 0; i < 5; i++) {
        temp = A[i];    // Guarda o valor de A temporariamente.
        A[i] = B[i];    // A recebe o valor de B.
        B[i] = temp;    // B recebe o valor que estava em A.
    }

    // Exibindo os vetores após a troca
    printf ("\n");
    printf ("*** VETOR A APÓS A TROCA ***\n");
    printf ("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("O número na posição [%d] é.........: %d\n", i, A[i]);
    }

    printf ("\n");
    printf ("*** VETOR B APÓS A TROCA ***\n");
    printf ("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("O número na posição [%d] é.........: %d\n", i, B[i]);
    }

    return 0;
}