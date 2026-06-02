/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Somando os Valores
                Leia 10 números inteiros, armazene em um vetor e calcule a soma de todos os
                valores. Mostre o total.
*/

// Incluíndo as bibliotecas de C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int vetor[10];      // Irá armazenar os números digitados pelo usuário.
    int soma;           // Irá armazenar a soma dos números digitados para o vetor.
    int i;              // Controlador para o FOR()

    // Inicializando as variáveis
    soma = 0;

    // Lendo os números digitados pelo usuário.
    for (i = 0; i < 10; i++) {
        printf ("Digite um número para posição [%d]...........: ", i);
        scanf ("%d", &vetor[i]);        
    }

    // Somando os números do vetor
    for (i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }

    // Exibindo o resultado para o usuário.
    printf ("\n");
    printf ("A soma toda dos número é..................: %d", soma);
    printf ("\n");

    return 0;
}