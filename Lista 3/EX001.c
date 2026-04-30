/*
    Autor: Aguinaldo Alves
    Data: 23/03/2026
    Objetivo: Entrar dados de funcionário e cálcular salário dele.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando variávies
    char    nome [20];
    int     idade;
    char    cargo [20];
    float   salbrutant;
    float   salbrutatu;
    float   gratificacao;
    float   irrf;

    // Atribuindo valor as variáveis
    salbrutant = 1000.00;
    salbrutatu = ((salbrutant / 100) * 38) + salbrutant;
    gratificacao = (salbrutatu / 100) * 20;
    irrf = ((salbrutatu + gratificacao) / 100) * 15;


    // Programa

    printf ("\n");
    printf ("Entre com seu primeiro nome........: ");
    scanf ("%s", &nome);
    printf ("\n");
    printf ("Qual sua idade.....................: ");
    scanf ("%d", &idade);
    printf ("\n");
    printf ("Qual seu cargo.....................: ");
    scanf ("%s", &cargo);
    printf ("\n");
    printf ("Nome do colaborador: %s, idade: %d, cargo: %s. \n", nome, idade, cargo);
    printf ("\n");
    printf ("            Demostrativo salarial \n");
    printf ("-------------------------------------------------- \n");
    printf ("Salário bruto Anterior..................: %.2f \n", salbrutant);
    printf ("Salário bruto corrigido.................: %.2f \n", salbrutatu);
    printf ("Valor da gratificação...................:  %.2f \n", gratificacao);
    printf ("Valor do desconto, referente ao IRRF....:  %.2f \n", irrf);
    printf ("Salário líquido a receber...............: %.2f \n", (salbrutatu + gratificacao - irrf));
    printf ("-------------------------------------------------- \n");
    printf ("\n");


    return 0;
}