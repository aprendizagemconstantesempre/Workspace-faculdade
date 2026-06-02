/*
    Autor: Aguinaldo Alves
    Data: 11/05/2026
    Objetivo: Preencher a Matriz com números pares e ímpares nas colunas corretas.
*/

// incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declaração de Variáveis
    int M[5][4];            // Matriz original com 5 linahs e 4 colunas
    int i;                  // Controlador para linhas
    int j;                  // Controlador para colunas
    int numeros;            // Receber o número digitado pelo usuário.
    int contarPar;          // Irá contar os números pares
    int contarImpar;        // Irá contar os números Impares
    int cont;
    // Inicializando as variáveis
    contarPar = 0;
    contarImpar = 0;
    cont = 0 ;
    i = 0;
    j = 1;

    // Lendo os dados para Matriz
    printf ("*** ENTRE COM OS NÚMEROS DA MATRIZ ***\n");
    printf ("-----------------------------------------------------\n");

    // Processamento
    while ((i < 5) || (j < 4)) {
        if (contarPar > 4) {
            contarPar = 0;
                i = i + 2;
        }
        if (contarImpar > 4) {
            contarImpar = 0;
            j = j + 2;
        }
        printf ("Entre com um número inteiro[%d]..[%d][%d] [%d][%d]..: ",cont,i,contarPar,j,contarImpar);
        scanf ("%d", &numeros);

        cont++;

        if (numeros % 2 == 0) {     // Números pares
            if (i>4) {
                printf ("Não cabe mais números pares!");
            } else {
                M[i][contarPar] = numeros;
                contarPar++;
            }
        } else {
            if (j>3) {
                printf ("Não cabe mais números impar!");
            } else {
                M[j][contarImpar] = numeros;
                contarImpar++;
            }
        }

    }


    // Exibindo os dados para o usuário.
    printf ("\n");
    printf ("*** DADOS DA MATRIZ ORIGINAL ***");
    printf ("-----------------------------------\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf ("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}