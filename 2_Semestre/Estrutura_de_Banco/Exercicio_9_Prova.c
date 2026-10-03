/*
    Autor: Aguinaldo Alves
    Data: 29/09/2026
    Objetivo: Crie um programa em C que declare um vetor de 5 números inteiros e leia seus valores pelo teclado.
    Crie uma função chamada dobro que receba o vetor como parâmetro e altere cada elemento, multiplicando-o por 2.
    Após a execução da função, o programa principal deverá imprimir os valores do vetor já modificados.
*/

// Biblioteca do C
#include <stdio.h>


// Função Dobro
void dobro (int vetor[]) {
    int i;

    for(i = 0; i < 5; i++) {
        vetor[i] = vetor[i] * 2;
    }
}

// Função principal
int main () {
    // Declaração de variável
    int vetor[5];
    int i;

    // Solicitando os números ao usuário
    for (i = 0; i < 5; i++) {
        printf ("Digite um numero inteiro [%d]..........: ", i);
        scanf ("%d", &vetor[i]);
    }

    // Chando a função dobro
    dobro (vetor);

    // Exibindo resultado
    for (i = 0; i < 5; i++) {
        printf ("Resultado....: ");
        printf ("%d", vetor[i]);
        printf ("\n");
    }
}
