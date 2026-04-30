/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo:   Tema: Análise de Alturas de Alunos
                Descrição:
                Elabore um algoritmo em Linguagem C que leia 5 conjuntos de 2 valores, onde o primeiro valor
                representa o número de um aluno e o segundo representa sua altura em centímetros. 

                O algoritmo deve identificar:
                1. O aluno mais alto e o aluno mais baixo.
                2. Exibir o número do aluno mais alto e do aluno mais baixo, juntamente com suas respectivas alturas.

                Tarefa:
                1. Crie um loop para ler os dados de 5 alunos.
                2. Armazene o número do aluno e sua altura em variáveis apropriadas.
                3. Após a leitura, determine e exiba:
                    O número e a altura do aluno mais alto.
                    O número e a altura do aluno mais baixo.

                Requisitos:
                - O algoritmo deve usar estruturas de controle adequadas para a leitura dos dados e a
                identificação dos alunos.
                - Certifique-se de que o programa funcione corretamente para todos os 5 conjuntos de
                dados.
*/

// Incluíndo as Bibliotecas do C
#include <stdio.h>

//Programa
int main () {
    // Declaração das variaveis
    int cont;
    int aluno1numero;
    float aluno1altura;
    int aluno2numero;
    float aluno2altura;
    int aluno3numero;
    float aluno3altura;
    int aluno4numero;
    float aluno4altura;
    int aluno5numero;
    float aluno5altura;
    int numeroalunomaisalto;
    int numeroalunomaisbaixo;
    float maisalto;
    float maisbaixo;

    // Solicitando os dados dos alunos
    for (cont = 1; cont <=5; cont++) {
        if (cont == 1){
            printf ("Entre com o NÚMERO do 1º Aluno...................: ");
            scanf ("%d", &aluno1numero);
            printf ("Entre com a ALTURA do 1º Aluno em centímetros....: ");
            scanf ("%f", &aluno1altura);
            printf ("\n");
        } else if (cont == 2) {
            printf ("Entre com o NÚMERO do 2º Aluno...................: ");
            scanf ("%d", &aluno2numero);
            printf ("Entre com a ALTURA do 2º Aluno em centímetros....: ");
            scanf ("%f", &aluno2altura);
            printf ("\n");
        } else if (cont == 3) {
            printf ("Entre com o NÚMERO do 3º Aluno...................: ");
            scanf ("%d", &aluno3numero);
            printf ("Entre com a ALTURA do 3º Aluno em centímetros....: ");
            scanf ("%f", &aluno3altura);
            printf ("\n");            
        } else if (cont == 4) {
            printf ("Entre com o NÚMERO do 4º Aluno...................: ");
            scanf ("%d", &aluno4numero);
            printf ("Entre com a ALTURA do 4º Aluno em centímetros....: ");
            scanf ("%f", &aluno4altura);
            printf ("\n");            
        } else if (cont == 5) {
            printf ("Entre com o NÚMERO do 5º Aluno...................: ");
            scanf ("%d", &aluno5numero);
            printf ("Entre com a ALTURA do 5º Aluno em centímetros....: ");
            scanf ("%f", &aluno5altura);
            printf ("\n");            
        }
    }

    // Verificando número e altura do aluno menor e maior
        // Assumindo numero alturas do aluno 1, como ponto de partida dos testes
        maisalto = aluno1altura;
        maisbaixo = aluno1altura;
        numeroalunomaisalto = aluno1numero;
        numeroalunomaisbaixo = aluno1numero;

        // Testando as alturas
        if (aluno2altura > maisalto) {
            maisalto = aluno2altura;
            numeroalunomaisalto = aluno2numero;
        }
        if (aluno2altura < maisbaixo) {
            maisbaixo = aluno2altura;
            numeroalunomaisbaixo = aluno2numero;
        }
        if (aluno3altura > maisalto) {
            maisalto = aluno3altura;
            numeroalunomaisalto = aluno3numero;
        }
        if (aluno3altura < maisbaixo) {
            maisbaixo = aluno3altura;
            numeroalunomaisbaixo = aluno3numero;
        }
        if (aluno4altura > maisalto) {
            maisalto = aluno4altura;
            numeroalunomaisalto = aluno4numero;
        }
        if (aluno4altura < maisbaixo) {
            maisbaixo = aluno4altura;
            numeroalunomaisbaixo = aluno4numero;
        }
        if (aluno5altura > maisalto) {
            maisalto = aluno5altura;
            numeroalunomaisalto = aluno5numero;
        }
        if (aluno5altura < maisbaixo) {
            maisbaixo = aluno5altura;
            numeroalunomaisbaixo = aluno5numero;
        }
               
        // Exibindo na tela o número do aluno e sua altura.
        printf ("O Aluno mais alto é o número: %d, sua altura é: %f \n", numeroalunomaisalto, maisalto);
        printf ("O Aluno mais baixo é o número: %d, sua altura é: %f \n", numeroalunomaisbaixo, maisbaixo);

    return 0;
}