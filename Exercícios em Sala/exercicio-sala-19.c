/*
    Autor: Aguinaldo Alves
    Data: 23/04/2026
    Objetivo: Ler 10 notas, guardar em um arrei e cálcular a média.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h> 

// Programa
int main () {

    // Declarando as variáveis
    int nota [10];
    int i;
    float soma;
    float media;

    // Inicializando a variáveis
    soma = 0;

    for (i = 0; i < 10; i++) {
        printf ("Digite a nota............: ");
        scanf ("%d", &nota[i]);
        printf ("\n");
    }

    for (i = 0; i < 10; i++) {
        printf ("Nota = %d \n", nota[i]);
    }

    // Cálcular a média
    for (i = 0; i < 10; i++) {
        soma = soma + nota[i];
    }
    media = soma / 10;

    // Exibindo a média
    printf ("\n");
    printf ("A média das notas é = %.2f \n", media);

    return 0;
}