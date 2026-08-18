/*
    Autor: Aguinaldo Alves
    Data: 19/03/2026
    Objetivo: Cálcular uma conta telefônica.
*/

#include <stdio.h>

int main() {
    printf("Assinatura:             R$ 17,90\n");
    printf("Impulsos:               R$ %.2f\n", (254-90)*0.04);
    printf("Interurbanos:           R$ 34,29\n");
    printf("Chamadas p/ celulares:  R$ %.2f\n", 0.20*23);
    printf("\n\n");
    printf("Valor total da conta:   R$ %.2f\n", 17.90 + ((254-90)*0.04) + 34.29 + (0.20*23));
    printf("\n\n");
    return 0;
}