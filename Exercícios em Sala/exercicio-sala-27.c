/*
    Autor: Aguinaldo Alves
    Data: 11/05/2026
    Objetivo: Manipulação entre matrizes
*/

// incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declaração de Variáveis
    int MA[2][2];       // Matriz original com duas linahs e três colunas
    int MB[2][2];       // Matriz transposta com tres linhas e duas colunas.
    int MC[2][2];       // Matriz que vai guardar a multiplicação entre MA e MB.
    int i;              // Controlador para linhas
    int j;              // Controlador para colunas

    // Lendo os dados para Matriz
    printf ("*** ENTRE COM OS NÚMEROS DA MATRIZ A ***\n");
    printf ("-----------------------------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf ("Entre com um número inteiro [%d][%d]........: ", i, j);
            scanf ("%d", &MA[i][j]);
        }
    }

    printf ("\n");
    printf ("*** ENTRE COM OS NÚMEROS DA MATRIZ B ***\n");
    printf ("-----------------------------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf ("Entre com um número inteiro [%d][%d]........: ", i, j);
            scanf ("%d", &MB[i][j]);
        }
    }    

    // Processamento
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            MC[i][j] = MA[i][j] * MB[i][j];
        }
    }

    // Exibindo os dados para o usuário.
    printf ("\n\n");
    printf ("*** DADOS DA MATRIZ A ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf ("%d\t", MA[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n");
    printf ("*** DADOS DA MATRIZ B ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf ("%d\t", MB[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n");
    printf ("*** DADOS DA MATRIZ C ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf ("%d\t", MC[i][j]);
        }
        printf ("\n");
    }

    return 0;
}