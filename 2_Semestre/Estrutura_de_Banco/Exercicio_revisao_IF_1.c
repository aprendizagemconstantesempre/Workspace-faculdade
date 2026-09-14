#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void main() {
    int num;
    int segredo;
    // Comando que sorteia um numero Aleatorio
    srand(time(NULL));
    segredo = rand() % 10;
    printf("Qual e o numero: ");
    scanf("%d", &num);
    if (segredo == num) {
        printf("Acertou!");
        printf("\nO numero e %d\n", segredo);
        } else if (segredo < num) {
            printf("Errado, muito alto! O numero secreto e %d\n",segredo);
        } else {
            printf("Errado, muito baixo! O numero secreto e %d\n",segredo);
    }
}