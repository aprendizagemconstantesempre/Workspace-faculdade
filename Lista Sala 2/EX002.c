/*
    Autor: Aguinaldo Alves
    Data: 01/06/2026
    Objetivo:   Calculadora de IMC
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - ClassificaçãoIMC
void classificarIMC (float imc) {

    if (imc < 18.5) {
        printf ("Abaixo do peso. \n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf ("Peso Normal. \n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf ("Sobrepeso. \n");
    } else if (imc >= 30) {
        printf ("Obesidade. \n");
    }
}



// 2º Função - CalcularIMC
float calcularIMC(float peso, float altura) {
    // Declarando as variáveis
    float imc;     // Irá receber o IMC

    // Calculando o IMC
    imc = peso / (altura * altura);

    return (imc);

}



// 1º Função - Main
int main () {
    // Declarando as variáveis
    float peso;         // Irá guardar o peso do usuário
    float altura;       // Irá guardar a altura do usuário
    float resultado;    // Irá receber o IMC calculado

    // Solicitando as informações ao usuário
    printf ("Entre com seu peso em quilos............: ");
    scanf ("%f", &peso);
    
    printf ("Entre com sua altura em metros..........: ");
    scanf ("%f", &altura);

    // chamando a função para calcular o IMC
    resultado = calcularIMC(peso, altura);

    // Exibindo informações ao usuário
    printf ("Seu peso é..........................: %.2f \n", peso);
    printf ("Sua altura é........................: %.2f \n", altura);
    printf ("Seu IMC é...........................: %.2f \n", resultado);
    printf("Classificação: ");
    classificarIMC(resultado);      // chamando a função
    printf ("\n");
    return 0;
}