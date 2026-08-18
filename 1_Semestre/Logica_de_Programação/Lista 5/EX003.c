/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo: Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração das variáveis.
    int cont;
    int soma;

    // Atribuindo valor a variável
    soma = 0; // Não equecer de inicializar quando for somar algo.

    for (cont = 1; cont <= 500; cont++) {
        if (cont % 2 == 0 ) {
            soma = soma + cont;
            printf ("O número %d é par. \n", cont);
        }
    }
    printf ("A somatória dos números pares é: %d \n", soma);

    return 0;
}