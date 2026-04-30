/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Simulador de Caixa Eletrônico
                Enunciado: Leia um valor inteiro e determine a quantidade mínima de cédulas necessárias para sacá-lo.
                Cédulas disponíveis: 100, 50, 20, 10, 5, 2, 1
                    Exemplo: Entrada: R$289
                    Saída:
                        2 cédulas de R$100
                        1 cédula de R$50
                        1 cédula de R$20
                        1 cédula de R$10
                        1 cédula de R$5
                        2 cédulas de R$2
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int valor;
    int quantidade;

    // Verificando o valor para saque e quardando a informação
    printf ("Qual é o valor em Reais que deseja sacar (entre com um valor inteiro)?......: ");
    scanf ("%d" , &valor);
    printf ("\n");

    // Cálculando quantas cédulas serão necessárias.
    if (valor >= 100) {
        quantidade = valor / 100;
        valor = valor % 100;
        printf("%d cédula(s) de R$100\n", quantidade);
    }

    if (valor >= 50) {
        quantidade = valor / 50;
        valor = valor % 50;
        printf("%d cédula(s) de R$50\n", quantidade);
    }    

    if (valor >= 20) {
        quantidade = valor / 20;
        valor = valor % 20;
        printf("%d cédula(s) de R$20\n", quantidade);
    }     

    if (valor >= 10) {
        quantidade = valor / 10;
        valor = valor % 10;
        printf("%d cédula(s) de R$10\n", quantidade);
    }  

    if (valor >= 5) {
        quantidade = valor / 5;
        valor = valor % 5;
        printf("%d cédula(s) de R$5\n", quantidade);
    }  

    if (valor >= 2) {
        quantidade = valor / 2;
        valor = valor % 2;
        printf("%d cédula(s) de R$2\n", quantidade);
    }  

    if (valor >= 1) {
        quantidade = valor / 1;
        valor = valor % 1;
        printf("%d cédula(s) de R$1\n", quantidade);
    }  


    return 0;
}