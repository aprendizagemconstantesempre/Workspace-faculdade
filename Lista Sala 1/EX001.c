/*
    Autor: Aguinaldo Alves
    Data: 21/05/2026
    Objetivo:   Calculadora de Diferença (Função com Retorno)
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
// 2º Função - Subtrair
int subtrair (int num[2]) {
    // Declarando variáveis
    int subtracao;      // Receberá o resultado da subtração

    // Inicializando a variável
    subtracao = 0;

    // Realizando a subtração
    subtracao = num[0] - num[1];

    return (subtracao);
}


// 1º Função - Principal main
int main () {
    // Declaração de variáveis
    int numeros[2];     // Irá receber os números digitados pelos usuários
    int i;              // Controlador para o FOR()
    int resultado;      // Irá receber o resultado da subtração

    // Solicitando os números para os usuários.
    printf ("\n");
    for (i = 0; i < 2; i++) {
        printf ("Digite um número inteiro [%d].................: ", i);
        scanf ("%d", &numeros[i]);
    }

    // Chamando a segunda função e recebendo o resultado da subtração.
    resultado = subtrair(numeros);

    // Exibindo as informações para os usuários
    printf ("\n");
    printf ("O resultado da subtração dos números %d - %d = %d \n", numeros[0], numeros[1], resultado);
    printf ("\n");

    return 0;
}