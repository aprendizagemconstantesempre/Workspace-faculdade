/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Separar Sinais
                1. Leia um vetor V com N números inteiros.
                2. Separe os elementos:
                    Positivos → vetor A
                    Negativos → vetor B
                3. Conte os elementos nulos (zero), mas não os inclua nos vetores A ou B.
                4. Imprima V, A, B e a quantidade de elementos nulos.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declaração das variáveis
    int V[10];              // Vetor que irá guardar os números positivos, nulos e negativos, inseridos pelo usuário.
    int A[10];              // Vetor que irá guardar os números positivos.
    int B[10];              // Vetor que irá guardar os números negativos e nulos.
    int i;                  // Controlador para o FOR() do vetor V
    int ai;                 // Controlador para o FOR() do vetor A, pois ao usar o mesmo gerou sugeira de memória. Os vetores tem tamanhos diferentes.
    int bi;                 // Controlador para o For() do vetor B, pois ao usar o mesmo gerou sugeira de memória. Os vetores tem tamanhos diferentes.
    int qtdenulos;          // Quardar quantas vezes o zero é litado.

    // Inicialização das variáveis
    qtdenulos = 0;
    ai = 0;
    bi = 0;

    // Lendo os números inteiros inseridos pelo usuário.
    printf ("*** INSIRA 10 NÚMEROS INTEIROS ***\n");
    printf ("--------------------------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf ("Digite o número desejado para posição [%d].........: ", i);
        scanf ("%d", &V[i]);
    }

    // Processamento
    // Separando os números e destinando aos seus respectivos vetores.
    for (i = 0; i < 10; i++) {
        if (V[i] > 0) {
            A[ai] = V[i];
            ai++;
        } else if (V[i] < 0) {
            B[bi] = V[i];
            bi++;
        }
    }

    // Contando quantos números zeros tem no vetor
    for (i = 0; i < 10; i++) {
        if (V[i] == 0) {
            qtdenulos++;
        }
    }

    // Exibindo as informações para o usuário.
    printf ("\n");
    printf ("-----------------------------------------------------------------\n");
    // Exibindo os números do vetor V
    printf ("NÚMEROS DO VETOR V\n");
    for (i = 0; i < 10; i++) {
        printf ("O número do vetor V, na posição [%d], é.....: %d\n", i, V[i]);
    }

    // Exibindo os números do vetor A
    printf ("\n");
    printf ("NÚMEROS DO VETOR A - POSITIVOS\n");
    if (ai == 0) {
        printf ("Não há números positivos!\n");
    } else {
        for (i = 0; i < ai; i++) {
            printf ("O número existente no vetor A, na posição [%d], é....: %d\n", i, A[i]);
        }
    }

    // Exibindo os números do Vetor B
    printf ("\n");
    printf ("NÚMEROS DO VETOR B - NEGATIVOS\n");
    if (bi == 0) {
        printf ("Não há números negativos!\n");
    } else {
        for (i = 0; i < bi; i++) {
            printf ("O número existente no vetor B, na posição [%d], é...: %d\n", i, B[i]);
        }
    }

    // Exibindo a quantidade de números nulos existentes no vetor V
    printf ("\n");
    if (qtdenulos > 0) {
        printf ("QUANTIDADE DE NÚMEROS NULOS\n");
        printf ("Existem %d números zeros no vetor V.\n", qtdenulos);
    } else {
        printf ("Não há números nulos no vetor V.\n");
    }

    return 0;
}