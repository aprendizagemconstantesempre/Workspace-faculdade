#include <stdio.h>
void main() {
int num;
printf("Digite um numero: ");
scanf("%d", &num);

printf("\nNumero: %d", num);
printf("\nEndereco: %d", &num);
}