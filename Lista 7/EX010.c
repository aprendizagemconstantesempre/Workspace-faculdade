/*
    Autor: Aguinaldo Alves
    Data: 24/05/2026
    Objetivo:   Soma dos elementos de uma matriz
                Implemente uma função chamada somarMatriz que receba uma matriz 3x3
                de números inteiros e retorne a soma de todos os seus elementos.
                Objetivo: compreender como funções podem ser usadas com matrizes para
                organizar melhor o processamento de dados.
                O que o aluno deve fazer: ler os valores da matriz, chamar a função e exibir
                a soma total dos elementos.
                Dica: use dois laços de repetição, um para percorrer as linhas e outro para
                percorrer as colunas da matriz.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - Irá cálcular a soma dos elementos da matriz
int somarMatriz(int matrizB[3][3]) {
    // Declarando as variáveis
    int soma;   // Irá guardar a soma dos elementos.
    int i;      // Irá percorrer as linhas.
    int j;      // Irá percorrer as colunas.

    // Inicializando a variável de resultado
    soma = 0;        

    // Cálculando a soma dos elementos da matrizB
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma = soma + matrizB[i][j];
        }
    }

    return (soma);
}


// 2º Função - Mensagem para o título
void mensagem () {
    printf ("===========================================================\n");
    printf ("=            SOMA OS ELEMENTOS DE UMA MATRIZ.             =\n");
    printf ("===========================================================\n");
    printf ("\n");
}

// 1º Função - main
int main (){
    // Declarando as variávies
    int matrizA[3][3];  // Matriz 3x3 que irá guardar os numeros digitados pelo usuário;
    int i;              // Controlador para o FOR() para percorrer as linhas
    int j;              // Controlador para o FOR() para percorrer as colunas
    int resultado;     // Irá receber o resultado da soma.

    mensagem();         // Chava a função void para o título do exercício.

    // Solicitando a base ao usuário.
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf ("Digite um número [%d][%d]......: ", i, j);
            scanf ("%d", &matrizA[i][j]);
        }
    }

    // Chamar a função que vai calcular a média do vetor e já recebe o resultado.
    resultado = somarMatriz(matrizA);

    // Exibindo o resultado para o usuário.
    printf ("\n");
    printf ("A soma dos elementos da matriz é.......: %d \n", resultado);
    printf ("\n");

    return 0;
}
