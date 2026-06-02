/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Mostrando ao Contrário
                Leia 8 números inteiros e armazene em um vetor. Ao final, mostre os números na
                ordem inversa da leitura.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int numeros[8];
    int i;

    // Lendo os números para o vetor
    printf ("*** LENDO OS NÚMEROS ***\n");
    printf ("----------------------------------------------------\n");
    for (i = 0; i < 8; i++) {
        printf ("Digite o número para posição [%d]......: ", i);
        scanf ("%d", &numeros[i]);
    }

    // Exibindo na ordem inversa
    printf ("\n");
    printf ("*** NÚMEROS NA ORDEM INVERSA ***\n");
    printf ("----------------------------------------------------\n");    
    for (i = 7; i >= 0; i--) {  // Pegamos a última possição do vetor e diminuimos um a rada rodada até chegar a zero.
        printf ("Número da posição [%d]..................: %d\n", i, numeros[i]);
    }

    return 0;
}