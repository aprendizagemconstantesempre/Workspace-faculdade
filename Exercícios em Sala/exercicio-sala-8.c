/*
    Autor: Aguinaldo Alves
    Data: 02/04/2026
    Objetivo: Ler uma variável e somar 5 a ela caso seja positiva e somar 8 caso seja negativa.
*/

// Adicionando as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variávies
    int numero;
    int resultado;

    printf ("Digite um número inteiro............................: ");
    scanf ("%d", &numero);

    if (numero > 0) {

        printf ("O número %d é positivo e será somado 5 a ele, logo o resultado e: %d \n", numero, resultado = numero +5);

    } else {

        printf ("O número %d é negativo e será somado 8 a ele, logo o resultado e: %d \n", numero, resultado = numero + 8);

    }

    return 0;
}