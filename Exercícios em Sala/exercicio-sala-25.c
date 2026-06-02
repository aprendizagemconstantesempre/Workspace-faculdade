/*
    Autor: Aguinaldo Alves
    Data: 07/05/2026
    Objetivo: Soma das diagonais de uma matriz 4 x 4
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int matriz [4][4];
    int linha;
    int coluna;
    int somadiagonal1 = 0;   // Diagonal principal  ↘
    int somadiagonal2 = 0;   // Diagonal secundária ↙

    // Ler os números digitados para a matriz
    printf ("ELEMENTOS DA MATRIZ 4 X 4 \n\n");
    for (linha = 0; linha < 4; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf ("Digite o elemento da matriz [%d][%d]........: ", linha, coluna);
            scanf ("%d", &matriz[linha][coluna]);   // Corrigido: formato "%d" e operador &
        }
    }

    // Somando as diagonais
    // Diagonal principal:  [0][0] [1][1] [2][2] [3][3] → linha == coluna
    // Diagonal secundária: [0][3] [1][2] [2][1] [3][0] → linha + coluna == 3
    for (linha = 0; linha < 4; linha++) {
        somadiagonal1 += matriz[linha][linha];        // Diagonal principal
        somadiagonal2 += matriz[linha][3 - linha];    // Diagonal secundária
    }

    // Exibindo a matriz com as diagonais destacadas visualmente
    printf ("\n\nMATRIZ 4 X 4:\n\n");
    for (linha = 0; linha < 4; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf ("%5d", matriz[linha][coluna]);
        }
        printf ("\n");
    }

    // Exibindo as somas das diagonais
    printf ("\n");
    printf ("Soma da diagonal principal  (↘): %d\n", somadiagonal1);
    printf ("Soma da diagonal secundaria (↙): %d\n", somadiagonal2);
    printf ("\n");

    return 0;
}