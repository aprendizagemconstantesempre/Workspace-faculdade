/*
    Autor: Aguinaldo Alves
    Data: 04/04/2026
    Objetivo: Cálculo de INSS
                Enunciado: Dado o salário de um funcionário:
                Se ≤ R$1570,00, desconto de 8%.
                Se > R$1570,00, desconto de 9%.
                Exemplo: Entrada: R$2000,00 → Desconto: R$180,00
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Atribuindo as variáveis
    float salario;
    float desconto;

    // Solicitando o salário e guardando a informação.
    printf ("Entre com salário...............: ");
    scanf ("%f", &salario);

    // Calculando o desconto
    if (salario <= 1570.00) {
        desconto = (salario / 100) * 8;
        printf ("O salário de R$ %.2f, tem um desconto de R$ %.2f, referente a 8%% de INSS. \n", salario, desconto);
        printf ("Salário líquido = R$ %.2f \n", (salario - desconto));
    } else {
        desconto = (salario / 100) * 9;
        printf ("O salário de R$ %.2f, tem um desconto de R$ %.2f, referente a 9%% de INSS. \n", salario, desconto);
        printf ("Salário líquido = R$ %.2f \n", (salario - desconto));
    }

    return 0;
}