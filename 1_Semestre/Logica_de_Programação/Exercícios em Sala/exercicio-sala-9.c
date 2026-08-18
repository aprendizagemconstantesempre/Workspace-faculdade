/*
    Autor: Aguinaldo Alves
    Data: 02/04/2026
    Objetivo: Ler duas variáveis A e B e se a variável A for menor que B, 
    fazer Y = B - A, se B for menor que A fazer Y = A - B, caso sejam iguais fazer Y = A + B, 
    imprimindo no final os valores A, B e Y
*/
// Declarando as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int numero1;
    int numero2;
    int resultado;

    printf ("Digite um número inteiro positivo..................: ");
    scanf ("%d", &numero1);
    printf ("Digite um segundo número inteiro positivo..........: ");
    scanf ("%d", &numero2);

    // Verificando a primeira condição
    if (numero1 < numero2) {
        resultado = numero2 - numero1;
        printf ("Numero %.d e menor que numero %.d, Resultado = %.d", numero1, numero2, resultado);
    }

    // Verificando a segundao condição
    if (numero2 < numero1) {
        resultado = numero2 - numero1;
        printf ("Numero %.d e menor que numero %.d, Resultado = %.d", numero2, numero1, resultado);
    }

    // Verificando a terceira condição
    if (numero1 == numero2) {
        resultado = numero1 + numero2;
        printf ("Numero %.d é igual ao numero %.d, Resultado = %.d", numero1, numero2, resultado);
    }

    return 0;
}