/*
    Autor: Aguinaldo Alves
    Data: 16/04/2026
    Objetivo: Exercício de comando de repetição FOR - Tabuada
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

int main () {

    // atribuindo variaveis
    int numero;
    int x;

    printf ("Você deseja a tabuada de qual número inteiro?................: ");
    scanf ("%d", &numero);

    for (x=1; x<=10; x++) {
        printf ("%d x %d = %d \n", numero, x, numero*x);
    }

    return 0;
}