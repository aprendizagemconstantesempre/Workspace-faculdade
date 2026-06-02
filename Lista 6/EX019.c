/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Média dos Valores
                1. Leia 5 números reais e armazene em um vetor.
                2. Calcule a média dos valores.
                3. Mostre os valores maiores que a média.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    float V[5];         // Vetor que irá guardar os 5 números reais digitados pelo usuário.
    float soma;         // Vai guardar a soma dos valores para calcular a média.
    float media;        // Vai guardar a média dos valores.
    int i;              // Controlador do FOR()

    // Inicializando as variáveis
    soma  = 0;
    media = 0;

    // Lendo os 5 números para o vetor V
    printf ("*** INSIRA 5 NÚMEROS REAIS ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%f", &V[i]);
    }

    // Calculando a soma dos valores
    for (i = 0; i < 5; i++) {
        soma = soma + V[i];     // Acumula os valores do vetor.
    }

    // Calculando a média
    media = soma / 5;

    // Exibindo os resultados para o usuário
    printf ("\n");
    printf ("*** RESULTADO ***\n");
    printf ("-----------------------------------\n");
    printf ("A média dos valores é: %.2f\n", media);
    printf ("\n");
    printf ("*** VALORES MAIORES QUE A MÉDIA ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 5; i++) {
        if (V[i] > media) {
            printf ("O valor %.2f, na posição [%d], é maior que a média!\n", V[i], i);
        }
    }

    return 0;
}