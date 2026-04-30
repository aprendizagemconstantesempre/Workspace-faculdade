/*
    Autor: Aguinaldo Alves
    Data: 16/04/2026
    Objetivo: Fazer um programa que vai mostrar os números impares de 0 a 20;
*/

// Incerindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int x;

    for (x=0; x<= 20; x++) {
        
        if (x % 2 != 0) {
            printf ("%d é impar \n", x);
        }
        
    }

    return 0;
}
