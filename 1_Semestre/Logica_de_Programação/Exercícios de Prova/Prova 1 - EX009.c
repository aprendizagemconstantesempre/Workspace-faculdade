/*
    Autor: Aguinaldo Alves
    Data: 06/04/2026
    Objetivo: Cálcular o resultado da equpação R = ((X * 5) * Y) * Z
*/

// Inclupindo biblioteca do C
#include <stdio.h>

// Programa
int main () {
    // Declarano variáveis
    int valorX;
    int valorY;
    int valorZ;
    int resultado;

    // Solicitando Valores X, Y e Z
    printf ("Digite um valor interiro para X..........: ");
    scanf ("%d", &valorX);
    printf ("Digite um valor inteiro para Y...........: ");
    scanf ("%d", &valorY);
    printf ("Digite um valor inteiro para Z...........: ");
    scanf ("%d", &valorZ);

    // Calculando o resultado
    resultado = ((valorX * 5) * valorY) * valorZ;

    // Exibindo o resultado na tela
    printf ("\n");
    printf ("O resultado da equação é: %d \n", resultado);


    return 0;
}