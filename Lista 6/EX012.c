/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Ordenação
                1. Leia um vetor A com N elementos inteiros.
                2. Imprima o vetor original.
                3. Ordene o vetor em ordem crescente.
                4. Imprima o vetor ordenado.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <stdlib.h>     // Vou usar para limpar a tela e exibir somente as saídas.

// Programa
int main () {
    int A[20];  // Vetor que irá guardar os números digitados pelo usuário (desordenado).
    int B[20];  // Vai guardar os números do vetor A de forma ordenada de menor para o maior.
    int menor;  // Vai guardar o número menor para fazer a ordenação.
    int i;      // Controlador para o FOR()
    int j;      // Controlador para o FOR() da ordenação.
    int temp;   // Será utilizada temporariamente para ordençao.

    // Lendo os números para o Vetor A
    printf ("*** NÚMEROS DESORDENADOS PARA O VETOR A ***\n");
    printf ("-------------------------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf ("Digite o número para posição [%d].........: ", i);
        scanf ("%d", &A[i]);
    }

    // Processamento
    // Primeiro: vamos espelhar os números do vetor A para o vetor B
    for (i = 0; i < 20; i++) {
        B[i] = A[i];
    }

    // Segundo: Vamor ordenar os números que estão no vetor B
    for (i = 0; i < 20; i++) {
        menor = i;      // Estou definido que a primeira posição e a menor para efeito de comparação.
        for (j = i + 1; j < 20; j++) {      // Começa em i + 1, pega o número da frente e compara com o anterior.
            if (B[j] < B[menor]) {
            menor = j;
            }       
        }
        // Fazendo ordenação
        temp = B[i];
        B[i] = B[menor];
        B[menor] = temp;
    }

    // Limpando a tela do sistema
    #ifdef _WIN32
        system("cls");    // limpa a tela se o sistema operacional for Windows 32 ou 64 bits.
    #else
        system("clear");  // limpa a tela se o sistema for Linux.
    #endif


    // Exibindo as informações para o usuário
    printf ("\n");
    printf ("*** NÚMEROS DO VETOR A - DESORDENADOS ***\n");
    printf ("-------------------------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf ("O número na posição [%d] é ...............: %d \n", i, A[i]);
    }

    printf ("\n");
    printf ("*** NÚMEROS DO VETOR B - ORDENADOS ***\n");
    printf ("-------------------------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf ("O número na posição [%d] é ...............: %d \n", i, B[i]);
    }

    return 0;
}