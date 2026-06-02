/*
    Autor: Aguinaldo Alves
    Data: 08/05/2026
    Objetivo:   Ler um vetor A com 20 elementos inteiros. Calcular a soma S com o seguinte padrão:
                S = (A[1] - A[20]) + (A[2] - A[19]) + ... + (A[10] - A[11])
                Depois, imprima o valor de S.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int numeros [20];
    int soma;
    int cont;

    // Inicializando as variáveis
    soma = 0;

    // Lendo os 20 números inteiros
    for (cont = 0; cont < 20; cont++) {
        printf ("Entre com um número inteiro e positivo [%d]...............: ", cont);
        scanf ("%d", &numeros[cont]);
    }

    printf ("---------------------------------------------------------------- \n");

    // Cálculando a soma dos números
    soma = (numeros[0]-numeros[19]) + (numeros[1]-numeros[18]) + (numeros[2]-numeros[17]) 
         + (numeros[3]-numeros[16]) + (numeros[4]-numeros[15]) + (numeros[5]-numeros[14]) 
         + (numeros[6]-numeros[13]) + (numeros[7]-numeros[12]) + (numeros[8]-numeros[11]) 
         + (numeros[9]-numeros[10]);

    // Exibindo o resultado da soma
    printf ("\n");
    printf ("O Resultado da soma é: ..................: %d", soma);
    printf ("\n");

    return 0;
}