/*
    Autor: Aguinaldo Alves
    Data: 19/03/2026
    Objetivo: Cálcular as expressões aritiméticas obedecendo à precedência dos operadores.
*/

#include <stdio.h>

int main() {
    printf("2 * 6 + 11 * 5 = %d\n", ((2*6) + (11*5)));
    printf("20 / (-2) / 5 = %d\n", ((20 / (-2)) / 5));
    printf("20 / 2 * 2 = %d\n", ((20 / 2) * 2));
    printf("(3 + 9) / 3 * 4 = %d\n", (((3 + 9) / 3) * 4));
    printf("(5 * 6 / (3 + 2) - 15 * 4) / 6 - 4 = %d\n", (((5 * 6 / (3 + 2)) - (15 * 4)) / 6) - 4);
    printf("4 + 32 * 2 - 7 * 2 / (9 - 2) = %d\n", (4 + (32 * 2) - ((7 * 2) / (9 - 2))));
    printf("\n\n");
    return 0;
}