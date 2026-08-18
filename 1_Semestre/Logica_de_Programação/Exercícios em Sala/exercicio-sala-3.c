/*
    Autor: Aguinaldo Alves
    Data: 23/03/2026
    Obejtivo: Perguntar quanto vale o sonho de uma pessoa e quanto ela poupa por mês. Mostrar quanto tempo 
    levará para juntar o valor desejado.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <math.h>

// Programa
int main () {

    // Declaração de variáveos
    float sonho;
    float valor;
    float tempo;

    printf ("\n");
    printf ("Entre com o valor do seu sonho......................: ");
    scanf  ("%f", &sonho);
    printf ("\n");
    printf ("Informe quantos Reais, pode guardar mensalmente.....: ");
    scanf  ("%f", &valor);

    // Calculando o tempo que levará
    tempo = sonho / valor;

    printf ("Você terá que economizar por: %.2f meses. \n ", tempo);
    printf ("\n");

    return 0;
}