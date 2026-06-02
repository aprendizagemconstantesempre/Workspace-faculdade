/*
    Autor: Aguinaldo Alves
    Data: 23/05/2026
    Objetivo:   Função para contar vogais
                Desenvolva uma função chamada contarVogais que receba uma palavra ou
                frase e retorne a quantidade de vogais existentes.
                Objetivo: praticar funções com vetores de caracteres e processamento de
                texto.
                O que o aluno deve fazer: ler a string do usuário, chamar a função e informar
                quantas vogais foram encontradas.
                Dica: lembre-se de considerar letras maiúsculas e minúsculas.
*/

// Inserindo as bibliotecas do C
#include <stdio.h>

// Programa
// 3º Função - Irá cálcular a média do vetor
int contarVogais(char mensagem[100]) {
    // Declarando as variáveis
    int totalVogais;    // Irá calcular quantas vogais tem na palavra ou frase.
    int i;              // Controlador para o FOR()

    // Inicializando a variável de resultado
    totalVogais = 0;        

    // Verificando quantas vogais tem a palavra ou frase
    for (i = 0; mensagem[i] != '\0'; i++) {             // o \0 irá interrompoer o looping
        if (mensagem[i] == 'a' || mensagem[i] == 'A' ||
            mensagem[i] == 'e' || mensagem[i] == 'E' ||
            mensagem[i] == 'i' || mensagem[i] == 'I' ||
            mensagem[i] == 'o' || mensagem[i] == 'O' ||
            mensagem[i] == 'u' || mensagem[i] == 'U')  {
            totalVogais++;
        }
    }
    
    return (totalVogais);
}


// 2º Função - Mensagem para o título
void mensagem () {
    printf ("===========================================================\n");
    printf ("=              CONTANDO VOGAIS DE UMA FRASE.              =\n");
    printf ("===========================================================\n");
    printf ("\n");
}

// 1º Função - main
int main (){
    // Declarando as variávies
    char frase[100];   // Irá guardar a frase digitada pelo usuário;
    int resultado;     // Irá receber o resultado da potência.

    mensagem();         // Chava a função void para o título do exercício.

    // Solicitando a base ao usuário.
    printf ("Entre com uma palavra ou frase de até 100 caracteres..: ");
    fgets (frase, 100, stdin);      // fgets lê frases com espaços e o stdin indica que deve ser do teclado.

    // Chamar a função que vai calcular a média do vetor e já recebe o resultado.6
    resultado = contarVogais(frase);

    // Exibindo o resultado para o usuário.
    printf ("\n");
    printf ("A palavra ou frase digitada tem: %d vogais! \n", resultado);
    printf ("\n");

    return 0;
}