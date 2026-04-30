/* 
    Autor: Aguinaldo Alves
    Data: 02/04/2026
    Objetivo: Estrutura de controle de fluxo - IF
*/

// Incluindo as bibliotecas do C
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int num;
    int segredo;
    
    // Comando que sorteia um número aleatorio
    srand (time (NULL));
    segredo = rand() % 10;

    printf ("Qual e o número! ");
    scanf ("%d", &num);

    if (segredo == num) {

        printf ("Acertou!");
        printf ("\n O numero é %d \n", segredo);

    } else if (segredo < num) {

        printf ("Errado, Muito alto! o numero secreto e %d \n", segredo);

    } else {

        printf ("Errado, muito baixo! O numero secreto e %d \n", segredo);

    }

    return 0;
}