/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Procurando um Número
                1. Leia 6 números inteiros e armazene em um vetor.
                2. Leia mais um número.
                3. Diga se ele está no vetor e em qual posição.
                4. Caso não encontre, informe que não foi encontrado.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int V[6];           // Vetor que irá guardar os 6 números digitados pelo usuário.
    int numero;         // Vai guardar o número que o usuário quer procurar.
    int i;              // Controlador do FOR()
    int encontrado;     // Vai indicar se o número foi encontrado ou não. 0 = não, 1 = sim.

    // Inicializando as variáveis
    encontrado = 0;

    // Lendo os 6 números para o vetor V
    printf ("*** INSIRA 6 NÚMEROS INTEIROS ***\n");
    printf ("----------------------------------\n");
    for (i = 0; i < 6; i++) {
        printf ("Digite o número para a posição [%d].........: ", i);
        scanf ("%d", &V[i]);
    }

    // Lendo o número que o usuário quer procurar
    printf ("\n");
    printf ("Digite o número que deseja procurar.........: ");
    scanf ("%d", &numero);

    // Exibindo para o usuário se o número foi encontrado
    printf ("\n");
    printf ("*** RESULTADO DA BUSCA ***\n");
    printf ("----------------------------------\n");
    for (i = 0; i < 6; i++) {
        if (V[i] == numero) {
            printf ("O número %d foi encontrado na posição [%d]!\n", numero, i);
            encontrado = 1;     // Indicando que o número foi encontrado.
        }
    }

    // Exibindo para o usuário se o número NÃO foi encontrado.
    if (encontrado == 0) {
        printf ("O número %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}