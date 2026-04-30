/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Obejetivo: Cálcular quantos quilometrôs um individo faz em um ano indo e voltando ao trabalho.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    printf ("Ida e volta ao trabalho por dia: 800 metros. \n");
    printf ("O individuo vai 5 dias por semana ao trabalho. \n");
    printf ("Ele trabalha 45 semanas por ano. \n");
    printf ("\n");
    printf ("Como ele anda 800 metros por dia e vai ao trabalho 5 dias na semana, ele anda: %d metros por semana. \n", 800 * 5);
    printf ("Como o individuo trabalha 45 semanas por ano, então ele caminha: %d metros por ano. \n", 800 * 5 * 45);
    printf ("Então o individuo, andou aproximadamente: %d quilometrôs em um ano. \n", ((800 * 5) * 45) / 1000);



    return 0;
}