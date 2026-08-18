/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Calculo de IMC (Índice de Massa Corporal)
              Enunciado: Leia peso (kg) e altura (m) de uma pessoa, depois calcule o IMC e classiﬁque:
              Fórmula do IMC:
                IMC = Peso / (Altura²)
              Onde:
                - Peso está em quilogramas (kg)
                - Altura está em metros (m)
              Tabela de Classiﬁcação:
                Abaixo de 18.5 → "Abaixo do peso"
                Entre 18.5 e 24.9 → "Peso normal"
                Entre 25.0 e 29.9 → "Sobrepeso"
                30.0 ou mais → "Obesidade"
              Exemplo:
                Entrada: Peso = 70kg, Altura = 1.75m
                Saída: IMC = 22.9, Peso normal
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    
    // Declarando as variáveis
    float peso;
    float altura;
    float IMC;

    // Solicitando o peso, altura do usuário e guardando as informações
    printf ("Entre com seu peso em quilogramas (kg)...................: ");
    scanf ("%f" , &peso);
    printf ("Entre com sua altura em metros (m).......................: ");
    scanf ("%f" , &altura);
    printf ("\n");

    // Cálculando o IMC do usuário
    IMC = peso / ((altura) * (altura));

    // Fazendo classificação com base no IMC obtido
    if (IMC < 18.5) {
        printf ("IMC = %.2f, Abaixo do peso. \n", IMC);
        printf ("\n");

    } else if (IMC >= 18.5 && IMC <= 24.9) {
        printf ("IMC = %.2f, Peso normal. \n", IMC);
        printf ("\n");

    } else if (IMC >= 25.0 && IMC <= 29.9) {
        printf ("IMC = %.2f, Sobrepeso. \n", IMC);
        printf ("\n");

    } else {
        printf ("IMC = %.2f, Obesidade. \n", IMC);
        printf ("\n");
    }

    return 0;
}