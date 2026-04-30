/*
    Autor: Aguinaldo Alves
    Data: 27/03/2026
    Objetivo: Solicitar quantidade de litros de combustivel, quantidade de quilometros e realizar cálculos: 
            1 - Litros de Combustível Gasto.
            2 - Total de Quilômetros Percorridos.
            3 - Total gasto de combustível em Real.
            4 - Consumo Médio de Combustível.
*/
// Declarando as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    float preco;
    float litros;
    float quilometros;
    float totalgasto;

    // Atribuindo valor as variáveis
    preco = 5.24;

    printf ("Quantos litros de combustivel, você abasteceu para viagem..........: ");
    scanf ("%f", &litros);
    printf ("Quantos quilometros você fez, durante a viagem.....................: ");
    scanf ("%f", &quilometros);

    printf ("\n");
    printf ("Litros de combustivel gasto...................: %.2f lts \n", litros);
    printf ("Total de quilômetros Percorridos na viagem....: %.2f km  \n", quilometros);

    totalgasto = litros * preco;
    printf ("Total gasto de combustível em Real............: R$ %.2f \n", totalgasto);
    printf ("O consumo Médio de Combustível foi de.........: %.2f litros/km \n", quilometros / litros);
    printf ("\n");

    return 0;
}