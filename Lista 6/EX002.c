/*
    Autor: Aguinaldo Alves
    Data: 08/05/2026
    Objetivo:   Polinômio com Vetores
                1. Leia o valor N, que representa o grau de um polinômio.
                2. Leia os coeficientes a1, a2, ..., aN.
                3. Em seguida, leia 10 valores de x, um por vez.
                4. Para cada valor de x, calcule o valor de P(x) usando:
                P(x) = a1·x + a2·x2 + a3·x3 + ... + aN·x^N
                5. Para cada x, imprima o valor correspondente de P(x).
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>
#include <math.h> // Para cálcular potências

// Programa
int main () {
    // Declarando as variáveis
    int N;                  // Representará o gral de nossa equação
    double C [100];         // Vetor que irá armazenar os valores dos coeficientes. A variável precisa ser double para usar POW()
    int cont;               // Contador para os loops do X
    int cont1;              // Contatdor para o loop do coeficiente     
    double X [10];          // Vetor que irá armazenar os Valor de X. A variável precisa ser double para usar POW()
    double resultado;       // Resultado do P(x)


    // Lendo os valores que serão inseridos pelo usuário
    printf ("*** IREMOS CALCULAR UMA EQUAÇÃO DE POLINÔMIO *** \n");
    printf ("------------------------------------------------- \n\n");
    printf ("Entre com o valor de N, que representará o gral de nossa equação................: ");
    scanf ("%d", &N);

    // Limitando até quantos graus o usuário pode ir
    if (N > 100) {
        printf("O grau máximo permitido é 100.\n");
        return 1;   // indica que o valor digitado pelo usuário foi maior que 100
    }

    // Lendo os valores dos coeficientes
    printf ("\n");
    printf ("------------------------------------------------- \n\n");
    
    for (cont = 0; cont < N; cont++) {
        printf ("Digite um coeficiente inteiro e positivo [%d]...............................: ", cont);
        scanf ("%lf", &C[cont]);
    }

    // Lendo os valores de X
    printf ("\n");
    printf ("------------------------------------------------- \n\n");    

    for (cont = 0; cont < 10; cont++) {
        printf ("Digite um valor inteiro e positivo para a variável X [%d]....................: ", cont);
        scanf ("%lf", &X[cont]);
    }

    // Cálculando o P(x) de cada um dos X conforme P(x) = a1·x¹ + a2·x² + a3·x³ + ... + aN·x^N
    // Essa parte foi a mais complicada, precisei de ajuda da internet
    printf ("\n");
    for (cont = 0; cont < 10; cont++) {                                     // para cada x
        resultado = 0;                                                      // zera antes de cada P(x)
        for (cont1 = 0; cont1 < N; cont1++) {                               // para cada coeficiente
            resultado = resultado + C[cont1] * pow(X[cont], cont1 + 1);     // a[j] * x^(j+1)
        }
    
    // Exibindo o resultado para o usuário
    printf("O resultado do P(%.0f) é %.2f\n", X[cont], resultado);

    }

    return 0;
}