/*
    Autor: Aguinaldo Alves
    Data: 21/05/2026
    Objetivo:   Exibição de Cabeçalho e Soma de Vetor (Função Void e Vetor)
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// 2º Função - Exibir boas-vindas
void exibirBoasVindas () {
    printf ("=========================\n");
    printf ("  --- SISTEMA DE SOMA ---\n");
    printf ("=========================\n");
}

// 3º Função - Somar elementos
int somarElementos (int numeros[3]) {
    // Declarando variáveis
    int i;          // Controlador para o FOR()
    int total;      // Receberá a soma acumulada dos elementos

    // Inicializando a variável
    total = 0;

    // Realizando a soma dos elementos
    for (i = 0; i < 3; i++) {
        total += numeros[i];
    }

    return (total);
}


// 1º Função - Principal main
int main () {
    // Declaração de variáveis
    int numeros[3];     // Irá receber os números digitados pelo usuário
    int i;              // Controlador para o FOR()
    int soma;           // Irá receber o resultado da soma

    // Chamando a função de boas-vindas
    exibirBoasVindas();

    // Solicitando os números para o usuário
    printf ("\n");
    for (i = 0; i < 3; i++) {
        printf ("Digite um número inteiro [%d].................: ", i);
        scanf ("%d", &numeros[i]);
    }

    // Chamando a função de soma e recebendo o resultado
    soma = somarElementos(numeros);

    // Exibindo as informações para o usuário
    printf ("\n");
    printf ("A soma dos elementos %d + %d + %d = %d \n", numeros[0], numeros[1], numeros[2], soma);
    printf ("\n");

    return 0;
}