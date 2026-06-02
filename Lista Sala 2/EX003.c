/*
    Autor: Aguinaldo Alves
    Data: 01/06/2026
    Objetivo:   Sistema de folha de pagamento
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
// 4º Função - Calculo do salário liquido
float calcularSalarioLiquido(float salariobruto, float desconto) {
    // Declarando variáveis
    float salarioliquido;

    // calculando saláriolíquido
    salarioliquido = salariobruto - desconto;

    return (salarioliquido);
}



// 3º Função - Descontar INSS
float calcularDescontoINSS(float salariobruto) {
    // Declarando variáveis
    float desconto;

    if (salariobruto <= 1500.00) {
        desconto = salariobruto / 100 * 8;
    } else if (salariobruto > 1500.00 && salariobruto <= 3000.00) {
        desconto = salariobruto / 100 * 10;
    } else if (salariobruto > 3000.00) {
        desconto = salariobruto / 100 * 12;
    }

    return (desconto);

}


// 2º Função - Calcular Salário Bruto
float calcularSalarioBruto (float horas, float valorHora) {
    // Declaranco variáveis
    float salariobruto;

    // Calculando salário bruto
    salariobruto = horas * valorHora;

    return (salariobruto);
};


// 1º Função - Mains
int main () {
    // Declarando as variáveis
    float horas; 
    float valorhora;
    float salariobruto;
    float descontoinss;
    float salarioliquido;

    printf ("Digite o total de horas trabalhadas no mês............: ");
    scanf ("%f", &horas);

    printf ("Digite o valor hora...................................: ");
    scanf ("%f", &valorhora);

  
    // Exibindo os resultados ao usuário
    salariobruto = calcularSalarioBruto(horas, valorhora);
    printf("O salário Bruto é de...................................: %.2f \n", salariobruto);

    descontoinss = calcularDescontoINSS(salariobruto);
    printf ("O desconto do INSS foi de.............................: %.2f \n", descontoinss);

    salarioliquido = calcularSalarioLiquido(salariobruto, descontoinss);
    printf ("O salário líquido é de................................: %.2f \n", salarioliquido);


    return 0;
}