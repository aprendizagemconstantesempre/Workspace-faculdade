/*
    Autor: Aguinaldo Alves
    Data: 28/03/2026
    Objetivo: Solicitar ao taxista a quilometragem inicial, a final e quanto faturou no dia, para calcular:
            1 - Marcação do Odômetro Inicial
            2 - Marcação do Odômetro Final
            3 - Quantidade de Quilômetros Percorridos no Dia.
            4 - Lucro (líquido) do Dia
            5 - Média do Consumo em Km/L
            6 - Lucro (líquido) do Dia
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração de variáveis
    float preco;
    float kminicial;
    float kmfinal;
    float qtdlitrosgasto;
    float valorrecebido;
    float kmpercorridos;
    float kmporlitros;
    float custocombdia;
    float lucrodia;

    // Atribuindo valor as variáveis
    preco = 5.24;

    printf ("Entre com a quilometragem inicial........................................: ");
    scanf ("%f", &kminicial);
    printf ("Entre com a quilometragem final..........................................: ");
    scanf ("%f", &kmfinal);
    printf ("Informe a quantidade de litros gastos no dia.............................: ");
    scanf ("%f", &qtdlitrosgasto);
    printf ("Quantos você recebeu pelas viagens do dia................................: ");
    scanf ("%f", &valorrecebido);

    printf ("\n");

    printf ("Marcação do Odômetro Inicial.............................................: %.2f \n", kminicial);
    printf ("Marcação do Odômetro Final...............................................: %.2f \n", kmfinal);

    // Cálculando a quilometragem percorrida no dia.
    kmpercorridos = kmfinal - kminicial;
    printf ("Quantidade de Quilômetros Percorridos no Dia.............................: %.2f \n", kmpercorridos);

    printf ("Lucro (líquido) do Dia (acredito que seja o valor recebido no dia).......: R$ %.2f \n", valorrecebido);

    // Cálculando quantos quilometros foram feitos com o total de litros
    kmporlitros = kmpercorridos / qtdlitrosgasto;
    printf ("Média do Consumo em Km/L.................................................: %.2f \n", kmporlitros);

    // Cálculando o custo do combustivél do dia.
    custocombdia = qtdlitrosgasto * preco;

    // Cálculando o lucro do dia
    lucrodia = valorrecebido - custocombdia;
    printf ("Lucro (líquido) do Dia....................................................: R$ %.2f \n", lucrodia);
    printf ("\n");


    return 0;
}