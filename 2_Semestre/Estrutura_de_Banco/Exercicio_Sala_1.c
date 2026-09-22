/*
    Autor: Aguinaldo Alves
    Data: 21/09/2026
    Objetivo: Coletar 4 notas do aluno, calcular média e dizer se foi aprovado ou reprovado. Utilizando ponteiro
*/

// Biblioteca do C
#include <stdio.h>   // printf, scanf
#include <stdlib.h>  // para alocação dinámica de memória: malloc, free

#define QTD_NOTAS 4  // constante: quantidade fixa de notas por aluno

// Função para calcular média
// Recebe um PONTEIRO para o primeiro elemento do vetor de notas (não o vetor inteiro).
// É assim que o C passa vetores para funções: só o endereço, e a função acessa
// as posições usando notas[i], igual se fosse um vetor comum.
float calcularMedia(int *notas, int qtd) {
    int soma = 0;
    int i;

    for (i = 0; i < qtd; i++) {
        soma += notas[i]; // notas[i] equivale a *(notas + i): acessa o valor apontado
    }

    // Cast (float) força a divisão a ser feita com casas decimais.
    // Sem ele, int / int arredondaria para baixo (divisão inteira).
    return (float) soma / qtd;
}

// Programa
int main () {
    // Declarar as variáveis
    int *notas;   // ponteiro que vai apontar para o vetor de notas na memória
    float media;
    int cont;

    // Alocando memória para o vetor de notas em tempo de execução (heap).
    // malloc reserva espaço para QTD_NOTAS inteiros e devolve o endereço
    // do primeiro byte livre; esse endereço é guardado no ponteiro "notas".
    notas = (int *) malloc(QTD_NOTAS * sizeof(int));

    // malloc pode falhar (ex: sem memória disponível) e retornar NULL.
    // Sempre checar antes de usar o ponteiro, senão o programa pode travar.
    if (notas == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Solicitando as notas do usuário
    // &notas[cont] passa o ENDEREÇO da posição cont para o scanf,
    // que precisa saber onde escrever o valor digitado.
    for (cont = 0; cont < QTD_NOTAS; cont++) {
        printf("Entre com a nota do aluno [%d]................: ", cont);
        scanf("%d", &notas[cont]);
    }

    // chamando a função para calcular média
    // "notas" já É o endereço do vetor, por isso não precisa de & aqui.
    media = calcularMedia(notas, QTD_NOTAS);

    printf("\nMedia do aluno: %.2f\n", media);

    // Verificando se o usuário foi aprovado ou reprovado
    if (media >= 6) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    // Liberando a memória alocada com malloc.
    // Toda memória pedida com malloc precisa ser devolvida com free,
    // senão fica "vazando" memória (memory leak) enquanto o programa roda.
    free(notas);

    return 0;
}