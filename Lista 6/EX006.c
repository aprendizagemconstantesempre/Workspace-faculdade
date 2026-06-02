/*
    Autor: Aguinaldo Alves
    Data: 09/05/2026
    Objetivo:   Buscar Elemento
                1. Leia um valor K.
                2. Leia um vetor A com N elementos.
                3. Verifique se K está presente em A.
                o Se estiver, imprima a posição.
                o Caso contrário, imprima: "Elemento K não encontrado".
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarar as variáveis
    int A[1000];            // Vetor que será preenchido automaticamente e que será verificado.
    int K;                  // Valor digitado pelo usuário que será procurado no vetor A.
    int i;                  // Controlador para o FOR
    int posicao;            // A posição que o K foi encontrado no vetor A

    // Inicializando as variáveis
    posicao = -1;

    // Populando o vetor A automaticamente.
    for (i = 0; i < 1000; i++) {
        A[i] = i + 2;
    }

    // Solicitando o valor de K para o usuário (valor que será procurado no vetor A).
    printf ("Entre com o número que deseja procurar............: ");
    scanf ("%d", &K);
    printf ("---------------------------------------------------- \n");
    
    // Processamento
    // Procurando o valor de K no vetor A.
    for (i = 0; i < 1000; i++) {
        if (A[i] == K) {
            posicao = i;
            break;          // Quando encontra o valor para de procurar.
        }
    }

    // Exibindo as informações para o usuário
    printf ("\n");

    // Checando se o vetor A foi populado corretamente conforme pensei.
    for (i = 0; i < 1000; i++) {
        printf ("O elemento da posição [%d] é %d \n", i, A[i]);
    }

    printf ("\n");

    if (posicao != -1) {
        printf ("A posição do elemento %d no vetor A é [%d] \n", K, posicao);
    } else {
        printf ("Elemento K não encontrado!");
        printf ("\n");
    }

    return 0;
}