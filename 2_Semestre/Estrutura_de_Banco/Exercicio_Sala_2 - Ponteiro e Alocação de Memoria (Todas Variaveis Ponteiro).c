/*
    Autor: Aguinaldo Alves
    Data: 24/09/2026
    Objetivo: A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
    a prefeitura deseja saber:
        1 - Média do salário da população;
        2 - Média do número de filhos;
        3 - Maior salário;
        4 - Percentual de pessoas com salário até R$ 1.000,00
        O final da leitura de dados se dará com a entrada de um salário negativo.
*/

// Declaração das bibliotecas do C
#include <stdio.h>
#include <stdlib.h> // Biblioteca necessária para a função malloc e o free

int main() {
    // Declarando os ponteiros
    float *pSalario = NULL;
    float *pSomaSalarios = NULL;
    float *pMaiorSalario = NULL;
    int *pFilhos = NULL;
    int *pSomaFilhos = NULL;
    int *pTotalPessoas = NULL;
    int *pAteMil = NULL;

    // Atribuindo memória
    pSalario = (float *) malloc(sizeof(float));
    pSomaSalarios = (float *) malloc(sizeof(float));
    pMaiorSalario = (float *) malloc(sizeof(float));
    pFilhos = (int *) malloc(sizeof(int));
    pSomaFilhos = (int *) malloc(sizeof(int));
    pTotalPessoas = (int *) malloc(sizeof(int));
    pAteMil = (int *) malloc(sizeof(int));

    // Verificando estouro de memória
    if (pSalario == NULL || pSomaSalarios == NULL || pMaiorSalario == NULL ||
        pFilhos == NULL || pSomaFilhos == NULL || pTotalPessoas == NULL || pAteMil == NULL) {
        printf("Erro: nao foi possivel alocar memoria.\n");

        // Liberando memória
        free(pSalario);
        free(pSomaSalarios);
        free(pMaiorSalario);
        free(pFilhos);
        free(pSomaFilhos);
        free(pTotalPessoas);
        free(pAteMil);
        return 1;
    }

    // Inicialização dos ponteiros para evitar lixo de memória
    *pSomaSalarios = 0;
    *pMaiorSalario = 0;
    *pSomaFilhos = 0;
    *pTotalPessoas = 0;
    *pAteMil = 0;

    // Entrando com os dados da pesquisa
    do {
        // Solicitando dados dos usuários
        printf("Digite o salario (negativo para encerrar): ");
        scanf("%f", pSalario);

        // Conferindo se o salário é positivo
        if (*pSalario >= 0) {
            printf("Digite o numero de filhos: ");
            scanf("%d", pFilhos);

            // Somamos o salário e os filhos
            *pSomaSalarios += *pSalario;
            *pSomaFilhos += *pFilhos;

            // Incrementando contagem de pessoas
            (*pTotalPessoas)++;

            // Guardando o maior salário
            if (*pSalario > *pMaiorSalario) {
                *pMaiorSalario = *pSalario;
            }

            // Verificando número de pessoas com salário menor igual a R$ 1.000,00
            if (*pSalario <= 1000) {
                (*pAteMil)++;
            }
        }

    // Só no final testamos se continuamos: enquanto o salário não for negativo, repetimos
    } while (*pSalario >= 0);

    // Calcular se houver resposta
    if (*pTotalPessoas > 0) {
        printf ("/n");
        printf("Media salarial: R$ %.2f\n", *pSomaSalarios / *pTotalPessoas);

        // Convertendo para float
        printf("Media de filhos: %.2f\n", (float) *pSomaFilhos / *pTotalPessoas);

        printf("Maior salario: R$ %.2f\n", *pMaiorSalario);

        printf("Percentual com salario ate R$ 1.000,00: %.2f%%\n",
            (float) *pAteMil / *pTotalPessoas * 100);
        printf ("/n");
    } else {
        printf("Nenhum dado foi informado.\n");
    }

    // limpando memória alocada
    free(pSalario);
    free(pSomaSalarios);
    free(pMaiorSalario);
    free(pFilhos);
    free(pSomaFilhos);
    free(pTotalPessoas);
    free(pAteMil);

    return 0;
}