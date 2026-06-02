/*
    Autor: Aguinaldo Alves
    Data: 02/06/2026
    Objetivo: Verificação de número primo (qualquer número natural maior que 1, que pode ser dividido apenas por 1 e por ele mesmo).
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
// 2º Função - Se o número é primo
int ehPrimo(int numero) {
    // Declarando a variável
    int i;

    // 0 e 1 não são primos
    if (numero <= 1) {
        return 0;
    }

    // Verificando se o número é primo
    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0; // achou divisor — não é primo
        }
    }
return 1; // não achou nenhum — é primo
}



// 1º Função - Main
int main () {
    // Declarando as variáveis
    int numero;
    int resultado;

    // solicitando número ao usuário
    printf ("Digite um número inteiro e positivo.............: ");
    scanf ("%d", &numero);

    // Chamando a função e recebendo retorno
    resultado = ehPrimo(numero);

    // Exibindo resultado
    if (resultado == 1) {
        printf ("\n");
        printf ("O número digitado é PRIMO!");
        printf ("\n");
    } else {
        printf ("\n");        
        printf ("O número digitado NÃO é Primo.");
        printf ("\n");
    }

    return 0;
}