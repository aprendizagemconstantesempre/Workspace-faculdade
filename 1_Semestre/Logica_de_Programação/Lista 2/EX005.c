/*
    Autor: Aguinaldo Alves
    Data: 21/03/2026
    Objetivo: Cálcular tempo de estudo por disciplina e de descanço.
*/

// Adicionando biblioteca do C
#include <stdio.h>

// Programa
int main (){

    // Declaração de variáveis
    int tempototal;
    int totalmater;
    int tempoestu;
    int tempodesc;

    // Atribuindo valores as variáveis
    tempototal = 100;
    totalmater = 6;
    tempoestu = tempototal / totalmater; // Divisão inteira
    tempodesc = tempototal % totalmater; // Resto da divisão
    
    printf ("Total de Disciplinas = 6 \n");
    printf ("Tempo total disponivel para estudo = 1:40 hs = 60 + 40 = 100 minutos \n");
    printf ("\n");
    printf ("Tempo total de estudo: %d minutos \n", tempototal);
    printf ("Tempo para cada disciplina: %d minutos \n", tempoestu);
    printf ("Tempo livre para descanso: %d minutos \n", tempodesc);

    return 0;
}