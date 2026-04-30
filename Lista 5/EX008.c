/*
    Autor: Aguinaldo Alves
    Data: 26/04/2026
    Objetivo:   Tema: Armazenamento e Análise de Cargos e Salários
                Descrição: Elabore um algoritmo em Linguagem C que armazene a descrição de 10 cargos e seus respectivos
                salários. Ao final da execução, o algoritmo deve informar:
                    A descrição do cargo com o maior salário.
                    O valor desse maior salário.
                    
                Tarefa:
                1. Crie um vetor para armazenar as descrições dos 10 cargos.
                2. Crie um vetor para armazenar os salários correspondentes a cada cargo.
                3. Ao final da leitura, identifique e exiba:
                    O cargo que possui o maior salário.
                    O valor do maior salário.

                Requisitos:
                - O algoritmo deve utilizar estruturas de controle apropriadas para ler os dados e determinar
                o cargo com o maior salário.
                - Certifique-se de que o programa funcione corretamente para todos os 10 cargos.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variávies
    int cont;
    int indiceMaior;

    // Inicializando o indice
    indiceMaior = 0;

    // Declarando vetor "Que é a mesma coisa que Array - Não lembro de termos aprendido isso ainda"
    char cargo [10][15];
    float salario [10];

    // Solicitando os cargos e seus respectivos salários ao usuário
    for (cont = 0; cont < 10; cont++) {
        printf("Digite o cargo %d................................: ", cont + 1);
        scanf("%s]", cargo[cont]);   // lê texto com espaço
        printf ("Digite o salário correspondente ao cargo %d.....: ", cont + 1);
        scanf ("%f", &salario[cont]);
        printf ("\n");
    }

    // Enconrando o maior salário
    for (cont = 1; cont < 10; cont++) {
        if (salario[cont] > salario[indiceMaior]) {
            indiceMaior = cont;
        }
    }

    printf ("O cargo com maior salário é o de %s, cujo valor é R$ %.2f \n", cargo[indiceMaior], salario[indiceMaior]);

    return 0;
}