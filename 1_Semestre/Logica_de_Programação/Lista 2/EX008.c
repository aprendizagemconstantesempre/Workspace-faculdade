/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Calcular imposto de acordo com a faixa de referência.
*/

// Incluíndo a biblíoteca do C
#include <stdio.h>

// Programa
int main (){

    // Atribuindo variáveis
    float valor1;
    float valor2;
    float valor3;
    float valor4;

    // Atribuindo valor as variáveis
    valor1 = 800.99;
    valor2 = 4000.00;
    valor3 = 8500.00;
    valor4 = 10000.01;

    printf ("Tabela de referência:  \n");
    printf ("Até R$ 1.200,00                = isento \n");
    printf ("de R$ 1.201,00 a R$ 5.000,00   = 10% \n");
    printf ("de R$ 5.001,00 a R$ 10.000,00  = 15% \n");
    printf ("acima de R$ 10.000,00          = 20% \n");
    printf ("\n");
    printf ("+-------------------------------------------+ \n");
    printf ("|     FAIXA DE VALOR     |      IMPOSTO     | \n");
    printf ("+-------------------------------------------+ \n");
    printf ("|       R$   %.2f      |     R$    %.2f   | \n", valor1, (valor1 / 100) * 0);
    printf ("|       R$  %.2f      |     R$  %.2f   | \n", valor2, (valor2 / 100) * 10);
    printf ("|       R$  %.2f      |     R$ %.2f   | \n", valor3, (valor3 / 100) * 15);
    printf ("|       R$ %.2f      |     R$ %.2f   | \n", valor4, (valor4 / 100) * 20);
    printf ("+-------------------------------------------+ \n");


    return 0;
}