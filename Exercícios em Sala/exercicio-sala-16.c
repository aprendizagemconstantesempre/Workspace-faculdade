/*
    Autor: Aguinaldo Alves
    Data: 23/04/2026
    Obejetivo: Elaborar um programa que efetue a leitura de 15 números numéricos inteiros
                e no final apresente o total do somatório dos valores lidos.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração de variáveis
    int cont;
    int soma;
    int numero;

    // Atribuindo valor a variável
    soma = 0;

    for (cont = 1; cont <= 15; cont++) {
        printf ("Digite um valor inteiro..............: ");
        scanf ("%d", &numero);

        soma = soma + numero;
    }

    printf ("A soma dos 15 números inteiros é: %d \n", soma);


    return 0;
}