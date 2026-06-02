/*
    Autor: Aguinaldo Alves
    Data: 23/05/2026
    Objetivo:   Maior de dois números
                Escreva uma função chamada maiorNumero que receba dois inteiros e
                retorne o maior deles.
                Objetivo: reforçar o uso de parâmetros, retorno e estruturas condicionais
                dentro de funções.
                O que o aluno deve fazer: ler dois valores, chamar a função e mostrar qual
                é o maior número informado.
                Dica: organize a lógica de comparação dentro da função, deixando a main
                mais simples.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - maiorNumero, irá verificar qual o maior número entre os dois digitados
int maiorNumero(int num[2]) {
    // Declarando as variáveis
    int maior;      // Irá guardar o maior número

    // Checando o número recebido
    // Definindo o primeiro número como sendo o maior para comparação com o seguindo número.
    maior = num[0];

    // Fazendo a checagem
    if (num[1] > maior) {
        maior = num[1];
    }
    return (maior);
}


// 2º Função - Mensagem para o título
void mensagem () {
    printf ("===============================================\n");
    printf ("=      VERIFICANDO QUAL O MAIOR NÚMERO.       =\n");
    printf ("===============================================\n");
    printf ("\n");
}

// 1º Função - main
int main (){
    // Declarando as variávies
    int numero[2];         // Irá guardar o número digitado pelo usuário.
    int i;                 // Controlador para o FOR().
    int resultado;         // Irá receber o resultado da verificação.

    mensagem();         // Chava a função void para o título do exercício.

    // Solicitando o número para o usuário.
    for (i = 0; i < 2; i++) {
        printf ("Entre com um numero inteiro [%d].................: ", i);
        scanf ("%d", &numero[i]);
    }

    // Chamar a função que vai verificar se o número é par ou impar e já recebe o resultado.
    resultado = maiorNumero(numero);

    // Exibindo o resultado para o usuário.
    printf ("\n");
    printf ("Entre os números %d e %d, o maior é %d \n", numero[0], numero[1], resultado);
    printf ("\n");

    return 0;
}