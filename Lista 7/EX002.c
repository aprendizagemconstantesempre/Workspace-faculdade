/*
    Autor: Aguinaldo Alves
    Data: 16/05/2026
    Objetivo:   Função com retorno
                Desenvolva uma função chamada somar que receba dois números inteiros
                como parâmetros e retorne a soma entre eles.
                Objetivo: compreender como uma função pode receber dados e devolver
                um resultado ao programa principal.
                O que o aluno deve fazer: ler dois valores na main, chamar a função e exibir
                o resultado retornado.
                Dica: observe a diferença entre imprimir um valor dentro da função e
                retornar esse valor para a main.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>


// 2º Função    // Se precisamos retornar o resultado para função prinicipal, não pode ser a VOID, pois ela não tem retorna.
int somar(int num1, int num2) {     // Essa função receberá os números da função main().
    // Declaração de variáveis
    int resultado;      // Guardar o resultdo da soma.  

    // Inicializando as variáveis
    resultado = 0;

    // Processando a soma;
    resultado = num1 + num2;

    // Retornando o valor para função principal
    return(resultado);
}


// 1º Função
int main() {
    // Declarando as variáveis
    int numero[3];      // Vetor que cabe 2 números inteiros.
    int i;              // Controlador para o FOR()
    int total;          // Vai receber o resultado a 2 função.
    
    // Solicitando os números ao usuário.
    for (i = 1; i < 3; i++) {
        printf ("Digite o %d número inteiro..............: ", i);
        scanf ("%d", &numero[i]);
    }

    // Recebendo o retorno da 2 função e ao mesmo tempo chamando a função somar.
    total = somar(numero[1], numero[2]);

    // Exibindo o resultado para o usuário
    printf ("\n");
    printf ("A soma dos números %d + %d = %d \n", numero[1], numero[2], total);
    printf ("\n");

    return 0;
}