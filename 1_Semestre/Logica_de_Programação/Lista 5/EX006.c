/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo:   Tema: Cálculo da Soma de Números Inteiros
                Descrição: Elabore um algoritmo em Linguagem C que utilize o comando de repetição for para calcular a
                soma de uma sequência de números inteiros. O programa deve solicitar ao usuário que informe
                quantos números ele deseja somar e, em seguida, ler esses números e calcular a soma total.

                Tarefa:
                1. Solicite ao usuário que digite a quantidade de números que deseja somar.
                2. Utilize um loop for para ler cada número informado pelo usuário.
                3. Calcule a soma total dos números informados.
                4. Exiba o resultado da soma.

                Exemplo de Saída:
                Se o usuário informar que deseja somar 3 números e fornecer os números 4, 5 e 6, a
                saída deve ser:
                A soma total é: 15

                Requisitos:
                - O algoritmo deve validar a entrada do usuário, garantindo que a quantidade de números
                seja um inteiro positivo.
                - Utilize o comando for para realizar a repetição necessária para ler os números e calcular
                a soma.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int quantnumero;
    int cont;
    int numero;
    int soma;

    // Atribuindo valor as variáveis
    soma = 0;

    // Solicitando a quantidade de números que o usuário deseja digitar.
    printf ("Digite a quantidade de números que deseja somar............: ");
    scanf ("%d", &quantnumero);
    printf ("\n");

    // Validando se os números são inteiros e positivos.
    if (quantnumero > 0) {
        printf ("Muito bem! O número digitado foi: %d \n", quantnumero);
        printf ("\n");

        // Solicitando ao usuário que entre com os números para serem somados.
        for (cont = 1; cont <= quantnumero; cont++) {
            printf ("Entre com os números que deseja somar..............: ");
            scanf ("%d", &numero);

            // Realizando a soma dos números digitados
            soma = soma + numero;
        }
        
        // Exibindo a soma ao usuário
        printf ("\n");
        printf ("A soma dos números digitados é: %d", soma);
        printf ("\n");

    } else {
        printf ("Você digitou %d e deve digitar um número maior que zero e que seja positivo. Tente novamente! \n", quantnumero);
    }

    return 0;
}