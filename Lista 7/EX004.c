/*
    Autor: Aguinaldo Alves
    Data: 23/05/2026
    Objetivo:   Verificação de número par
                Implemente uma função chamada ehPar que receba um número inteiro e
                retorne 1 se ele for par e 0 caso contrário.
                Objetivo: usar funções para resolver decisões lógicas e retornar resultados
                simples para a main.
                O que o aluno deve fazer: ler um número, chamar a função e, com base no
                retorno, exibir uma mensagem adequada.
                Dica: utilize o operador resto da divisão para verificar se o número é divisível
                por 2.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - ehpar, irá verificar se o número digitado pelo usuário é par ou impar
int ehpar(int num) {
    // Checando o número recebido
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}


// 2º Função - Mensagem para o título
void mensagem () {
    printf ("===============================================\n");
    printf ("=   VERIFICANDO SE O NÚMERO É PAR OU IMPAR.   =\n");
    printf ("===============================================\n");
    printf ("\n");
}

// 1º Função - main
int main (){
    // Declarando as variáveis
    int numero;         // Irá guardar o número digitado pelo usuário.
    int resultado;      // Irá receber o resultado da verificação.

    mensagem();         // Chava a função void para o título do exercício.

    // Solicitando o número para o usuário.
    printf ("Entre com um numero inteiro..................: ");
    scanf ("%d", &numero);

    // Chamar a função que vai verificar se o número é par ou impar e já recebe o resultado.
    resultado = ehpar(numero);

    // Exibindo o resultado para o usuário.
    printf ("\n");
    if (resultado == 1) {
        printf ("O número %d é PAR! \n", numero);
    } else {
        printf ("O número %d é IMPAR! \n", numero);
    }

    printf ("\n");

    return 0;
}