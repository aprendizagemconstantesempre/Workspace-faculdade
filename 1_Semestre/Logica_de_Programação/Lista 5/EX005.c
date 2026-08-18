/*
    Autor: Aguinaldo Alves
    Data: 25/04/2026
    Objetivo:   Apresentar as potências de 3 variando de 0 a 15. Deve ser considerado que qualquer número
                elevado a zero é 1, e elevado a 1 é ele próprio. Deverá ser apresentado, observando a seguinte
                definição:
                3 ^ 0 = 1
                3 ^ 1 = 3
                3 ^ 2 = 9
                (....)
                3 ^ 15 = 14348907
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <math.h>

// Programa
int main () {
    // Declarando as variáveis
    int numero;
    int resultado;
    int cont;

    // A tribuindo valor as variávies
    numero = 3;

    for (cont = 0; cont <= 15; cont++) {
        // Tratando o número elevado a potência zero
        if (cont == 0) {
            resultado = 1;
        } else if (cont == 1) {
            resultado = numero;
        } else {
            resultado = (int) pow (numero, cont); /* Tive que buscar esse int na internet. 
                                                     O Pow da biblioteca Math calcularia o 0 e 1, 
                                                     não precisaria dos ifs anteriores.*/
        }
        printf ("O número %d elevado a %d potência = %d \n", numero, cont, resultado);
    }
    return 0;
}