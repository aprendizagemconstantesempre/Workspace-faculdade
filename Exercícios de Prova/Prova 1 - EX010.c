/*
    Autor: Aguinaldo Alves
    Data: 06/04/2026
    Objetivo: Cálcular média com peso e mostrar se aluno foi aprovado.
*/

// Incluíndo biblioteca do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int nota1;
    int nota2;
    int nota3;
    float media;

    // Solicitando as notas dos alunos
    printf ("Digite a 1º nota............: ");
    scanf ("%d", &nota1);
    printf ("Digite a 2º nota............: ");
    scanf ("%d", &nota2);
    printf ("Digite a 3º nota............: ");
    scanf ("%d", &nota3);

    // Cálculando a media do aluno
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5) / 10);

    // Verificando se o aluno foi aprovado
    if (media > 7) {
        printf ("APROVADO");
    } else {
        printf ("REPROVADO");
    }

    return 0;
}