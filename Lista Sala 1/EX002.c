/*
    Autor: Aguinaldo Alves
    Data: 21/05/2026
    Objetivo:   Verificador de Paridade (Lógica Condicional)
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
// 2º Função - Veriricar sé é par
int verificarPar(int numero) {
    if (numero % 2 == 0)
        return 1;
    else
        return 0;
}

// 1º Função - Principal Main
int main() {
    // Declarando as variaveis
    int numero;         // Receberá os valores digitados pelo usuário.
    int i;              // Controlador para o FOR()

    // Solicitando os números para o usuário
    for (i = 1; i <= 3; i++) {
        printf("Digite o %dº número.......................: ", i);
        scanf("%d", &numero);

    // Fazendo a verificação e chamando a função      
        if (verificarPar(numero)) {
            printf ("\n");
            printf("O número %d é PAR.\n\n", numero);
        }
        else {
            printf ("\n");
            printf("O número %d é ÍMPAR.\n\n", numero);
        }
    }

    return 0;
}