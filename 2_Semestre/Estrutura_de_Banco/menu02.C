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

// Definição de constantes
#define INICIO_ARRANJO 1
#define TAMANHO_MAXIMO 10

// Declaração de variáveis
// Definição Estruturas de Dados  (o typedef é como se definissemos um apelido. struct é um tipo primitivo de dados)
typedef struct
{
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

// Definição Estrutura de Dados
typedef struct
{
    reg_cliente dados[TAMANHO_MAXIMO];
    int primeiro;
    int ultimo;
} tipo_lista;

// Função para posicionar o cursor na tela
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função para desenhar as bordas da tela
void telabordas()
{
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

    for (int i = 5; i <= 21; i++)
    {
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
void telacliente()
{
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

int menu(int opcao)
{
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

// Função limpar mensgem
void limpar_mensagem() {
    gotoxy (07, 23);
    printf ("                                                             ");
}


// Função pesquisar
int pesquisa(tipo_lista *L, int codigo)
{
    int x;

    for (x = 0; x < L->ultimo; x++)
    {
        if (L->dados[x].cd_cliente == codigo)
        {
            return x;
        }
    }
    return -1;
}

// Função para exibir na tela os dados de um cliente já cadastrado
void exibir_cliente(reg_cliente clie)
{
    gotoxy(28, 05);
    printf("%d", clie.cd_cliente);
    gotoxy(28, 07);
    printf("%s", clie.nm_cliente);
    gotoxy(28, 9);
    printf("%s", clie.ds_endereco);
    gotoxy(28, 11);
    printf("%d", clie.nr_numero);
    gotoxy(28, 13);
    printf("%s", clie.nr_documento);
    gotoxy(28, 15);
    printf("%s", clie.ds_cidade);
    gotoxy(28, 17);
    printf("%s", clie.ds_uf);
    gotoxy(28, 19);
    printf("%s", clie.dt_cadastro);
    gotoxy(28, 21);
    printf("%s", clie.nr_telefone);
}

void incluir(tipo_lista *L)
{ // O asterisco é o ponteiro que aponta para um endereço
    // Declaração de variáveis
    reg_cliente clie;
    int result;
    int resp;

    do
    {
        do
        {
            system("cls");
            telabordas();
            telacliente();
            gotoxy(33, 03);
            printf("INCLUSAO");

            gotoxy(07, 23);
            printf("Digite 0 para sair...");

            gotoxy(28, 05);
            scanf("%d", &clie.cd_cliente);

            // Pesquisando se o código do cliene já existe.
            result = pesquisa(L, clie.cd_cliente);

            if (result != -1)
            {
                gotoxy(07, 23);
                printf("Código já cadastrado...");
            }

        } while ((result != -1) && (clie.cd_cliente != 0));

        if (clie.cd_cliente != 0)
        {

            gotoxy(28, 07);
            fflush(stdin);
            fgets(clie.nm_cliente, 50, stdin);
            gotoxy(28, 9);
            fflush(stdin);
            fgets(clie.ds_endereco, 50, stdin);
            gotoxy(28, 11);
            scanf("%d", &clie.nr_numero);
            gotoxy(28, 13);
            fflush(stdin);
            fgets(clie.nr_documento, 20, stdin);
            gotoxy(28, 15);
            fflush(stdin);
            fgets(clie.ds_cidade, 50, stdin);
            gotoxy(28, 17);
            fflush(stdin);
            fgets(clie.ds_uf, 05, stdin);
            gotoxy(28, 19);
            fflush(stdin);
            fgets(clie.dt_cadastro, 19, stdin);
            gotoxy(28, 21);
            fflush(stdin);
            fgets(clie.nr_telefone, 15, stdin);
            gotoxy(03, 23);

            limpar_mensagem();

            gotoxy(07, 23);
            printf("Deseja gravar o cliente (1 = Sim; 2 = Nao).: ");
            scanf("%d", &resp);

            if (resp == 1)
            {
                if (L->ultimo >= TAMANHO_MAXIMO)
                {
                    gotoxy(07, 23);
                    printf("Lista cheia...");
                    getch();
                }
                else
                {
                    L->dados[L->ultimo] = clie; // Eu me refico a um ponteiro com ->
                    L->ultimo++;
                }
            }
        }

        limpar_mensagem();
        gotoxy(07, 23);
        printf("Deseja cadastrar outro (1 = Sim; 2 = Nao). : ");
        scanf("%d", &resp);

    } while (resp == 1);


}

void alterar(tipo_lista *L)
{
    // Declaração de variáveis
    reg_cliente clie;
    int posicao;
    int resp;

    do
    {
        system("cls");
        telabordas();
        telacliente();
        gotoxy(31, 03);
        printf("ALTERACAO");

        gotoxy(07, 23);
        printf("Digite 0 para sair...");

        gotoxy(28, 05);
        scanf("%d", &clie.cd_cliente);

        // Pesquisando se o código do cliente existe.
        posicao = pesquisa(L, clie.cd_cliente);

        if ((clie.cd_cliente != 0) && (posicao == -1))
        {
            gotoxy(07, 23);
            printf("Cliente nao encontrado...");
            getch();
        }

        if ((clie.cd_cliente != 0) && (posicao != -1))
        {
            // Mostra os dados atuais do cliente encontrado
            exibir_cliente(L->dados[posicao]);

            limpar_mensagem();
            gotoxy(07, 23);
            printf("Pressione uma tecla para digitar os novos dados...");
            getch();
            limpar_mensagem();

            gotoxy(28, 07);
            fflush(stdin);
            fgets(clie.nm_cliente, 50, stdin);
            gotoxy(28, 9);
            fflush(stdin);
            fgets(clie.ds_endereco, 50, stdin);
            gotoxy(28, 11);
            scanf("%d", &clie.nr_numero);
            gotoxy(28, 13);
            fflush(stdin);
            fgets(clie.nr_documento, 20, stdin);
            gotoxy(28, 15);
            fflush(stdin);
            fgets(clie.ds_cidade, 50, stdin);
            gotoxy(28, 17);
            fflush(stdin);
            fgets(clie.ds_uf, 05, stdin);
            gotoxy(28, 19);
            fflush(stdin);
            fgets(clie.dt_cadastro, 19, stdin);
            gotoxy(28, 21);
            fflush(stdin);
            fgets(clie.nr_telefone, 15, stdin);

            limpar_mensagem();
            gotoxy(07, 23);
            printf("Deseja gravar a alteracao (1 = Sim; 2 = Nao).: ");
            scanf("%d", &resp);

            if (resp == 1)
            {
                L->dados[posicao] = clie; // cd_cliente continua o mesmo da posição pesquisada
            }
        }

        limpar_mensagem();
        gotoxy(07, 23);
        printf("Deseja alterar outro (1 = Sim; 2 = Nao).   : ");
        scanf("%d", &resp);

    } while (resp == 1);


}

void excluir(tipo_lista *L)
{
    // Declaração de variáveis
    int codigo;
    int posicao;
    int resp;
    int x;

    do
    {
        system("cls");
        telabordas();
        telacliente();
        gotoxy(31, 03);
        printf("EXCLUSAO");

        gotoxy(07, 23);
        printf("Digite 0 para sair...");

        gotoxy(28, 05);
        scanf("%d", &codigo);

        // Pesquisando se o código do cliente existe.
        posicao = pesquisa(L, codigo);

        if ((codigo != 0) && (posicao == -1))
        {
            gotoxy(07, 23);
            printf("Cliente nao encontrado...");
            getch();
        }

        if ((codigo != 0) && (posicao != -1))
        {
            exibir_cliente(L->dados[posicao]);

            limpar_mensagem();
            gotoxy(07, 23);
            printf("Confirma a exclusao (1 = Sim; 2 = Nao).      : ");
            scanf("%d", &resp);

            if (resp == 1)
            {
                for (x = posicao; x < L->ultimo - 1; x++)
                {
                    L->dados[x] = L->dados[x + 1];
                }
                L->ultimo--;
            }
        }

        limpar_mensagem();
        gotoxy(07, 23);
        printf("Deseja excluir outro (1 = Sim; 2 = Nao).   : ");
        scanf("%d", &resp);

    } while (resp == 1);


}

void consultar(tipo_lista *L)
{
    // cadastro das variáveis
    int codigopesquisa;
    int posicao;
    int resp;

    do
    {
        system("cls");
        telabordas();
        telacliente();
        gotoxy(31, 03);
        printf("CONSULTA");

        gotoxy(07, 23);
        printf("Digite 0 para sair...");

        // Inicializar a variável
        codigopesquisa = 0;

        // Ler o código que o usuário digitou
        gotoxy(28, 05);
        scanf("%d", &codigopesquisa);

        if (codigopesquisa != 0)
        {
            // Pesquisando se o código do cliente existe.
            posicao = pesquisa(L, codigopesquisa);

            if (posicao == -1)
            {
                gotoxy(07, 23);
                printf("Cliente nao encontrado...");
            }
            else
            {
                exibir_cliente(L->dados[posicao]);
            }

            limpar_mensagem();
            gotoxy(07, 23);
            printf("Pressione uma tecla para continuar...      ");
            getch();
        }

        limpar_mensagem();
        gotoxy(07, 23);
        printf("Deseja consultar outro (1 = Sim; 2 = Nao). : ");
        scanf("%d", &resp);

    } while (resp == 1);


}

// Programa principal
int main()
{

    int opcao;
    tipo_lista L;

    // Inicialização de variáveis Lista (uma única vez, antes do menu começar, para não apagar os clientes cadastrados a cada volta ao menu)
    L.primeiro = 0;
    L.ultimo = 0;

    do
    {
        system("cls");

        // Definição de Variáveis
        opcao = menu(opcao);

        switch (opcao)
        {
        case 1:
            incluir(&L);
            break;
        case 2:
            alterar(&L);
            break;
        case 3:
            excluir(&L);
            break;
        case 4:
            consultar(&L);
            break;
        case 0:
            gotoxy(03, 23);
            printf("FINALIZAR O PROGRAMA \n");
            break;
        default:
            gotoxy(03, 23);
            printf("OPCAO INVALIDA \n");
            break;
        }

    } while (opcao != 0);

    return 0;
}
