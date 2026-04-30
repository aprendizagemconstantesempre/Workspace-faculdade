/*
    Autor: Aguinaldo Alves
    Data: 26/04/2026
    Objetivo:   Tema: Contagem de Votos em uma Eleição Presidencial
                Descrição: Em uma eleição presidencial, há quatro candidatos. Os votos são informados através de códigos, conforme a seguinte codificação:
                    1: Voto para o Candidato 1
                    2: Voto para o Candidato 2
                    3: Voto para o Candidato 3
                    4: Voto para o Candidato 4
                    5: Voto Nulo
                    6: Voto em Branco

                Tarefa: Elabore um Programa em Linguagem C que realize as seguintes operações:
                1. Leia o código do voto do Eleitor
                2. Calcule e exiba:
                    O total de votos para cada um dos quatro candidatos.
                    O total de votos nulos.
                    O total de votos em branco.

                A entrada de votos deve ser finalizada ao receber o valor 0.

                Requisitos:
                - O programa deve ser capaz de lidar com entradas contínuas até que o valor finalizador (0) seja informado.
                - Utilize estruturas de controle adequadas para realizar a contagem dos votos.
                Observação.: Utilizar comando de Repetição DO-WHILE
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declaração das variáveis
    int votos;
    int candidato1;
    int candidato2;
    int candidato3;
    int candidato4;
    int nulos;
    int brancos;

    // Inicializando as variáveis
    candidato1 = 0;
    candidato2 = 0;
    candidato3 = 0;
    candidato4 = 0;
    nulos      = 0;
    brancos    = 0;

    // Instruções ao Eleitor
    printf ("VOTAÇÃO - ELEIÇÕES PRESIDENCIAIS 2026 \n");
    printf ("--------------------------------------");
    printf ("\n");
    printf ("Para votar no candidado 1 => Digite: 1 \n");
    printf ("Para votar no candidado 2 => Digite: 2 \n");
    printf ("Para votar no candidado 3 => Digite: 3 \n");
    printf ("Para votar no candidado 4 => Digite: 4 \n");
    printf ("ATENÇÃO: Se deseja anular seu voto => Digite 99 \n");
    printf ("ATENÇÃO: Se deseja votar em branco = > Digite 100 \n");
    printf ("\n");

    do {
        // Iniciando a votação
        printf ("Seu voto é para qual candidato?..............: ");
        scanf ("%d", &votos);

        if (votos == 1) {
            candidato1++;
        } else if (votos == 2) {
            candidato2++;
        } else if (votos == 3) {
            candidato3++;
        } else if (votos == 4) {
            candidato4++;
        } else if (votos == 99) {
            nulos++;
        } else if (votos == 100) {
            brancos++;
        } else if (votos != 0) {
            // Código inválido — nem conta nem encerra
            printf("O código digitado não é valido, inclua um código conforme enunciado da votação. \n");
        }

    } while (votos != 0);

    // Apuração dos resultados
    printf ("\n");
    printf("+-----------------------------------------+ \n");
    printf("O Total de eleitores votantes, foi de: %d \n", (candidato1 + candidato2 + candidato3 + candidato4 + nulos + brancos));
    printf ("\n");
    printf("O candidato 1 recebeu: %d votos \n", candidato1);
    printf("O candidato 2 recebeu: %d votos \n", candidato2);
    printf("O candidato 3 recebeu: %d votos \n", candidato3);
    printf("O candidato 4 recebeu: %d votos \n", candidato4);
    printf("Votos Nulos: %d \n",       nulos);
    printf("Votos Brancos: %d \n",     brancos);
    printf ("\n");
    printf("+----------------------------------------+ \n");

    return 0;
}