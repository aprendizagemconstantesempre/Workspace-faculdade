/*
    Autor: Aguinaldo Alves
    Data: 23/04/2026
    Objetivo: Ler 4 notas, guardar em um arrei e cálcular a média.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h> 

// Programa
int main () {

    // Declarando as variáveis
    int nota [4];
    int i;
    float media;

    for (i = 0; i < 4; i++) {
        printf ("Digite a nota............: ");
        scanf ("%d", &nota[i]);
        printf ("\n");
    }

    for (i = 0; i < 4; i++) {
        printf ("Nota = %d \n", nota[i]);
    }

    // Cálcular a média
    printf ("\n");
    media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;
    printf ("A média das notas é = %.2f \n", media);

    return 0;
}