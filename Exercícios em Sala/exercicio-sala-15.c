/*
    Autor: Aguinaldo Alves
    Data: 23/04/2026
    Objetivo: Elaborar um programa que apresente os valores de conversão de graus celsius
                para Fahrenheit, de 10 em 10 graus. Iniciando a contagem em 10 graus Celsius
                e finalizando em 100 graus Celsius. O programa deverá apresentar os valores das 
                duas temperaturas. Observação: Utilizar a formula F=(9*C+160)/5.
*/

// Atributindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração de variável
    int C;
    float F; // tem divisão na regra, logo posso ter resto na divisão

    for (C = 10; C <= 100; C+=10) {
        
        F=(9*C+160)/5;

        printf ("%d Celsius é = %2f Fahrenheit \n", C, F);
        
    }

    return 0;
}