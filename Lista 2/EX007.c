/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Calcular tempo dedicado a leitura de um livro.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main(){

    // Declaração de variável
    float horas;

    // Atribuindo valor a variável
    horas = (5.0 * 6.0 * 52.0) / 60.0;

    printf ("Um ano comum, tem 365 dias e a semana tem 7 dias, então temos: %d semanas + %d dia\n", 365/7, 365%7);
    printf ("Um ano bissexto, tem 366 dias e a semana tem 7 dias, então temos: %d semanas + %d dia\n",366/7, 366%7);
    printf ("\n");
    printf ("Logo, um ano tem 52 Semanas \n");
    printf ("E a pessoa dedica 5 minutos por dia em 6 dias por semana. \n");
    printf ("A pessoa dedicou: %.0f horas a leitura do livro durante o ano. \n", horas);


    return 0;
}