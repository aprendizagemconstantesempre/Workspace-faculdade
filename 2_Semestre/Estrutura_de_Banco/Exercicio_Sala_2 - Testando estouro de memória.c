#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Tamanho de cada bloco que vamos pedir: 100 MB
#define TAMANHO_BLOCO (100 * 1024 * 1024)

// Trava de segurança: paramos ao chegar nesse total, mesmo que ainda tenha memória.
// Se quisermos ir até o fim de verdade, aumentamos esse valor (com cuidado!)
#define LIMITE_MB 2000

int main() {
    // EXPERIMENTO 1: pedimos um bloco absurdo de uma vez só (1 terabyte)
    char *pGigante = NULL;
    pGigante = (char *) malloc((size_t) 1024 * 1024 * 1024 * 1024);

    // O sistema não tem esse espaço pra nos dar, então o malloc devolve NULL
    if (pGigante == NULL) {
        printf("Experimento 1: o malloc devolveu NULL, nao havia 1 TB disponivel.\n\n");
    } else {
        printf("Experimento 1: o sistema aceitou o pedido (acontece em alguns Linux).\n\n");
        free(pGigante);
    }

    // EXPERIMENTO 2: vazamento de memória proposital
    char *pBloco = NULL;
    int totalMB = 0;

    printf("Experimento 2: alocando blocos de 100 MB sem nunca dar free...\n");

    while (totalMB < LIMITE_MB) {
        // Pedimos um bloco novo e anotamos o endereço por cima do anterior.
        // O endereço antigo se perde pra sempre: é aqui que nasce o vazamento
        pBloco = (char *) malloc(TAMANHO_BLOCO);

        // Se o sistema negar, chegamos no limite da memória
        if (pBloco == NULL) {
            printf("O malloc devolveu NULL depois de %d MB. Memoria esgotada!\n", totalMB);
            return 1;
        }

        // Escrevemos no bloco para o sistema ocupar a memória de verdade.
        // Sem isso, alguns sistemas só "prometem" o espaço e não usam a RAM
        memset(pBloco, 1, TAMANHO_BLOCO);

        totalMB += 100;
        printf("Ja vazamos %d MB\n", totalMB);
    }

    printf("Chegamos na trava de seguranca (%d MB) sem esgotar a memoria.\n", LIMITE_MB);

    // Repara que não damos free em nada: só o encerramento do programa devolve a memória
    return 0;
}