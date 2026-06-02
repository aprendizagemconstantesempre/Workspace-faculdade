/*
    Autor: Aguinaldo Alves
    Data: 23/05/2026
    Objetivo:   Potência de um número
                Implemente uma função chamada potencia que receba uma base e um
                expoente inteiros e retorne o resultado da potência.
                Objetivo: praticar funções que realizam processamento repetitivo e
                retornam um valor calculado.
                O que o aluno deve fazer: ler a base e o expoente, chamar a função e exibir
                o resultado.
                Dica: faça o cálculo usando repetição, sem utilizar bibliotecas prontas.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - Irá cálcular a média do vetor
int potencia(int num1, int num2) {
    // Declarando as variáveis
    int calculo;    // Irá guardar o resultado da potência
    int baseB;      // Irá receber a base da função principal
    int expoenteB;  // Irá receber o expoente da função principal
    int i;          // Controlador para o FOR()

    // Inicializando a variável de resultado
    calculo = 1;        // Qualquer número multiplicado por um será ele mesmo.

    // Definindo os valores para as variáveis
    baseB = num1;
    expoenteB = num2;

    // Cálculando a potência
    for (i = 0; i < expoenteB; i++) {
        calculo = calculo * baseB;
    }
    
    return (calculo);
}


// 2º Função - Mensagem para o título
void mensagem () {
    printf ("===========================================================\n");
    printf ("=                   POTÊNCIA DE UM NÚMERO.                =\n");
    printf ("===========================================================\n");
    printf ("\n");
}

// 1º Função - main
int main (){
    // Declarando as variávies
    int base;         // Irá guardar a base que será elevada a potência
    int expoente;     // Irá guardar o expoente que a base será elevada.
    int resultado;    // Irá receber o resultado da potência.

    mensagem();         // Chava a função void para o título do exercício.

    // Solicitando a base ao usuário.
    printf ("Entre com um numero inteiro que será a base...........: ");
    scanf ("%d", &base);

    // Solicitando o expoente ao usuário.
    printf ("Entre com um numero inteiro que será o expoente.......: ");
    scanf ("%d", &expoente);


    // Chamar a função que vai calcular a média do vetor e já recebe o resultado.6
    resultado = potencia(base, expoente);

    // Exibindo o resultado para o usuário.
    printf ("\n");
    printf ("O número %d, elevado a %d potência é..........: %d \n", base, expoente, resultado);
    printf ("\n");

    return 0;
}