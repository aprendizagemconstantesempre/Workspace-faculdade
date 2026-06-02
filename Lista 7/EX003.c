/*
    Autor: Aguinaldo Alves
    Data: 18/05/2026
    Objetivo:   Cálculo da média com função
                Crie uma função chamada calcularMedia que receba três notas do tipo float
                e retorne a média aritmética.
                Objetivo: praticar funções com parâmetros do tipo real e retorno numérico.
                O que o aluno deve fazer: solicitar as três notas ao usuário, chamar a
                função e informar a média final.
                Dica: pense na função como um pequeno módulo responsável apenas pelo
                cálculo.
*/

// Incluindo as bibliotecas do C
#include <stdio.h>


// 2º Função
float calcularMedia (float nota1, float nota2, float nota3) {       // Essa função irá calcular a média vinda da função main();
    // Declaração de variáveis
    float resultado;
    
    // Inicialização da variável de resultado
    resultado = 0;
    
    resultado = (nota1 + nota2 + nota3) / 3;

return (resultado);

}



// 1º Função - principal
int main () {
    // Declarando as variáveis;
    float notas[3];            // Vetor que irá receber as notas inseridas pelo usuário.
    float media;               // Receberá a média das notas.
    int i;                     // Conrolador para o FOR().

    // Solicitando as notas para o usuário.
    printf ("\n");
    for (i = 0; i < 3; i++) {
        printf ("Entre com a nota [%d]...............: ", i);
        scanf ("%f", &notas[i]);
    }

    // Processamento
    // Chamando a função calcularMedia
    media = calcularMedia (notas[0], notas[1], notas[2]);

    // Exibindo as notas digitadas e a média das notas
    printf ("\n");
    printf ("A média das notas: %.2f, %.2f, %.2f = %.2f \n", notas[0], notas[1], notas[2], media);
    printf ("\n");

    return 0;
}