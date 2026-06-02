/*
    Autor: Aguinaldo Alves
    Data: 10/05/2026
    Objetivo:   Operação entre Vetores
                1. Leia dois vetores X e Y, ambos com N elementos.
                2. Para cada posição i, calcule:
                    T[i] = (X[i] + Y[i])²
                3. Imprima os vetores X, Y e T.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <math.h>   // Eu inclui por conta do exponencial, mas não vou usar o POW(), vou ser mais direto.
#include <stdlib.h> // Vou usar para limpar a tela antes de exibir as saídas do código.

// Programa
int main () {
    // Declarando as variáveis
    int x[10];          // Vetor X que irá guardar 10 números.
    int y[10];          // Vetor Y que irá guardar 10 números.
    int t[10];          // Vetor T que irá guardar os resultados da equação proposta.
    int i;              // Controlador do FOR()

    // Lendo os números para o vetor X
    printf ("*** NÚMEROS DO VERTOR X ***\n");
    printf ("-------------------------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf ("Digite o número para posição [%d]..............: ", i);
        scanf ("%d", &x[i]);
    }

    // Lendo os números para o vetor Y
    printf ("\n");
    printf ("*** NÚMEROS DO VERTOR Y ***\n");
    printf ("-------------------------------------------------------\n");    
    for (i = 0; i < 10; i++) {
        printf ("Digite o número para posição [%d]..............:", i);
        scanf ("%d", &y[i]);
    }

    // Cálculando as equações entre vetor X e Y, para encontrar o valor e alimentar o vetor T
    for (i = 0; i < 10; i++) {
        t[i] = (x[i] + y[i]) * (x[i] + y[i]);       // Não vou usar o POW(), por isso vou multiplicar a soma de x e y pela soma deles mesmo.
    }

    // Limpando a tela 
    #ifdef _WIN32           // Cobre Windows 32 e 64 bits
        system("cls");      // Cobre o Windows
    #else
        system("clear");    // Cobre o Linux
    #endif

    // Exibindo as informações para o usuário.
    // Exibindo os números do vetor X
    printf ("\n");
    printf ("*** NÚMEROS DO VERTOR X ***\n");
    printf ("------------------------------------------------------------\n"); 
    for (i = 0; i < 10; i++)  {
        printf ("O número que está na posição [%d], do vetor X é...: %d\n", i, x[i]);
    }

    // Exibindo os números do vetor Y
    printf ("\n");
    printf ("*** NÚMEROS DO VERTOR Y ***\n");
    printf ("-------------------------------------------------------\n");  
    for (i = 0; i < 10; i++)  {
        printf ("O número que está na posição [%d], do vetor Y é...: %d\n", i, y[i]);
    }

    // Exibindo os números do vetor T
    printf ("\n");
    printf ("*** NÚMEROS DO VERTOR T ***\n");
    printf ("-------------------------------------------------------\n");  
    for (i = 0; i < 10; i++)  {
        printf ("O número que está na posição [%d], do vetor T é...: %d\n", i, t[i]);
    }    

    return 0;
}