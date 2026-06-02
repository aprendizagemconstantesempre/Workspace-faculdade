/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Pares, Ímpares e Combinações
                1. Leia um vetor V com M elementos inteiros.
                2. Verifique se a soma dos pares é igual à soma dos ímpares. Mostre a mensagem adequada.
                3. Depois, leia dois valores X e Y. Verifique quantas vezes a sequência X
                seguido de Y aparece em V, exatamente nessa ordem.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int V[20];              // Vetor que irá guardar 20 números inteiros.
    int i;                  // Controlador para o FOF()
    int somapares;          // Vai guardar a soma dos número pares.
    int somaimpares;        // Vai guardar a soma dos números impares.
    int x;                  // Número para combinação.
    int y;                  // Número para combinação.
    int qtdecombinacoes;    // Vai guardar a quantidade de vezes que X e Y aparecem no vetor V.

    // Inicializando as variáveis
    somapares = 0;
    somaimpares = 0;
    qtdecombinacoes = 0;

    // Lendo os número do vetor
    printf ("*** INSIRA 20 NÚMEROS INTEIROS *** \n");
    printf ("-----------------------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf ("Número para posição [%d]........: ", i);
        scanf ("%d", &V[i]);
    }
    
    // Lendo os números de X e Y para combinação
    printf ("\n");
    printf ("*** INSIRA UM VALOR PARA X E OUTRO PARA Y ***\n");
    printf ("-----------------------------------------------\n");
    printf ("Valor para X........................: ");
    scanf ("%d", &x);
    printf ("Valor para Y........................: ");
    scanf ("%d", &y);

    // Somando os pares e impares
    for (i = 0; i < 20; i++) {
        if (V[i] % 2 == 0) {
            somapares = somapares + V[i];
        } else {
            somaimpares = somaimpares + V[i];
        }
    }

    // Verificando a quantidade de combinações que ocorrem com X e Y no Vetor.
    for (i = 0; i < 19; i++) {
        if ((V[i] == x) && (V[i + 1] == y)) {
            qtdecombinacoes++;
        }
    }


    // Exibindo informações para usuário.
    printf ("\n");
    printf ("---------------------------------------------------------------\n");
    printf ("A soma dos números pares é.................: %d \n", somapares);
    printf ("A soma dos números impares é...............: %d \n", somaimpares);

    // Verificando se a soma dos pares e dos impares, são iguais.
    if (somapares == somaimpares) {
        printf("A soma dos pares É IGUAL à soma dos ímpares.\n");
    } else {
        printf("A soma dos pares NÃO É IGUAL à soma dos ímpares.\n");
    }

    printf ("A quantidade de vezes que X=%d e Y=%d, aparecem no vetor, é %d \n", x, y, qtdecombinacoes);

    return 0;
}