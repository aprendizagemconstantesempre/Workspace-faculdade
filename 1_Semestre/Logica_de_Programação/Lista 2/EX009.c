/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Calcular quantidade de pedaços e ver quanto sobre para cada tábua.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main() {

    // Declaração de variáveis
    int tabua3;
    int tabua4;
    int tabua5;
    int pedaco;
    int cm;

    // Atribuindo valor as variáveis
    cm = 100;
    pedaco = 45;
    tabua3 = 3 * cm;
    tabua4 = 4 * cm;
    tabua5 = 5 * cm;

    printf ("Tabua de 3 metros: \n");
    printf ("   Quantidade de pedaços: %2d \n", tabua3 / pedaco );
    printf ("   Sobra de madeira: %2d cm \n", tabua3 % pedaco);
    printf ("\n");
    printf ("Tabua de 4 metros: \n");
    printf ("   Quantidade de pedaços: %2d \n", tabua4 / pedaco);
    printf ("   Sobra de madeira: %2d cm \n", tabua4 % pedaco);
    printf ("\n");
    printf ("Tabua de 5 metros: \n");
    printf ("   Quantidade de pedaços: %2d \n", tabua5 / pedaco);
    printf ("   Sobra de madeira: %2d cm \n", tabua5 / pedaco);

    return 0;
}