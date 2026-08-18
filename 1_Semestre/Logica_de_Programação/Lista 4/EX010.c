/*
    Autor: Aguinaldo Alves
    Data: 05/05/2026
    Objetivo: Veriﬁcação de Idade para Habilitação
              Enunciado: Leia a idade de um usuário e informe se ele pode tirar habilitação (18 anos ou mais).
              Exemplo: Entrada: 17 anos → Saída: "Não pode tirar habilitação"
                       Entrada: 20 anos → Saída: "Pode tirar habilitação"
*/

// Incerindo as bibliotecas do C
#include <stdio.h>

// Programa
int main () {

    // Declaração de variáveis
    int idade;

    // Solicitando a idade do usuário e guardando a informação.
    printf ("Entre com a idade inteira do usuário...............: ");
    scanf ("%d", &idade);
    printf ("\n");

    if (idade >= 18) {

        printf ("A idade do usuário é: %d, sendo assim: \"Pode tirar habilitação\". \n", idade);

    } else {

        printf ("A idade do usuário é: %d, sendo assim: \"NÃO poderá tirar habilitação\". \n", idade);

    }

    return 0;
}