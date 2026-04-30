/*
    Autor: Aguinaldo Alves
    Data: 04/04/2026
    Objetivo: Média Aritmética de Notas Pares.

    Racional:
        Ler 3 notas
        Verificar quais são pares
        Somar apenas as pares
        Calcular a média (se houver pelo menos uma)

*/
// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int nota1;
    int nota2;
    int nota3;
    float media;

    // Solicitando as notas
    printf ("Entre com a 1º nota inteira....................: ");
    scanf ("%d", &nota1);
    printf ("Entre com a 2º nota inteira....................: ");
    scanf ("%d", &nota2);
    printf ("Entre com a 3º e última nota interia...........: ");
    scanf ("%d", &nota3);

    // Calculando a média se todas as notas forem pares
    if (nota1 % 2 == 0 && nota2 % 2 == 0 && nota3 % 2 == 0) {
        media = (nota1 + nota2 + nota3) / 3.0;
        printf ("As notas: %d, %d e %d tem média = %.2f", nota1, nota2, nota3, media);
    } 
    // Calculando a média se duas das notas forem pares
    else if (nota1 % 2 == 0 && nota2 % 2 == 0) {
        media = (nota1 + nota2) / 2.0;
        printf ("As notas: %d e %d tem média = %.2f", nota1, nota2, media);
    }
    else if (nota1 % 2 == 0 && nota3 % 2 == 0) {
        media = (nota1 + nota3) / 2.0;
        printf ("As notas: %d e %d tem média = %.2f", nota1, nota3, media);
    }
    else if (nota2 % 2 == 0 && nota3 % 2 == 0) {
        media = (nota2 + nota3) / 2.0;
        printf ("As notas: %d e %d tem média = %.2f", nota2, nota3, media);
    }
    // Calculando a média quando apenas uma das notas forem par.
    else if (nota1 % 2 == 0) {
        media = nota1 / 1.0;
        printf ("A nota: %d tem média = %.2f", nota1, media);
    }
    else if (nota2 % 2 == 0) {
        media = nota2 / 1.0;
        printf ("A nota: %d tem média = %2.f", nota2, media);
    }
    else if (nota3 % 2 == 0) {
        media = nota3 / 1.0;
        printf ("A nota: %d tem média = %2.f", nota3, media);
    }
    // Quanto não tiver nota par
    else {
        printf ("As notas: %d, %d e %d, NENHUMA NOTA PAR!", nota1, nota2, nota3);
    }

    return 0;
}