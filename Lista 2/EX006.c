/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Criar tabela de 1 a 10 graus e mostrar conversão para Fahrenheit.
*/

// Incluindo bibliotecas do C
#include <stdio.h>

// Programa
int main(){

    printf ("+-----------------+--------------+ \n");
    printf ("|  Graus Celsius  |  Fahrenheit  | \n");
    printf ("+-----------------+--------------+ \n");
    printf ("|       1º        |     %.1f     | \n", 1.0 * 9.0/5.0+32.0);
    printf ("|       2º        |     %.1f     | \n", 2.0 * 9.0/5.0+32.0);
    printf ("|       3º        |     %.1f     | \n", 3.0 * 9.0/5.0+32.0);
    printf ("|       4º        |     %.1f     | \n", 4.0 * 9.0/5.0+32.0);
    printf ("|       5º        |     %.1f     | \n", 5.0 * 9.0/5.0+32.0);
    printf ("|       6º        |     %.1f     | \n", 6.0 * 9.0/5.0+32.0);
    printf ("|       7º        |     %.1f     | \n", 7.0 * 9.0/5.0+32.0);
    printf ("|       8º        |     %.1f     | \n", 8.0 * 9.0/5.0+32.0);
    printf ("|       9º        |     %.1f     | \n", 9.0 * 9.0/5.0+32.0);
    printf ("|       10º       |     %.1f     | \n", 10.0 * 9.0/5.0+32.0);
    printf ("+-----------------+--------------+\n");

    return 0;
}