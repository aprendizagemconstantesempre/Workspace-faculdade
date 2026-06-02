/*
    Autor: Aguinaldo Alves
    Data: 01/06/2026
    Objetivo:   Maior valor de um vetor
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
// 2º Função - MaiorVetor
int maiorVetor(int vetorB[5]) {
    // Declarando as variáveis
    int maiorvalor; // Receberá o maior valor do vetor.
    int i;          // controlador para o FOR();

    // Fixando o primeiro valor para efeito de comparação
    maiorvalor = vetorB[0];

    // Buscando pelo maior valor
    for (i = 0; i < 5; i++) {
        if (vetorB[i] > maiorvalor) {
            maiorvalor = vetorB[i];
        }
    }

    return (maiorvalor);
}



// 1º Função - Main
int main () {
    // Declarando as variáveis
    int vetorA[5];      // Irá armazenar os valores digitados pelo usuário;
    int i;              // Controlador para o FOR();
    int resultado;      // Irá receber o maior valor digitado.

    // Solicitando os números ao usuário.
    for (i = 0; i < 5; i++) {
        printf ("Entre com um número inteiro [%d]..........: ", i);
        scanf ("%d", &vetorA[i]);
    }

    // Chamando a função maiorVetor e recebendo o maior número digitado.
    resultado = maiorVetor(vetorA);

    // Exibundo resultado ao usuário
    printf ("\n");
    printf ("O maior valor do vetor é.............: %d \n", resultado);

    return 0;
}