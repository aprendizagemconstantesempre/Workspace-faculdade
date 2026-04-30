/*
    Autor: Aguinaldo Alves
    Data: 23/04/2026
    Objetivo: Apresentar todos os números difisíveis por 4 que sejam menores que 200. 
              Para verificar se o número é divisivel, sendo, mostre-o, não sendo, passe para o próximo passo. 
              A variável que controlará o contator deverá ser iniciada com valor 1.
*/

// Atributindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração de variável
    int cont;

    for (cont = 1; cont <= 200; cont++) {

        if (cont % 4 == 0) {
            printf ("O número %d é divisivel por 4. \n", cont);
        }
    }

    return 0;
}