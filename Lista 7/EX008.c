/*
    Autor: Aguinaldo Alves
    Data: 18/05/2026
    Objetivo:   Maior valor de um vetor
                Crie uma função chamada maiorVetor que receba um vetor de números
                inteiros e sua quantidade de elementos, retornando o maior valor
                armazenado.
                Objetivo: praticar o uso de funções com vetores, percorrendo os elementos
                para encontrar um resultado específico.
                O que o aluno deve fazer: ler os valores do vetor, chamar a função e exibir o
                maior número encontrado.
                Dica: inicialize a variável do maior valor com o primeiro elemento do vetor e
                depois compare com os demais.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// 2º Função - Essa função irá receber os números digitados no vetor na função main().
int maiorVetor (int num[5]) {
    // Declarando as variáveis
    int maiornumero;        // Variável que irá receber o maior número do vetor
    int i;                  // Controlar o FOR()

    // Lendo os números do vetor num[]
    // Estabelecendo uma valor para comparação
    maiornumero = num[0];

    for (i = 0; i< 5; i++) {
        if (num[i] > maiornumero) {
            maiornumero = num[i];
        }
    }

    return (maiornumero);

}


// 1º Função - Principal
int main () {
    // Declaração das variáves
    int vetor[5];           // Retor que irá receber os números digitados pelo usuário.
    int maiorvalor;         // Irá retornar o maior valor digitado pelo usuário, existente no vetor.
    int i;                  // Controlador para o FOR();

    // Solicitando os números para o usuário.
    printf ("\n");
    for (i = 0; i < 5; i++) {
        printf ("Digite um número [%d]................: ",i);
        scanf ("%d", &vetor[i]);
    }

    // Processamento
    // Chamando a função que cálcula o maior valor existente no vetor.
    maiorvalor = maiorVetor(vetor);


    // Exibindo o mario valor existente no vetor.
    printf ("\n");
    printf ("O maior valor existente no vetor é................: %d", maiorvalor);
    printf ("\n");

    return 0;
}