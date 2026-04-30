/*
    Autor: Aguinaldo Alves
    Data: 28/03/2026
    Objetivo: Escrever um programa em C para ler número de empregados da loja, o valor do salário-
              mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas.
              Calcule e escreva: O salário final de cada empregado e o lucro (líquido) da loja. 
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int numeroempregado;
    float salariominimo;
    float custoumabike;
    float qtdebikevendidas;
    float precovenda;
    float salariobasevendedor;
    float custovendas;
    float comissao;
    float salariofinalcolab;
    float salariototalcolab;
    float lucroliqempresa;


    printf ("Entre com a quantidade de colaboradores.........................: ");
    scanf ("%d", &numeroempregado);

    printf ("Qual o salário mínimo atual.....................................: ");
    scanf ("%f", &salariominimo);

    printf ("Entre com o preço de custo de uma bicicleta.....................: ");
    scanf ("%f", &custoumabike);

    printf ("Quantas bicicletas foram vendidas no período....................: ");
    scanf ("%f", &qtdebikevendidas);
    printf ("\n");


    // Atribuindo valor as variáveis
    precovenda = ((custoumabike / 100) * 50) + custoumabike;
    salariobasevendedor = salariominimo * 2;
    custovendas = custoumabike * qtdebikevendidas;
    comissao = ((custovendas / 100) * 15) / numeroempregado;
    salariofinalcolab = salariobasevendedor + comissao;
    salariototalcolab = salariofinalcolab * numeroempregado;
    lucroliqempresa = (precovenda * qtdebikevendidas) - salariototalcolab - custovendas;

    printf ("          ***** DEMONSTRATIVO DO PERÍODO ***** \n");
    printf ("O salário final de cada empregado e.............................: R$ %.2f \n", salariofinalcolab);
    printf ("O lucro (líquido) da loja no período foi de.....................: R$ %.2f \n", lucroliqempresa);
    printf ("\n");


    return 0;
}