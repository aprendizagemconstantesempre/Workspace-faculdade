/*
    Autor: Aguinaldo Alves 
    Data: 09/05/2026
    Objetivo:   Soma Ponderada e Frações
                1. Leia um vetor A com 10 elementos.
                2. Calcule a soma ponderada:
                    S = a1/1 + a2/2 + a3/3 + ... + aN/N
                3. Conte quantos termos dessa soma têm numerador menor que o denominador (ou seja, ai < i).
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declaração de variáveis
    float A[10];               // Vetor para guardar os 10 elementos 
    float soma;                // Guardar a soma ponderada 
    int i;                     // Controlador para o FOR
    int qtdetermos;            // Vai guardar a quantiade de elementos que são menores que os denominadores;

    // Inicializando as variáveis
    soma = 0;
    qtdetermos = 0;

    // Ler os 10 elementos
    for (i = 0; i < 10; i++) {
        printf ("Entre com um número inteiro e positivo, para posição [%d] do Vetor.........: ", i);
        scanf ("%f", &A[i]);
    }


    // Processamento
    // Somando os elementos
    for (i = 0; i < 10; i++) {
        soma = soma + A[i] / (i + 1);      // Não é possível dividir um número por zero, então acrescenti 1 a mais.
    }


    // Exibição do resultado para o usuário.
    printf ("\n");
    printf ("*** OS ELEMENTOS DIGITADOS FORAM *** \n");
    printf ("----------------------------------------- \n");
    for (i = 0; i < 10; i++) {
        printf ("O elemento %d digitado foi: %.2f \n", i, A[i]);
    }

    // Exibindo a quantidade de numeradores que é menor que o denominador.
    for (i = 0; i < 10; i++) {
        if (A[i] < (i + 1)) {
            qtdetermos++;
        }
    }
    printf ("\n");
    printf ("A soma ponderada é: %f \n", soma);
    printf ("A quantidade de numeradores menor que denominadores é: %d \n", qtdetermos);


    return 0;
}