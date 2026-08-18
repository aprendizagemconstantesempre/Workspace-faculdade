/*
    Autor: Aguinaldo Alves
    Data: 04/04/2026
    Objetivo: Menor e Maior Número
        Leia 3 números e exiba o menor e o maior.
        Exemplo: Entrada: 5, 8, 2 → Menor: 2, Maior: 8
*/
// Incluíndo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as variávies
    int numero1;
    int numero2;
    int numero3;
    int maior;
    int menor;

    // Solicitando e guardando os número.
    printf ("Entre com o 1º número inteiro.....................: ");
    scanf ("%d", &numero1);
    printf ("Entre com o 2º número inteiro.....................: ");
    scanf ("%d", &numero2);
    printf ("Entre com o 3º e último número inteiro............: ");
    scanf ("%d", &numero3);

   // Definindo um valor para comparação
    maior = numero1;
    menor = numero1;

   // Comparando com o número 2
   if (numero2 > maior) {
       maior = numero2;
   }
   if (numero2 < menor) {
       menor = numero2;
   }
   
   // Comparando com o número 3
   if (numero3 > maior) {
       maior = numero3;
   }
   if (numero3 < menor) {
       menor = numero3;
   }
   
   // Verificação se todos são iguais
   if (numero1 == numero2 && numero2 == numero3) {
       printf("Numeros digitados: %d, %d e %d são iguais. \n", numero1, numero2, numero3);
   } else {
       printf("Numeros digitados: %d, %d e %d \n", numero1, numero2, numero3);
       printf("Menor: %d\n", menor);
       printf("Maior: %d\n", maior);
   }

   return 0;
}