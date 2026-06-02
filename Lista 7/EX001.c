/*
    Autor: Aguinaldo Alves
    Data: 16/05/2026
    Objetivo:   Criando sua primeira função: Crie um programa em C que tenha uma função chamada
                mensagemBoasVindas, responsável por exibir na tela uma mensagem de
                boas-vindas ao usuário.
                Objetivo: entender a estrutura básica de uma função sem parâmetros e sem
                retorno.
                O que o aluno deve fazer: declarar a função, implementá-la fora da main e
                chamá-la dentro do programa principal.
                Dica: use o tipo void, pois a função apenas exibe uma mensagem.
*/

// Incluíndo as bibliotecas do C
#include <stdio.h>

// Função Secundária
void mensagemBoasVindas() {     // Essa função foi chamada na função principal main().
    printf ("");
    printf ("###########################################################\n");
    printf ("####### UNICIVE - CENTRO UNIVERSITÁRIO CIDADE VERDE #######\n");
    printf ("###########################################################\n");
    printf ("#                                                         #\n");
    printf ("#                                                         #\n");
    printf ("#                                                         #\n");
    printf ("#                   SEJA BEM VINDO(A)                     #\n");
    printf ("#          AO CURSO DE ENGENHARIA DE SOFTWARE             #\n");
    printf ("#                      DA UNICIVE                         #\n");
    printf ("#                                                         #\n");
    printf ("#                                                         #\n");
    printf ("#                                                         #\n");
    printf ("###########################################################\n");   
    printf ("\n");

}


// Função Principal
int main() {

    mensagemBoasVindas();   // Chamando a Função secundária que irá exibir a mensagem ao usuário.

    return 0;
}