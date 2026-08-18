/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo:   Apresentar os resultados de uma tabuada de um número qualquer. Esta deverá ser impressa no seguinte formato:
                Considerando como exemplo o fornecimento do número 02.
                2 x 1 = 2
                2 x 2 = 4
                .
                .
                2 x 10 = 20
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração das variáveis
    int cont;
    int numero;
    int resultado;

    printf ("Entre com um número inteiro.................: ");
    scanf ("%d", &numero);

    printf ("+---------------------------------------------+ \n");
    printf ("|               TABUADA DO %d                  | \n", numero);
    printf ("+---------------------------------------------+ \n");

    for (cont = 1; cont <= 10; cont++) {

        // Cálculando a tabuada do número digitado
        resultado = numero * cont;

        // Exibindo o resultado na tela
        printf ("%d x %d = %d \n", numero, cont, resultado);

    }

    return 0;
}