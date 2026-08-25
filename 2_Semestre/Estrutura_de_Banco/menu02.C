/*
Nome: Aguinaldo Alves
data: 11/08/2026
Objetivo: menu simples com switch case
*/

// Declaração das bibliotecas do C
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// Declaração de variáveis
// Definição Estruturas de Dados  (o typedef é como se definissemos um apelido. struct é um tipo primitivo de dados)
typedef struct {
    int cd_cliente;
    char nm_cliente[50];
    char ds_endereco[50];
    int nr_numero;
    char nr_documento[20];
    char ds_cidade[50];
    char ds_uf[05];
    char dt_cadastro[19];
    char nr_telefone[15];
} reg_cliente;



// Função para posicionar o cursor na tela
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função para desenhar as bordas da tela
void telabordas() {
    system("cls");

    gotoxy(01, 01);
    printf("+------------------------------------------------------------------------------+");

    gotoxy(01, 02);
    printf("| UNICIVE");
    gotoxy(23, 02);
    printf("SISTEMA DE GESTAO DE CLIENTES");
    gotoxy(61, 02);
    printf("Estrutura de Dados |\n");

    gotoxy(01, 03);
    printf("|                                                                              |");

    gotoxy(01, 04);
    printf("+------------------------------------------------------------------------------+");

    for (int i = 5; i <= 21; i++) {
        gotoxy(01, i);
        printf("|                                                                              |");
    }

    gotoxy(01, 22);
    printf("+------------------------------------------------------------------------------+");

    gotoxy(01, 23);
    printf("|                                                                              |");

    gotoxy(01, 24);
   printf("+------------------------------------------------------------------------------+");
}

// Função para exibir informações do cliente
void telacliente () {
    system("cls");
    telabordas();

    gotoxy(7, 5);
    printf("Codigo do cliente.:");
    gotoxy(3, 7);
    printf("1 - Nome do cliente...: ");
    gotoxy(3, 9);
    printf("2 - Endereco..........: ");
    gotoxy(3, 11);
    printf("3 - Numero............: ");
    gotoxy(3, 13);
    printf("4 - CPF...............: ");
    gotoxy(3, 15);
    printf("5 - Cidade............: ");
    gotoxy(3, 17);
    printf("6 - Estado............: ");
    gotoxy(3, 19);
    printf("7 - Data Cadastro.....: ");
    gotoxy(3, 21);
    printf("8 - Telefone..........: ");
}

int menu(int opcao){
    telabordas();

    gotoxy(30, 9);
    printf("Menu:\n");

        gotoxy(30, 11);
        printf("1 - Inclusao\n");
    
        gotoxy(30, 12);
        printf("2 - Alteracao\n");

        gotoxy(30, 13);
        printf("3 - Exclusao\n");

        gotoxy(30, 14);
        printf("4 - Consulta\n");

        gotoxy(30, 15);
        printf("0 - Fechar Programa\n");

        gotoxy(03, 23);
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    return opcao;
}

void incluir() {
    reg_cliente clie;
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(33, 03);
    printf("INCLUSAO");
    gotoxy(28, 05);
    scanf ("%d", &clie.cd_cliente);
    gotoxy (28, 07);
    fflush (stdin) ;
    fgets(clie .nm_cliente, 50, stdin) ;
    gotoxy (28, 9);
    fflush (stdin);
    fgets (clie.ds_endereco, 50, stdin);
    gotoxy (28, 11);
    scanf ("%d", &clie.nr_numero);
    gotoxy (28, 13);
    fflush (stdin);
    fgets (clie.nr_documento, 20, stdin);
    gotoxy (28, 15);
    fflush (stdin);
    fgets (clie.ds_cidade, 50, stdin);
    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch();
}

void alterar() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(31, 03);
    printf("ALTERACAO");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch();
}

void excluir() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(31, 03);
    printf("EXCLUSAO");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch();
}

void consultar() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(31, 03);
    printf("CONSULTA");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");
    
    getch();
}

// Programa principal
int main() {

    int opcao;

    do {
        system("cls");

        opcao = menu(opcao);
        
        switch (opcao) {
            case 1:
                incluir();
                break;
            case 2:
                alterar();
                break;
            case 3:
                excluir();
                break;
            case 4:
                consultar();
                break;
            case 5:
                gotoxy(40,19);
                printf("FINALIZAR O PROGRAMA \n");
                break;
            default:
                gotoxy(49, 19);
                printf ("OPÇÃO INVALIDA \n");
                break;
        }
        getch() ;
    } while (opcao != 5); 

return 0;

}
