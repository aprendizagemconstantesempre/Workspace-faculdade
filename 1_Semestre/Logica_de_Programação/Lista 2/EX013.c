/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Cálcular a média ponderada de 4 notas com pesos.
*/

// Incluíndo as biblíotecas do C
#include <stdio.h>
#include <math.h>

// Programa
int main () {

    // Declaração de variáveis
    float nota1;
    float nota2;
    float nota3;
    float nota4;

    // Atribuindo valores as variáveis
    nota1 = 8.0;
    nota2 = 7.5;
    nota3 = 10.0;
    nota4 = 9.0;

    printf ("Nota 1 =  %.2f, com peso 1 =  %.2f \n", nota1, nota1 * 1);
    printf ("Nota 2 =  %.2f, com peso 2 = %.2f \n", nota2, nota2 * 2);
    printf ("Nota 3 = %.2f, com peso 3 = %.2f \n", nota3, nota3 * 3);
    printf ("Nota 4 =  %.2f, com peso 4 = %.2f \n", nota4, nota4 * 4);
    printf ("\n");
    printf ("A média ponderada desse aluno é: %.1f \n", (nota1 + nota2*2 + nota3*3 + nota4*4)/10);

    return 0;
}