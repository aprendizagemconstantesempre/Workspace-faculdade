/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Escrever o resultado das equações matemáticas e fazer um programa para validar o resultado.
*/

// Incluíndo as biblíotecas do C
#include <stdio.h>
#include <math.h>  // Biblíoteca para expressões matemáticas.

// Programa
int main () {

    // Declarando variáveis
    float raizquad;
    float aoquadrado;
    float cosseno;
    float arredcima;

    // Atribuindo valor a variável
    raizquad = sqrt(169);       // sqrt - é para cálcular raiz quadrada de um número.
    aoquadrado = pow(172, 2);   // pow - é para cálcular um número ao quadrado.
    cosseno = cos(0);           // cos - é para cálcular o cosseno de um número.
    arredcima = ceil(1.65);     // ceil - arredonda um número para cima.


    printf ("+-------------------------------------------------------------------+ \n");
    printf ("| Exprssões Matemáticas  |     Resultado     | Programa verificador | \n");
    printf ("+-------------------------------------------------------------------+ \n");
    printf ("| Raiz quadrada de 169   |           13      |             %.0f       | \n", raizquad);
    printf ("| 172 ao quadrado        |        29584      |          %.0f       | \n", aoquadrado);
    printf ("| Cosseno (0)            |            1      |              %.0f       | \n", cosseno);
    printf ("| Arred. 1.65 p/ inteiro |            2      |              %.0f       | \n", arredcima);
    printf ("+-------------------------------------------------------------------+ \n");

    return 0;
}