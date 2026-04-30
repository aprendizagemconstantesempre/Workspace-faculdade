/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Desconto de INSS e IR no Salário
              Enunciado: Dado um salário, calcule os descontos do INSS e Imposto de Renda, exibindo o salário líquido.
              Tabelas: 
              INSS: 
                Até R$1570,00 → 8%
                Acima de R$1570,00 → 9%
              IR:
                Até R$2000,00 → Isento
                De R$2000,01 a R$3000,00 → 7.5%
                Acima de R$3000,00 → 15%
              Exemplo:
                Entrada: Salário Bruto = R$2500,00
                Cálculo:
                    INSS: 9% → R$225,00
                    IR: 7.5% → R$168,75
                    Salário Líquido: R$2106,25
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    float salariobruto;
    float salarioliquido;
    float INSS;
    float IRRF;

    // Solicitando o salário do colaborador e guardando a informação
    printf ("Entre com o salário do colaborador..................R$ ");
    scanf ("%f", &salariobruto);

    // Calculando o INSS
    if (salariobruto <= 1570.00) {
        INSS = salariobruto * 0.08;
    } else {
        INSS = salariobruto * 0.09;
    }

    // Calculando o IRRF
    if (salariobruto <= 2000.00) {
        IRRF = salariobruto * 0.00;
    } else if (salariobruto >= 2000.01 && salariobruto <= 3000.00) {
        IRRF = salariobruto * 0.075;
    } else {
        IRRF = salariobruto * 0.15;
    }

    // Exibindo na tela as informações e calculo
    printf ("Salário Bruno........................R$ %.2f \n", salariobruto);
    printf ("   Descontos \n");
    printf ("       INSS..........................R$ %.2f \n", INSS);
    printf ("       IRRF..........................R$ %.2f \n", IRRF);

    // Calculando o salário líquido
    salarioliquido = salariobruto - INSS - IRRF;
    printf ("Salário liquido......................R$ %.2f \n", salarioliquido);

    return 0;
}