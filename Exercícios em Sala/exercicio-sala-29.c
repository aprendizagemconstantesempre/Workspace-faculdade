/*
    Autor: Aguinaldo Alves
    Data: 14/05/2026
    Objetivo: Criar um programa com funções.
*/ 

// Inclunindo as bibliotecas do C
#include <stdio.h>

// Função secundária - Imprime um cabeçalho
void imprimir() {
    printf ("==========================================================\n");
    printf ("========================= UNICEV =========================\n");
    printf ("==========================================================\n");
}

// Função secundária - Que verifica se o número é par.
void ehpar (int num) {
    if (num % 2 == 0) {
        printf ("\n");
        printf ("O número %d digitado é PAR!", num);
        printf ("\n");
    } else {
        printf ("\n");
        printf ("O número %d é IMPAR!", num);
        printf ("\n");
    }

// A função void não precisa de return.
}


// Programa principal
int main () {
    // Declaração de variáveis
    int numero;         // Essa variável só existe na função main.

    // Chamando cabeçalho
    imprimir();

    printf ("Digite um número...........: ");
    scanf ("%d", &numero);

    // chamando a função ehpar()
    ehpar(numero);

    return 0; // A Função main sempre terá o return.
}

