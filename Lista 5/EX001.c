/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo: Apresentar o quadrado dos números inteiros de 15 a 200.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int numero;
    int quadrado;

    for (numero = 15; numero <= 200; numero++) {

        quadrado = numero * numero;
        printf ("O quadrado de %d é %d \n", numero, quadrado);

    }

    return 0;
}