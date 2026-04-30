/*
    Autor: Aguinaldo Alves
    Data: 05/04/2026
    Objetivo: Cálculo da Área de Figuras Geométricas
                Enunciado: O usuário escolhe uma ﬁgura (1 - Quadrado, 2 - Retângulo, 3 -
                Triângulo), insere os dados necessários e o programa exibe a área
                correspondente.
                    Fórmulas:
                        Quadrado: A = L * L
                        Retângulo: A = B * H
                        Triângulo: A = (B * H) / 2
                    Exemplo:
                        Entrada: Opção 2 (Retângulo), B=5, H=3
                        Saída: Área = 15
*/

// Incluindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declarando as vaiáveis
    int figura;
    int medida1;
    int medida2;
    int area;

    // Mostrando as informações para o usuário
    printf ("***** CÁLCULANDO AREAS DAS FIGURAS ABAIXO ***** \n");
    printf ("\n");
    printf ("1 - Quadrado; \n");
    printf ("2 - Retângulo; \n");
    printf ("3 - Triângulo; \n");
    printf ("\n");
    printf ("Digite o código da figura que deseja cálcular a área.......: ");
    scanf ("%d", &figura);
    printf ("\n");

    // Calculando a área do quadrado
    if (figura == 1) {
        printf ("Entre com a medida de um dos lado do quadrado..........: ");
        scanf ("%d", &medida1);
        printf ("\n");

        // como estamos falando de um quadrado, a medida 2 vai receber o mesmo valor da medida 1
        medida2 = medida1;
        area = medida1 * medida2;

        // Mostrando as informações na tela
        printf ("\n");
        printf ("A figura escolhida foi: 1 - Quadrado. \n");
        printf ("A medida digitada de um dos lados do quadrado foi......: %d \n", medida1);
        printf ("A área do seu quadrado tem.............................: %d \n", area);
        printf ("\n");
    }

    // Cálculando a área do retângulo
    else if (figura == 2) {
        printf ("Entre com a medida da base do retângulo................: ");
        scanf ("%d", &medida1);
        printf ("Entre com a medida da altura do retângulo..............: ");
        scanf ("%d", &medida2);

        // Cálculando a área do retângulo
        area = medida1 * medida2;

        // Mostrando as informações na tela
        printf ("\n");
        printf ("A figura escolhida foi: 2 - Retângulo. \n");
        printf ("A medida digitada para base do retângulo foi de........: %d \n", medida1);
        printf ("A medida digitada para altura do retângulo foi de......: %d \n", medida2);
        printf ("A área do seu retângulo tem............................: %d \n", area);
        printf ("\n");
    }

    // Cálvulando a área de um triângulo
    else if (figura == 3) {
        printf ("Entre com a medida da base do triângulo................: ");
        scanf ("%d", &medida1);
        printf ("Entre com a medida da altura do triângulo..............: ");
        scanf ("%d", &medida2);

        // Cálculando a área do triângulo
        area = (medida1 * medida2) / 2;

        // Mostrando as informações na tela
        printf ("\n");
        printf ("A figura escolhida foi: 3 - Triângulo. \n");
        printf ("A medida digitada para base do triângulo foi de.........: %d \n", medida1);
        printf ("A medida digitada para altura do triânbulo foi de.......: %d \n", medida2);
        printf ("A área do seu triânbulo tem.............................: %d \n", area);
        printf ("\n");
    }

    return 0;
}