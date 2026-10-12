/*
    Autor: Aguinaldo Alves
    Data: 06/10/2026
    Objetivo: Criar um sistema para registro de funcionários utilizando o conceito de lista linear dinámica.
        1 - Cadastrar funcionário no final da lista;
        2 - Cadastrar funcionário no inico da lista;
        3 - Cadastrar funcionário no meio da lista em uma posição qualquer;
        4 - Remover funcionário do final da lista;
        5 - Remover funcionário do inicio da lista;
        6 - Remover funcionário do meio da lista;
        7 - Consultar os funcionários cadastrados;
        8 - Alterar dados dos funcionários cadastrados;
        9 - Ter opção de escolher as funcionalidades;
        10 - Finalizar o sistema
*/

// Bibliotecas do C
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>


// Função Principal
int main () {

    // Definição de variáveis
    int opcao;
    //opcao = menu (opcao);

    opcao = 1;

    do {
        //system ("cls");

        switch (opcao)
        {
        case 1:
            printf ("1 - Cadastrar Funcionario no Final da Lista. \n");
            break;
        
        case 2:
            printf ("2 - Cadastrar Funcionario no Inicio da Lista. \n");
            break;

        case 3:
            printf ("3 - Cadastrar Funcionario no Meio da Lista. \n");
            break;

        case 4:
            printf ("4 - Remover Funcionario do Final da Lista. \n");
            break;

        case 5:
            printf ("5 - Remover Funcionario do Inicio da Lista. \n");
            break;

        case 6:
            printf ("6 - Remover Funcionario do Meio da Lista. \n");
            break;

        case 7:
            printf ("7 - Consultar Funcionarios Registrados. \n");
            break;

        case 8:
            printf ("8 - Alterar Dados dos Funcionarios Registrados. \n");
            break;

        case 0:
            printf ("0 - Finalizar Sistema. \n");
            break;

        default:
            printf ("Opcao Invalida! ");
            break;
        }

    } while (opcao != 0);
       

    return 0;
}