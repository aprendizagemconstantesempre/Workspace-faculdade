/*
    Autor: Aguinaldo Alves
    Data: 26/04/2026
    Objetivo:   Análise de Dados da População
                Descrição: A prefeitura de uma cidade realizou uma pesquisa entre seus habitantes, coletando dados sobre
                o salário e o número de filhos. Com base nessa pesquisa, a prefeitura deseja obter as seguintes informações:
                    1. Média do salário da população.
                    2. Média do número de filhos.
                    3. Maior salário registrado.
                    4. Percentual de pessoas com salário até R$100,00.

                Tarefa:
                - Elabore um algoritmo em Linguagem C que:
                - Leia repetidamente o salário e o número de filhos de cada habitante.
                - Calcule e exiba:
                    - A média do salário da população.
                    - A média do número de filhos.
                    - O maior salário.
                    - O percentual de pessoas com salário até R$100,00.

                Observações:
                - A leitura de dados deve ser finalizada quando um salário negativo for informado.
                - Utilize a estrutura de controle do-while para garantir que os dados sejam lidos pelo
                menos uma vez.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    float salario [50] = {0};
    int numerofilhos [50] = {0};
    int cont;
    int i;
    float somasalario;
    int somanumerofilhos;
    float maiorsalario;
    int salarioate100;
    float mediasalario;
    float medianumerofilhos; // Float porque vai haver divisão.
    float percentual;

    // Atribuindo inicialização das variáves.
    cont = 0;
    somasalario = 0;
    somanumerofilhos = 0;
    maiorsalario = 0;
    salarioate100 = 0;
    
    // Instruções ao usuário.
    printf ("ATENÇÃO: \n");
    printf ("Entre com o salário e número de filhos dos habitantes. \n"); 
    printf ("Quando for informado um salário negativo o sistema para de solicitar dados. \n");
    printf ("\n");

    do {
        // Coletando as informações dos habitantes
        printf ("Qual o valor do salário.................: ");
        scanf ("%f", &salario[cont]);

        // Verificando se o salário é positivo para continuar a solicitação de dados.
        if (salario[cont] >= 0) {
            printf ("Quantos filhos tem a família.........: ");
            scanf ("%d", &numerofilhos[cont]);
            cont++; // Vai continuar se o salário for valido.
            printf ("\n");
        }
    } while (salario[cont] >= 0);

    // Calculando os resultados
    maiorsalario = salario[0];

    for (i = 0; i < cont; i++) {
        somasalario = somasalario + salario[i];
        somanumerofilhos = somanumerofilhos + numerofilhos[i];

        if (salario[i] > maiorsalario) {
            maiorsalario = salario[i];
        }
        if (salario[i] <= 100) {
            salarioate100++;
        }
    }

    mediasalario = somasalario / cont;
    medianumerofilhos = (float) somanumerofilhos / cont;
    percentual = ((float) salarioate100 / cont) * 100;


    // Exibindo os resultados
    printf("=====================================\n");
    printf("Foram entrevistados.: %d habitantes \n", cont);
    printf("Média de salário....: R$ %.2f \n", mediasalario);
    printf("Média de filhos.....: %.2f \n", medianumerofilhos);
    printf("Maior salário.......: R$ %.2f \n", maiorsalario);
    printf("Salário até R$100...: %.2f%% \n", percentual);
    printf("=====================================\n");

    return 0;
}