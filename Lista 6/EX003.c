/*
    Autor: Aguinaldo Alves
    Data: 09/05/2026
    Objetivo:   Leia dois vetores: A com 3 elementos e B com 5 elementos.
                2. Gere:
                    Vetor C: elementos que estão tanto em A quanto em B (interseção).
                    Vetor D: elementos únicos de A e B juntos (união).
                3. Imprima os vetores A, B, C e D.
                    Considere que não há elementos repetidos dentro de A nem de B.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {
    // Declarando as variáveis
    int VA[3];          // Vetor que vai guardar 3 elementos digitados pelo usuário.
    int VB[5];          // Vetor que vai guardar 5 elementos digitados pelo usuário.
    int VC[3];          // Interseção: Vetor que vai guardar os elementos comuns que estão no VA e VB.
    int tamanhoC;       // Guardar a quantidade de elementos de C.
    int VD[8];          // União: Vetor que vai guardar somente os elementos únicos no VA e VB.
    int tamanhoD;       // Guardar a quantidade de elementos de D.
    int i;              // Controlador para o for.
    int j;              // Controlador para o for da verificação.
    int encontrado;

    // Inicializando as variáveis
    tamanhoC = 0;
    tamanhoD = 0;
    encontrado = 0;

    // Lendo os elementos do vetor A
    printf ("*** INSERINDO OS ELEMENTOS DO VETOR A *** \n");
    printf ("--------------------------------------------- \n");

    for (i = 0; i < 3; i++) {
        printf ("Insira o elemtno [%d] para o Vetor A.....: ", i);
        scanf ("%d", &VA[i]);
    }

    // Lendo os elementos do vetor B
    printf ("\n");
    printf ("*** INSERINDO OS ELEMENTOS DO VETOR B *** \n");
    printf ("--------------------------------------------- \n");

    for (i = 0; i < 5; i++) {
        printf ("Insira o elemento [%d] para o Vetor B.....: ", i);
        scanf ("%d", &VB[i]);
    }

    // Processamento: INTERSEÇÃO (VC), elemento de VB que também está em VA
    for (i = 0; i < 5; i++) {           // Vai percorrer o vetor dos 5 elementos
        for (j = 0; j < 3; j++) {       // Vari percorrer o veotr dos 3 elementos
            if (VB[i] == VA[j]) {       // Testando se os elemtnso do VB é igual ao elemento do VA
            VC[tamanhoC] = VB[i];       // Se for igual vai guardar no VC
            tamanhoC++;
            }
        }
    }

    // Processamento: UNIÃO (VD), todos de VA + os de VB que não estão em VA
    // Copia todo VA para VD
    for (i = 0; i < 3; i++) {
        VD[tamanhoD] = VA[i];
        tamanhoD++;
    }

    // Adiciona elementos de VB que não estão em VA
    for (i = 0; i < 5; i++) {
        encontrado = 0;             // reinicia a cada novo elemento de VB
        for (j = 0; j < 3; j++) {
            if (VB[i] == VA[j]) {
                encontrado = 1;
            }
        }
        if (encontrado == 0) {
            VD[tamanhoD] = VB[i];
            tamanhoD++;
        }
    }

    // Mostrando o resultado na tela para o usuário
    // Exibindo os elementos do VA
    printf ("\n*** VETOR A ***\n");
    for (i = 0; i < 3; i++) {
        printf ("VA[%d] = %d\n", i, VA[i]);
    }

    printf ("\n*** VETOR B ***\n");
    for (i = 0; i < 5; i++) {
        printf ("VB[%d] = %d\n", i, VB[i]);
    }

    printf ("\n*** VETOR C (Intersecao) ***\n");
    for (i = 0; i < tamanhoC; i++) {
        printf ("VC[%d] = %d\n", i, VC[i]);
    }

    printf ("\n*** VETOR D (Uniao) ***\n");
    for (i = 0; i < tamanhoD; i++) {
        printf ("VD[%d] = %d\n", i, VD[i]);
    }
    

    return 0;
}