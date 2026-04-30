/*
    Autor: Aguinaldo Alves
    Data: 19/03/2026
    Objetivo: Cálcular as expressões utilizando o Div e mod.
              Na linguagem C, o operador de divisão inteira é representado por '/' e o operador de módulo é representado por '%'. 
*/

#include <stdio.h>

int main() {
    printf("37 mod 13 = %d\n", (37 % 13));
    printf("41 div 7 = %d\n", (41 / 7));
    printf("11 div 3 mod 2 = %d\n", ((11 / 3) % 2));
    printf("11 mod 3 div 2 = %d\n", ((11 % 3) / 2));
    return 0;
}