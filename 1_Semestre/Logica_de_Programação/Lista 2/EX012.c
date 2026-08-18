/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Cálcular quantidade de fios em metros e centímetros para uma casa.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <math.h>

// Programa
int main () {

    // Declarando as variáveis
    double lado1;
    double lado2;
    double diagonal;
    
    // Atribuindo valores as variáveis
    lado1 = 11.5;
    lado2 = 6.3;
    diagonal = sqrt(lado1 * lado1 + lado2 * lado2);

    printf ("            11,5 m            \n");
    printf ("+---------------------------+ \n");
    printf ("|  *                        | \n");
    printf ("|      *                    | \n");
    printf ("|          *                | 6,3 m\n");
    printf ("|              *            | \n");
    printf ("|                  *        | \n");
    printf ("|                      *    | \n");
    printf ("+---------------------------+ \n");
    printf ("\n");
    printf ("Será necessário comprar: %.2f metros. \n", diagonal);
    printf ("\n");

    return 0;
}