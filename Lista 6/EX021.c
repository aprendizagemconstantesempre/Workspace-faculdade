/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Contar Ocorrências
                1. Leia 10 números inteiros e armazene em um vetor.
                2. Conte quantas vezes cada número aparece no vetor.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int V[10];          // Vetor que irá guardar os 10 números digitados pelo usuário.
    int i;              // Controlador do FOR() principal.
    int j;              // Controlador do FOR() interno.
    int contador;       // Vai contar quantas vezes o número aparece no vetor.
    int jaContou;       // Flag para evitar contar o mesmo número duas vezes. 0 = não, 1 = sim.

    // Lendo os 10 números para o vetor V
    printf ("*** INSIRA 10 NÚMEROS INTEIROS ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &V[i]);
    }

    // Contando as ocorrências de cada número no vetor
    printf ("\n");
    printf ("*** OCORRÊNCIAS ***\n");
    printf ("-----------------------------------\n");
    for (i = 0; i < 10; i++) {

        // Verifica se esse número já foi contado antes
        jaContou = 0;
        for (j = 0; j < i; j++) {
            if (V[j] == V[i]) {
                jaContou = 1;   // Muda a flag para 1, indicando que esse número já foi contado.
            }
        }

        // Se não foi contado ainda, conta e exibe
        if (jaContou == 0) {
            contador = 0;
            for (j = 0; j < 10; j++) {
                if (V[j] == V[i]) {
                    contador++;     // Incrementa o contador para cada ocorrência encontrada.
                }
            }
            printf ("O número %d aparece %d vez(es) no vetor.\n", V[i], contador);
        }
    }

    return 0;
}