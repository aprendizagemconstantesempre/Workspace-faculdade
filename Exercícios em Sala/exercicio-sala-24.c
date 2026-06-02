/*
    Autor: Aguinaldo Alves
    Data: 07/05/2026
    Objetivo: Cálcular média aritmética de números pares e impares.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis;
    int numeros [20];   // Vetor ou Array com 20 posiões;
    int cont;
    float mediapares;
    float somapares;
    int qtdpares;
    float mediaimpares;
    int somaimpares;
    int qtdimpares;

    // Inicializando as variáveis
    somapares = 0;
    qtdpares = 0;
    somaimpares = 0;
    qtdimpares = 0;

    // Lendo os números inteiros
    for (cont = 0; cont < 20; cont++) {
    printf ("Digite um número interiro [%d]............: ", cont);
    scanf ("%d", &numeros[cont]);
    }

    // Verificando os números pares e impares 
    for (cont = 0; cont < 20; cont++) {
        if (numeros[cont] % 2 == 0) {
            somapares = somapares + numeros[cont];
            qtdpares++;
        } else {
            somaimpares = somaimpares + numeros[cont];
            qtdimpares++;
        }
    }

    // Cálculando as médias
    // NUNCA POSSO DIVIDIR UM NÚMERO POR ZERO - O SISTEMA QUEBRA
    if (qtdpares != 0) {
        mediapares = somapares / qtdpares;
    } else {
        mediapares = 0;
    }

    if (qtdimpares != 0) {
        mediaimpares = somaimpares / qtdimpares;
    } else {
        mediaimpares = 0;
    }

    // Mostranto as médias
    printf ("\n\n");
    printf ("Soma dos números pares e %d qtde de pares %d e a média é %.2f", somapares, qtdpares, mediapares);
    printf ("\n");
    printf ("Soma dos números impares e %d qtde de impares %d e a média é %.2f", somaimpares, qtdimpares, mediaimpares);
    printf ("\n");

    return 0;
}