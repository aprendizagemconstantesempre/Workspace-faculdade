/*
    Autor: Aguinaldo Alves
    Data: 23/03/2026
    Objetivo: Pedir 2 valores para usuário e realizar as operações aprendidas.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>
#include <math.h>

// Programa
int main () {

    // Declarando as variáveis;
    float valor1;
    float valor2;
    float resultado;

    printf ("\n");
    printf ("Entre com o primeiro valor: ");
    scanf  ("%f", &valor1);

    printf ("Entre com o segundo valor: ");
    scanf ("%f", &valor2);

    printf ("\n");

    // Somando os números
    resultado = valor1 + valor2;
    printf ("A soma dos dois números = %.2f \n", resultado);

    // Subtrai os dois número
    resultado = valor1 - valor2;
    printf ("A subtração dos números = %.2f \n", resultado);

    // Multiplicando os dois números
    resultado = valor1 * valor1;
    printf ("A multiplicação dos números = %.2f \n", resultado);

    // Divisão dos dois números
    resultado = valor1 / valor2;
    printf ("A Divisão dos dois números = %.2f \n", resultado);

    return 0;
}