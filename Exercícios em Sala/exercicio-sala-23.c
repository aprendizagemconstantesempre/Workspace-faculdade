/*
    Autor: Aguinaldo Alves
    Data: 04/05/2026
    Objetivo: Criar uma Matriz 4 x 4 e somando todas as colunas
*/

// Incluíndo as biblioteca do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int matriz [4][4]; // Declarando a Matriz
    int i; // Linhas
    int j; // Colunas
    int guardasomacoluna [4];

    // Inicializando o array de somas por coluna
    for (j = 0; j < 4; j++) {
        guardasomacoluna[j] = 0;
    }

    // Leitura dos dados da matriz
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++) {
            printf ("Digite o elemento [%d][%d]: ", i, j); // O %d vai mostrar em que posição estamos.
            scanf ("%d", &matriz[i][j]);
        }
    }

    // Impressão dos elementos
    printf ("\n");
    printf ("Elementos da matriz: \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf ("%d \t", matriz[i][j]);
        }
        printf ("\n");
    }

    // Somando todos os valores da matriz por coluna
    printf ("\n");
    for (j = 0; j < 4; j++){           // Loop externo percorre as colunas
        for (i = 0; i < 4; i++) {      // Loop interno percorre as linhas
            guardasomacoluna[j] = guardasomacoluna[j] + matriz[i][j];
        }
        printf ("A soma de todos os números da coluna %d é: %d \n", j, guardasomacoluna[j]);
    }

    return 0;
}