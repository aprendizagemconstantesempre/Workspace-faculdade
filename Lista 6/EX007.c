/*
    Autor: Aguinaldo Alves
    Data: 09/05/2026
    Objetivo:   Maior Diferença
                1. Leia um vetor A com N elementos.
                2. Calcule a maior diferença absoluta entre dois elementos consecutivos de A.
                3. Imprima essa maior diferença.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>
#include <stdlib.h>     // Biblioteca necessário para achar a diferença absoluta.

// Programa
int main () {
    // Declarando as variáveis
    int VA[10];         // Vetor que irá guardar 10 elementos digitados pelo usuário.
    int i;              // Controlador para o FOR()
    int diferenca[10];  // Vetor que irá guardar a diferença entre os elementos.
    int maior;          // Vai guardar a maior diferença entre os números.

    // Inicializando as variáveis
    maior = 0;

    // Lendo os 10 elemtos inseridos pelo usuário.
    for (i = 0; i < 10; i++) {
        printf ("Digite um número inteiro para posição [%d]...........: ", i);
        scanf ("%d", &VA[i]);
    }

    // Processamento
    // Cálculando a diferença entre os números digitados.
    for (i = 1; i < 10; i++) {              // Iniciei em 1 porque a primeira posição não tem anterior.
        diferenca[i] = abs(VA[i] - (VA[i - 1]));    // o abs desconsidera se o número é negativo, ai o código vai olhar para diferença absoluta.
    }

    // Verificando qual a diferença maior.
    for (i = 1; i < 10; i++) {
        if (diferenca[i] > maior) {     // Inicializei a variável maior = 0
            maior = diferenca[i];
        }
    }

    // Exibindo informações para o usuário.
    printf ("\n");
    printf ("*** AS DIFERENÇAS ENTRE OS NÚMEROS DO VETOR A, SÃO: *** \n");
    printf ("--------------------------------------------------------\n");

    for (i = 1; i < 10; i++) {
        printf ("As diferenças entre os números são: %d \n", diferenca[i]);
    }

    // Exibindo a maior diferença entre os números
    printf ("\n");
    printf ("A maior diferença é %d \n", maior);
   

    return 0;
}