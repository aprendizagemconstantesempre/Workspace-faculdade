/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Lendo e Exibindo um Vetor
                Leia 5 números inteiros e armazene em um vetor. Depois, mostre todos os valores
                lidos.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <stdlib.h>      // Limpar tela para o usuário.

// Programa
int main () {
    // Declarando as variáveis
    int vetor[5];
    int i;

    printf ("*** LENDO OS NÚMEROS PARA O VETOR ***\n");
    printf ("-------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("Digite um número para posição [%d]....: ", i);
        scanf ("%d", &vetor[i]);
    }

    // Limpando a tela para o usuário.
    #ifdef _WIN32
        system ("cls");
    #else
        system ("clear");
    #endif

    // Exibindo os números do vetor para o usuário.
    printf ("*** NÚMEROS DO VETOR ***\n");
    printf ("----------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("Número na posição [%d]...: %d\n", i, vetor[i]);
    }

    return 0;
}