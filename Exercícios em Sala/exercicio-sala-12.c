/*
    Autor: Aguinaldo Alves
    Data: 16/04/2026
    Objetivo: Exercício de comando de repetição FOR - Tabuada inicio e fim
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

int main () {

    // atribuindo variaveis
    int inicio;
    int numero;
    int x;
    int final;

    printf ("Você deseja a tabuada de qual número inteiro?................: ");
    scanf ("%d", &numero);

    printf ("Qual o número inicial........................................: ");
    scanf ("%d", &inicio);

    printf ("Qual o número final..........................................: " );
    scanf ("%d", &final);
    printf ("\n");

    for (x=0; x<=80; x++) {
        printf ("-");
    }

    printf ("\n");

    if (inicio > final) {
        printf ("Você não pode digitar um número inicial não pode ser maior que número final! \n");
    }

    for (x=inicio; x<=final; x++) {
        printf ("%d x %d = %d \n", numero, x, numero*x);
    }

    for (x=0; x<=80; x++) {
        printf ("-");
    }
    printf ("\n");
    
    return 0;
}