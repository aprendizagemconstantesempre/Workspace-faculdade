/*
    Autor: Aguinaldo Alves
    Data: 04/04/2026
    Objetivo: Determinar se um número é Par ou Ímpar
              Exemplo de saída: Entrada: 7 → Saída: "Ímpar"
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Determinando as variáveis
    int numero;

    // Solicitando um número e gardando a informação
    printf ("Digite um número inteiro..............: ");
    scanf ("%d", &numero);

    // Calculando se o número é par ou impar
    if (numero % 2 == 0) {
        printf ("O número digitado foi: %d e ele é Par! \n", numero);
    } else {
        printf ("O número digitado foi: %d e ele é Impar! \n", numero);
    }

    return 0;
}