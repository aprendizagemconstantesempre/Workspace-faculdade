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
// Definição Estruturas de Dados
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

void opcao1() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(33, 03);
    printf("INCLUSAO");
    
    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch();
}

void opcao2() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(31, 03);
    printf("ALTERACAO");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch();
}

void opcao3() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(31, 03);
    printf("EXCLUSAO");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch();
}

void opcao4() {
    system("cls");
    telabordas();
    telacliente ();
    gotoxy(31, 03);
    printf("CONSULTA");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");
    
    getch();
}

void sair() {
    system("cls");

    telabordas();

    gotoxy(26, 12);
    printf("Programa encerrado.\n");
    
    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");
    getch();
}

void opcaoInvalida() {
    system("cls");

    telabordas();

    gotoxy(26, 11);
    printf("----------------------------\n");
    gotoxy(26, 12);
    printf("------ Opcao invalida ------\n");
    gotoxy(26, 13);
    printf("----------------------------\n");

    gotoxy(03, 23);
    printf("Pressione qualquer tecla para continuar...");

    getch(); // Aguarda o usuário pressionar uma tecla antes de reiniciar o menu

}

int main() {

    int opcao;

    do {
        system("cls");

        opcao = menu(opcao);
        
        switch (opcao) {
            case 1:
                opcao1();
                break;
            case 2:
                opcao2();
                break;
            case 3:
                opcao3();
                break;
            case 4:
                opcao4();
                break;
            case 0:
                sair();
                break;
            default:
                opcaoInvalida();
        }

    } while (opcao != 0); 


}
