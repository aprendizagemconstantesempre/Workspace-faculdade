/*
    Autor: Aguinaldo Alves
    Data: 22/09/2026
    Objetivo: A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
    a prefeitura deseja saber:
        1 - Média do salário da população;
        2 - Média do número de filhos;
        3 - Maior salário;
        4 - Percentual de pessoas com salário até R$ 1.000,00
        O final da leitura de dados se dará com a entrada de um salário negativo.
*/

// Bibliotecas do C
#include <stdio.h>
#include <stdlib.h>

// Função principal
int main () {
    // Declaração dos ponteiros
    float *salarios;
    int *filhos;

    // Capacidade inicial dos vetores (dobra sempre que encher)
    int capacidade = 2;

    // Alocação da memória para os vetores
    salarios = malloc(capacidade * sizeof(float));
    filhos = malloc(capacidade * sizeof(int));

    // Condição para verificar se deu estouro de memória
    if (salarios == NULL || filhos == NULL) {
        printf ("Erro ao alocar memoria.\n");
        return 1;
    }

    // Variáveis para guardar os resultados
    int total = 0;
    float salarioAtual;
    int filhosAtual;

    // Solicitando as informações ao usuários (só sai com salário negativo)
    while (1) {
        printf ("Entre com o salario (negativo para encerrar)........: ");
        scanf ("%f", &salarioAtual);

        if (salarioAtual < 0) {
            break;
        }

        printf ("Entre com o numero de filhos..........................: ");
        scanf ("%d", &filhosAtual);

        // Vetores cheios: dobra a capacidade antes de gravar
        if (total == capacidade) {
            capacidade *= 2;

            // realloc vai para um ponteiro temporário para não perder o bloco antigo se falhar
            float *novoSalarios = realloc(salarios, capacidade * sizeof(float));
            if (novoSalarios == NULL) {
                printf ("Erro ao realocar memoria.\n");
                free(salarios);
                free(filhos);
                return 1;
            }
            salarios = novoSalarios;

            int *novoFilhos = realloc(filhos, capacidade * sizeof(int));
            if (novoFilhos == NULL) {
                printf ("Erro ao realocar memoria.\n");
                free(salarios);
                free(filhos);
                return 1;
            }
            filhos = novoFilhos;
        }

        salarios[total] = salarioAtual;
        filhos[total] = filhosAtual;

        total++;
    }

    if (total == 0) {
        printf ("Nenhum dado foi informado.\n");
        free(salarios);
        free(filhos);
        return 0;
    }

    // Cálculando os resultados
    float somaSalarios = 0;
    int somaFilhos = 0;
    float maiorSalario = salarios[0];
    int qtdAte1000 = 0;

    for (int i = 0; i < total; i++) {
        somaSalarios += salarios[i];
        somaFilhos += filhos[i];

        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }

        if (salarios[i] <= 1000.0) {
            qtdAte1000++;
        }
    }

    float mediaSalarios = somaSalarios / total;
    float mediaFilhos = (float) somaFilhos / total;
    float percentualAte1000 = (qtdAte1000 * 100.0f) / total;

    printf ("\n***** Resultados ****\n");
    printf ("Media de salario......................: R$ %.2f\n", mediaSalarios);
    printf ("Media de numero de filhos.............: %.2f\n", mediaFilhos);
    printf ("Maior salario..........................: R$ %.2f\n", maiorSalario);
    printf ("Percentual com salario ate R$ 1000,00..: %.2f%%\n", percentualAte1000);

    // Libera a memória alocada dinamicamente
    free(salarios);
    free(filhos);

    return 0;
}
