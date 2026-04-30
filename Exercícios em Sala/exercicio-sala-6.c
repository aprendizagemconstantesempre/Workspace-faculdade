/*
    Autor: Aguinaldo Alves
    Data: 30/03/2026
    Objetivo: Pegar um número inteiro positivo e ver se é par, impar, multiplo de 3, 5 e de 7.
*/

// Incluíndo Biblioteca do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variáveis
    int numero;

    printf ("Digite um número inteiro positivo............: ");
    scanf ("%d", &numero);

    // Verificando se o número digitado é par ou impar.
    if (numero % 2 == 0) {
        printf ("O número digitado %d é PAR. \n", numero);
    } else {
        printf ("O número digitado %d é IMPAR. \n", numero);
    }

    // Verificando se o número digitado é multiplo de 3.
    if (numero % 3 == 0) {
        printf ("O número digitado %d é MULTIPLO de 3. \n", numero);
    } 

    // Verificando se o número digitado é multiplo de 5.
    if (numero % 5 == 0) {
        printf ("O número digitado %d é MULTIPLO de 5. \n", numero);
    } 

    // Verificando se o número digitado é multiplo de 7.
    if (numero % 7 == 0) {
        printf ("O número digitado %d é MULTIPLO de 7. \n", numero);
    } 

    return 0;
}