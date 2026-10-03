/*
    Autor: Aguinaldo Alves
    Data: 29/09/2026
    Objetivo: Desenvolva um programa em C que preencha um vetor de 6 posições com números inteiros aleatórios entre 1 e 20.
    O programa não poderá inserir números repetidos no vetor.
    Após preencher o vetor:
        a) Solicite ao usuário um número inteiro entre 1 e 20;
        b) Pesquise se o número informado está presente no vetor;
        c) Informe "Numero encontrado" ou "Número não encontrado";
        d) Ao final, exiba todos os números armazenados no vetor.
    Utilize estruturas de repetição e uma estrutura adequada para realizar a busca e a validação de números repetidos.
*/

// Bibliotecas do C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função Principal
int main () {
    // Declarando as variáveis
    int vetor[6];
    int numero;
    int achou;
    int posicao;
    int x;
    int i;

    // Preenchenco o vetor randomicamente
    srand(time(NULL));
    for (x = 0; x < 6; x++) {
        do {
            numero = rand() % 20 + 1;

            for (i = 0; i < x; i++) {
                if (vetor[i] == numero) {
                    numero = 0;
                }
            }
        
        } while (numero == 0);
        vetor[x] = numero;
        
    }

    // Solicitando ao usuário um número inteiro entre 1 e 20
    printf ("Insira um numero inteiro entre 1 e 20.........: ");
    scanf ("%d", &numero);

    // Verificando se o número digitado pelo usuário existe no vetor
    // Inicializando a variável achou
    achou = 0;
    posicao = 0;

    for (i = 0; i < 6; i++) {
        if (vetor[i] == numero) {
            achou = 1;
            posicao = i;
        }
    }

    if (achou == 1) {
        printf ("Numero encontrado. \n");
        printf ("O numero encontrato esta na posicao [%d] do vetor. \n", posicao);
    } else {
        printf ("Numero NAO encontrado.\n");
    }

    // Exibindo o resultado
    printf ("O Numero digitado pelo usuario foi...............: %d \n", numero);
    printf ("\n");
    for (i = 0; i < 6; i++) {
        printf ("%d", vetor[i]);
        printf ("\n");
    }

    return 0;
}