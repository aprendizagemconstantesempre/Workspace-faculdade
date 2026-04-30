/*
    Autor: Aguinaldo Alves
    Data: 26/03/2026
    Objetivo: Solicitar um número  e verificar se é maio que 5.
*/
// Declarando as bibliotecas dao C
#include <stdio.h>

// Programa

// Declarando as variáveis
int numero;

int main () {
    printf ("\n");
    printf ("Digite um número.............:");
    scanf ("%d", &numero);
    printf ("\n ");

    if (numero >= 5) {
        printf ("O número digitado é maior ou igual a 5. \n");
    } else {
        printf ("O número digitado é menor que 5. \n");
        printf ("\n");
    }

    return 0;
}
