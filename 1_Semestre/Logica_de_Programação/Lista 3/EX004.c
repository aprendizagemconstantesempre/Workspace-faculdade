/*
    Autor: Aguinaldo Alves
    Data: 28/03/2026
    Objetivo: Solicitar nome, horas trabalhadas e quantidade dependentes de um funcionario e calcular:
            Nome, salário bruto, os valores descontados para cada tipo de imposto e
            finalmente qual o salário líquido do funcionário.
*/

// Declarando as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáves
    char nome [20];
    float hstrabalhadas;
    int qtdedependentes;
    float valorhora;
    float salariobruto;
    float vlrpordep;
    float vlrinss;
    float vlrirrf;
    float vlrdependentes;
    float salarioliquido;

    // Atribuindo valor as variáveis
    valorhora = 12.00;
    vlrpordep = 40.00;

    printf ("Qual o nome do Colaborador.............................: ");
    scanf ("%s", &nome);
    printf ("Informe a quantidade de horas trabalhadas no período...: ");
    scanf ("%f", &hstrabalhadas);
    printf ("Informe a quantidade de dependentes do colaborador.....: ");
    scanf ("%d", &qtdedependentes);
    printf ("\n");

    printf ("              DEMONSTRATIVO SALÁRIO \n");
    printf ("Nome do colaborador....................................: %s \n", nome);

    // Cálculando o salário bruto do período
    salariobruto = hstrabalhadas * valorhora;
    printf ("Salário bruto do período...............................: %.2f \n", salariobruto);

    // Cálculando o desconto do INSS
    vlrinss = (salariobruto / 100) * 8.5;
    printf ("   ( - ) Valor do INSS - 8.5 por cento.................: %.2f \n", vlrinss);

    // Cálculando o desconto do IRRF
    vlrirrf = (salariobruto / 100) * 5;
    printf ("   ( - ) Valor do IRRF - 5 por cento...................: %.2f \n", vlrirrf);

    // Cálculando ajuda de custo dos dependêntes
    vlrdependentes = qtdedependentes * vlrpordep;
    printf ("   ( + ) Valor dos dependentes..........................: %.2f \n", vlrdependentes);

    // Cálculando o salário líquido do período
    salarioliquido = salariobruto - vlrinss - vlrirrf + vlrdependentes;
    printf ("Salário líquido do período..............................: %.2f \n", salarioliquido);
    printf ("\n");

    return 0;
}