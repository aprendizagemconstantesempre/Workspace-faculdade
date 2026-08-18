/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Escrever um programa que calcula a raiz de 3, arredonda o resultado
              e calcula a exponencial do valor resultante.
*/

// Incluíndo as biblíotecas do C
#include <stdio.h>
#include <math.h>

// Programa
int main () {

    // Declaração de variáveis
    double raiz;
    double arredonda;
    double exponencial;
   
    // Atribuindo valor as variáveis
    raiz = sqrt(3);
    arredonda = round(raiz);
    exponencial = exp(arredonda);


    printf ("A raiz quadrada de 3 é: %.5f \n", raiz);
    printf ("Arredondando para cima temos: %.0f \n", arredonda);
    printf ("A Exponencial será: %.5f \n", exponencial);

    return 0;
}
