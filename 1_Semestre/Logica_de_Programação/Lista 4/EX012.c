/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Identiﬁcação de Números Primos
              Enunciado: Leia um número e veriﬁque se ele é primo (divisível apenas por 1 e por ele mesmo).
              Exemplo: Entrada: 7 → Saída: "Primo"
                       Entrada: 10 → Saída: "Não é primo"
*/

// Incluíndo a biblioteca do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int numero;

    // Solicitando um número ao usuário e guardando a informação
    printf ("Entre com um número inteiro.............: ");
    scanf ("%d" , &numero);
    printf ("\n");

    // Verificando se o úmero é primo
    if (numero / 2 < 1 || numero % 2 == 1) {
        printf ("O número: %.d, é Primo! \n", numero);
    } else {
        printf ("O número: %.d, Não é Primo! \n", numero);
    }

    return 0;
}