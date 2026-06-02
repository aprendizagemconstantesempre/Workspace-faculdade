/*
    Autor: Aguinaldo Alves
    Data: 04/05/2026
    Objetivo: Criar uma Matriz 4 x 4 e somando todos os seus valores
*/

// Incluíndo as biblioteca do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int matriz [4][4]; // Declarando a Matriz
    int i; // Linhas
    int j; // Colunas
    int soma;

    // Inicializando as variáveis de resultado
    soma = 0;

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

    // Somando todos os valores da matriz
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++) {
            soma = soma + matriz[i][j];
        }
    }
    printf ("A soma de todos os números da matriz é: %d \n", soma);

    return 0;
}