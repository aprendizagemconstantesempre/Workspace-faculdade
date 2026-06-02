/*
    Autor: Aguinaldo Alves
    Data: 98/05/2026
    Objetivo:   Inverter Vetor
                1. Leia um vetor A com 200 elementos.
                2. Inverta a ordem dos elementos (troque o primeiro com o último, o segundo com o penúltimo, etc.).
                3. Imprima o vetor após a inversão.
*/

// Incerindo as bibliotecas do C
#include <stdio.h>

// programa
int main () {
    // Declarando as variáveis
    int A[200];         // Vetor que será populado de 4 em 4 a partir do inicial digitado e que será invertido no final.
    int i;              // Controlador para o for
    int inicio;         // Elemento inicial para popular o vetor com 200 elementos automaticamente.
    int B[200];         // Vetor para guardar a posição invertida do vetor A.

    // Solicitando ao usuário o primeiro número para alimentar o vetor de 200 posições
    printf("Digite o número inicial.....................: ");
    scanf("%d", &inicio);

    // Para não ter que ficar digitando 200 números, vou solicitar um número inicial e depois vou popular o ventor com acrescimo de 4 em 4.
    // Alimentando o vetor A com 200 elementos a partir do número digitado e acrescentado mais 4.
    for (i = 0; i < 200; i++) {
        A[i] = inicio + (i * 4);    // A partir do valor digitado será acrescentado 4 em 4.
    }

    // Processando a inversão das posições 
    for (i = 0; i < 200; i++) {
        B[i] = A[199 - i];
    }

    // Exibindo os elementos do vetor A.
    printf ("\n");
    printf ("*** ELEMENTOS DO VETOR ORIGINAL *** \n");
    printf ("-------------------------------------\n");
    for (i = 0; i < 200; i++) {
        printf ("O elemento da posição [%d] é %d \n", i, A[i]);
    }

    // Exibindo os elementos do vetor B - Invertido
    printf ("\n");
    printf ("*** ELEMENTOS DO VETOR INVERTIDO *** \n");
    printf ("-------------------------------------\n");
    for (i = 0; i < 200; i++) {
        printf ("O elemento da posição[%d] é %d \n", i, B[i]);
    }

    return 0;
}