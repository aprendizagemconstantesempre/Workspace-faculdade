/*
    Autor: Aguinaldo Alves
    Data: 23/05/2026
    Objetivo:   Média dos elementos de um vetor
                Crie uma função chamada mediaVetor que receba um vetor de números
                reais e a quantidade de elementos, retornando a média dos valores
                armazenados.
                Objetivo: aplicar funções no processamento de vetores e reforçar o cálculo
                de médias em uma estrutura com vários dados.
                O que o aluno deve fazer: ler os valores do vetor, chamar a função e mostrar
                a média calculada.
                Dica: primeiro some todos os valores do vetor e, ao final, divida o total pela
                quantidade de elementos.
*/
// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - Irá cálcular a média do vetor
double mediaVetor(double vetorB[5]) {
    // Declarando as variáveis
    double somanumeros;     // Irá somar os números
    int i;                  // Controlador para o FOR()
    int cont;               // Vamos imaginar que não sei quantos números tem no vetor, então quero contar.
    double media;           // Irá guardar a média

    // Inicializando o contador
    somanumeros = 0;
    cont = 0;

    // Cálculando a média
    for (i = 0; i < 5; i++){
        somanumeros = somanumeros + vetorB[i];
        cont++;
    }

    media = somanumeros / cont;

    return (media);
}


// 2º Função - Mensagem para o título
void mensagem () {
    printf ("===============================================\n");
    printf ("=       CALCULANDO A MÉDIA DE UM VETOR.       =\n");
    printf ("===============================================\n");
    printf ("\n");
}

// 1º Função - main
int main (){
    // Declarando as variávies
    double vetorA[5];         // Irá guardar o número digitado pelo usuário.
    int i;                    // Controlador para o FOR().
    double resultado;         // Irá receber o resultado da verificação.

    mensagem();         // Chava a função void para o título do exercício.

    // Solicitando o número para o usuário.
    for (i = 0; i < 5; i++) {
        printf ("Entre com um numero real [%d].................: ", i);
        scanf ("%lf", &vetorA[i]);
    }

    // Chamar a função que vai calcular a média do vetor e já recebe o resultado.6
    resultado = mediaVetor(vetorA);

    // Exibindo o resultado para o usuário.
    printf ("\n");
    printf ("A média dos números é.........: %.2f\n", resultado);
    printf ("\n");

    return 0;
}