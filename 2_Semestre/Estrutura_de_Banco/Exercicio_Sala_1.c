/*
    Autor: Aguinaldo Alves
    Data: 08/09/2026
    Objetivo: Coletar 4 notas do aluno, calcular média e dizer se foi aprovado ou reprovado. Utilizando ponteiro
*/

// Biblioteca do C
#include <stdio.h>

// Função para calcular média
void calcularmedia(*p1, *p2, *p3, *p4) {
    float media;

    media = *p1 + *p2 + *p3 + *p4 / 4;

}

// Programa
int main () {
    // Declarar as variáveis
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    int media;
    int *p1;
    int *p2;
    int *p3;
    int *p4;

    // Solicitando as notas do usuário
    printf("Digite a nota 1...............: ");
    scanf ("%d", &nota1);
    printf("Digite a nota 2...............: ");
    scanf ("%d", &nota2);
    printf("Digite a nota 3...............: ");
    scanf ("%d", &nota3);
    printf("Digite a nota 4...............: ");
    scanf ("%d", &nota4);

    // chamando a função para calcular média
    calcularmedia(nota1, nota2, nota3, nota4);

    // Verificando se o usuário foi aprovado ou reprovado
    


    return 0;
}