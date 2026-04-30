/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Ordenação de Números
              Enunciado: Leia três números inteiros e exiba-os em ordem crescente.
              Exemplo: Entrada: 9, 3, 5 e para Saída: 3, 5, 9
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int numero1;
    int numero2;
    int numero3;
    int ordenacao;

    // Solicitando os números e guardando a informação
    printf ("Digite o 1º numero inteiro........................: ");
    scanf ("%d", &numero1);
    printf ("Digite o 2º numero inteiro........................: ");
    scanf ("%d", &numero2);
    printf ("Digite o 3º e último número inteiro...............: ");
    scanf ("%d", &numero3);

    // Verificando se numero 1 é menor que número 2
    if (numero1 > numero2) {
        ordenacao = numero1;
        numero1 = numero2;
        numero2 = ordenacao;
    } 
    // Verificando se o número 1 é menor que número 3
    if (numero1 > numero3) {
        ordenacao = numero1;
        numero1 = numero3;
        numero3 = ordenacao;
    }
    // Verificando se o número 2 é menor que número 3
    if (numero2 > numero3) {
        ordenacao = numero2;
        numero2 = numero3;
        numero3 = ordenacao;
    }

    printf ("Ordem crescente: %d, %d e %d \n", numero1, numero2, numero3);

    return 0;
}