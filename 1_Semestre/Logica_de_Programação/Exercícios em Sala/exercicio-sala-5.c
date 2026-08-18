/*
    Autor: Aguinaldo Alves
    Data: 26/03/2026
    Objetivo: Solitiar 4 notas do aluno e mostrar se foi aprovado ou reprovado.
*/

// Incluindo Biblioteca do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as Variáveis
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    
    printf ("Digite sua nota do primeiro semestre........: ");
    scanf ("%f", &nota1);
    printf ("\n");
    printf ("Digite sua nota do segundo semestre.........: ");
    scanf ("%f", &nota2);
    printf ("\n");
    printf ("Digite sua nota do terceiro semestre........: ");
    scanf ("%f", &nota3);
    printf ("\n");
    printf ("Digite sua nota do quarto semestre..........: ");
    scanf ("%f", &nota4);

    // Atribuindo valor a variável
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7) {
        printf ("Sua média foi: %.2f e você está aprovado. \n", media);
    } else {
        printf ("Sua média foi: %.2f e você está REPROVADO. \n", media);
        printf ("\n");
    }

    return 0;
}