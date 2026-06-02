/*
    Autor: Aguinaldo Alves
    Data: 11/05/2026
    Objetivo: Matriz transposta
*/

// incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declaração de Variáveis
    int MO[2][3];       // Matriz original com duas linahs e três colunas
    int MT[3][2];       // Matriz transposta com tres linhas e duas colunas.
    int i;              // Controlador para linhas
    int j;              // Controlador para colunas

    // Lendo os dados para Matriz
    printf ("*** ENTRE COM OS NÚMEROS DA MATRIZ ORIGINAL ***\n");
    printf ("-----------------------------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf ("Entre com um número inteiro [%d][%d]........: ", i, j);
            scanf ("%d", &MO[i][j]);
        }
    }

    // Processamento
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            MT[i][j] = MO[j][i];
        }
    }

    // Exibindo os dados para o usuário.
    printf ("\n");
    printf ("*** DADOS DA MATRIZ ORIGINAL ***");
    printf ("-----------------------------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf ("%d\t", MO[i][j]);
        }
    }

    printf ("\n");
    printf ("*** DADOS DA MATRIZ TRANSPOSTA ***");
    printf ("-----------------------------------\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf ("%d\t", MO[i][j]);
        }
    }

    return 0;
}