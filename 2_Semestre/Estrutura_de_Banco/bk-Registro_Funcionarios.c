/*
    Autor: Aguinaldo Alves
    Data: 06/10/2026
    Objetivo: Criar um sistema para registro de funcionários utilizando o conceito de lista simplesmente encadeada.
        1 - Cadastrar funcionário no final da lista;
        2 - Cadastrar funcionário no início da lista;
        3 - Cadastrar funcionário em uma posição da lista;
        4 - Remover funcionário do final da lista;
        5 - Remover funcionário do início da lista;
        6 - Remover funcionário em uma posição da lista;
        7 - Alterar o cadastro de um funcionário;
        8 - Consultar os funcionários cadastrados;
        9 - Sair do programa (gravando a lista em disco).

    Persistência: ao iniciar, a lista é carregada do arquivo "funcionarios.dat";
    ao sair (opção 9), a lista é gravada novamente nesse arquivo.
*/

// Bibliotecas do C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

// Definição de constantes
#define ARQUIVO "funcionarios.dat"

// Definição Estruturas de dados
typedef struct
{
    int cd_funcionario;
    char nm_funcionario[50];
    char endereco[50];
    char dt_nasc[10];
    char telefone[15];
    char cpf[15];
    char cargo[40];
    char depto[30];
    float salario;
} reg_funcionario;

// Ponteiro para um item (nó) da lista
typedef struct TipoItem *TipoApontador;

// Cada item guarda os dados do funcionário e o endereço do próximo item
typedef struct TipoItem
{
    reg_funcionario conteudo;
    TipoApontador proximo;
} TipoItem;

// A lista guarda o endereço do primeiro e do último item
typedef struct
{
    TipoApontador Primeiro;
    TipoApontador Ultimo;
} TipoLista;

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
    gotoxy(22, 02);
    printf("CADASTRO DE FUNCIONARIOS");
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

// Função para desenhar a tela com os campos do funcionário
void telafuncionario()
{
    telabordas();

    gotoxy(3, 5);
    printf("Codigo do Funcionario: ");
    gotoxy(3, 7);
    printf("1 - Nome..............: ");
    gotoxy(3, 9);
    printf("2 - Endereco..........: ");
    gotoxy(3, 11);
    printf("3 - Dt Nasc.(dd/mm/aa): ");
    gotoxy(3, 13);
    printf("4 - Telefone..........: ");
    gotoxy(3, 15);
    printf("5 - CPF...............: ");
    gotoxy(3, 17);
    printf("6 - Cargo.............: ");
    gotoxy(3, 19);
    printf("7 - Departamento......: ");
    gotoxy(3, 21);
    printf("8 - Salario...........: ");
}

// Função limpar mensagem
void limpar_mensagem()
{
    gotoxy(03, 23);
    printf("%76s", "");
}

// Função para exibir uma mensagem na linha de rodapé e esperar uma tecla
void mensagem(char *texto)
{
    limpar_mensagem();
    gotoxy(07, 23);
    printf("%s", texto);
    getch();
}

// Função para ler um número inteiro na linha de rodapé
int perguntar(char *texto)
{
    int resp = 0;

    limpar_mensagem();
    gotoxy(07, 23);
    printf("%s", texto);
    fflush(stdin);
    scanf("%d", &resp);

    return resp;
}

// Função para inicializar a lista vazia
void inicializar_lista(TipoLista *L)
{
    L->Primeiro = NULL;
    L->Ultimo = NULL;
}

// Função que conta quantos funcionários existem na lista
int contar_funcionarios(TipoLista *L)
{
    int total = 0;
    TipoApontador p = L->Primeiro;

    while (p != NULL)
    {
        total++;
        p = p->proximo;
    }

    return total;
}

// Função pesquisar: procura o código e devolve o endereço do item (ou NULL se não achar).
// Se "posicao" não for NULL, também devolve a posição (1, 2, 3...) do funcionário na lista.
TipoApontador pesquisa(TipoLista *L, int codigo, int *posicao)
{
    TipoApontador p = L->Primeiro;
    int pos = 1;

    while (p != NULL)
    {
        if (p->conteudo.cd_funcionario == codigo)
        {
            if (posicao != NULL)
            {
                *posicao = pos;
            }
            return p;
        }
        p = p->proximo;
        pos++;
    }

    return NULL;
}

// Função que devolve o endereço do item que está em uma posição (1 = primeiro)
TipoApontador buscar_posicao(TipoLista *L, int posicao)
{
    TipoApontador p = L->Primeiro;
    int i;

    for (i = 1; (i < posicao) && (p != NULL); i++)
    {
        p = p->proximo;
    }

    return p;
}

// Função para exibir na tela os dados de um funcionário já cadastrado
void exibir_funcionario(reg_funcionario func)
{
    gotoxy(28, 05);
    printf("%d", func.cd_funcionario);
    gotoxy(28, 07);
    printf("%s", func.nm_funcionario);
    gotoxy(28, 9);
    printf("%s", func.endereco);
    gotoxy(28, 11);
    printf("%s", func.dt_nasc);
    gotoxy(28, 13);
    printf("%s", func.telefone);
    gotoxy(28, 15);
    printf("%s", func.cpf);
    gotoxy(28, 17);
    printf("%s", func.cargo);
    gotoxy(28, 19);
    printf("%s", func.depto);
    gotoxy(28, 21);
    printf("%.2f", func.salario);
}

// Função para ler um texto em uma linha da tela.
// Limpa o que estava escrito no campo e retira o '\n' que o fgets guarda no final.
void ler_texto(int y, char *destino, int tamanho)
{
    gotoxy(28, y);
    printf("%49s", "");
    gotoxy(28, y);
    fflush(stdin);
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino, "\n")] = '\0';
}

// Função para ler os dados do funcionário (menos o código)
void ler_funcionario(reg_funcionario *func)
{
    ler_texto(7, func->nm_funcionario, 50);
    ler_texto(9, func->endereco, 50);
    ler_texto(11, func->dt_nasc, 10);
    ler_texto(13, func->telefone, 15);
    ler_texto(15, func->cpf, 15);
    ler_texto(17, func->cargo, 40);
    ler_texto(19, func->depto, 30);

    gotoxy(28, 21);
    printf("%49s", "");
    gotoxy(28, 21);
    fflush(stdin);
    scanf("%f", &func->salario);
}

// Função que cria um novo item na memória com os dados do funcionário
TipoApontador novo_item(reg_funcionario func)
{
    TipoApontador novo = (TipoApontador) malloc(sizeof(TipoItem));

    if (novo != NULL)
    {
        novo->conteudo = func;
        novo->proximo = NULL;
    }

    return novo;
}

// Inserir no final: o último item passa a apontar para o novo
int inserir_final(TipoLista *L, reg_funcionario func)
{
    TipoApontador novo = novo_item(func);

    if (novo == NULL)
    {
        return 0; // Sem memória
    }

    if (L->Primeiro == NULL) // Lista vazia: o novo é o primeiro e o último
    {
        L->Primeiro = novo;
    }
    else
    {
        L->Ultimo->proximo = novo;
    }
    L->Ultimo = novo;

    return 1;
}

// Inserir no início: o novo aponta para o antigo primeiro
int inserir_inicio(TipoLista *L, reg_funcionario func)
{
    TipoApontador novo = novo_item(func);

    if (novo == NULL)
    {
        return 0;
    }

    novo->proximo = L->Primeiro;
    L->Primeiro = novo;

    if (L->Ultimo == NULL) // Lista estava vazia
    {
        L->Ultimo = novo;
    }

    return 1;
}

// Inserir em uma posição (1 até total + 1)
int inserir_posicao(TipoLista *L, reg_funcionario func, int posicao)
{
    TipoApontador anterior;
    TipoApontador novo;

    if (posicao == 1)
    {
        return inserir_inicio(L, func);
    }

    if (posicao == contar_funcionarios(L) + 1)
    {
        return inserir_final(L, func);
    }

    novo = novo_item(func);
    if (novo == NULL)
    {
        return 0;
    }

    // Anda até o item que fica ANTES da posição desejada
    anterior = buscar_posicao(L, posicao - 1);

    novo->proximo = anterior->proximo;
    anterior->proximo = novo;

    return 1;
}

// Remover do início: o segundo item passa a ser o primeiro
void remover_inicio(TipoLista *L)
{
    TipoApontador p = L->Primeiro;

    L->Primeiro = p->proximo;

    if (L->Primeiro == NULL) // A lista ficou vazia
    {
        L->Ultimo = NULL;
    }

    free(p);
}

// Remover do final: precisa achar o penúltimo, pois a lista só anda para frente
void remover_final(TipoLista *L)
{
    TipoApontador anterior;

    if (L->Primeiro == L->Ultimo) // Só existe um item
    {
        free(L->Primeiro);
        L->Primeiro = NULL;
        L->Ultimo = NULL;
        return;
    }

    anterior = L->Primeiro;
    while (anterior->proximo != L->Ultimo)
    {
        anterior = anterior->proximo;
    }

    free(L->Ultimo);
    anterior->proximo = NULL;
    L->Ultimo = anterior;
}

// Remover de uma posição (1 até total)
void remover_posicao(TipoLista *L, int posicao)
{
    TipoApontador anterior;
    TipoApontador p;

    if (posicao == 1)
    {
        remover_inicio(L);
        return;
    }

    anterior = buscar_posicao(L, posicao - 1);
    p = anterior->proximo;

    anterior->proximo = p->proximo; // "Pula" o item removido

    if (p == L->Ultimo)
    {
        L->Ultimo = anterior;
    }

    free(p);
}

// Função de cadastro. tipo: 1 = final; 2 = início; 3 = posição
void cadastrar(TipoLista *L, int tipo)
{
    // Declaração de variáveis
    reg_funcionario func;
    TipoApontador result;
    int posicao = 0;
    int total;
    int resp;

    do
    {
        telafuncionario();
        gotoxy(24, 03);
        if (tipo == 1)
            printf("CADASTRO NO FINAL DA LISTA");
        else if (tipo == 2)
            printf("CADASTRO NO INICIO DA LISTA");
        else
            printf("CADASTRO EM UMA POSICAO DA LISTA");

        // Para cadastro em posição, primeiro pergunta onde inserir
        if (tipo == 3)
        {
            total = contar_funcionarios(L);
            limpar_mensagem();
            gotoxy(07, 23);
            printf("Informe a posicao (1 a %d) ou 0 para sair: ", total + 1);
            posicao = 0;
            fflush(stdin);
            scanf("%d", &posicao);

            if (posicao == 0)
            {
                return;
            }

            if ((posicao < 1) || (posicao > total + 1))
            {
                mensagem("Posicao invalida... Pressione uma tecla.");
                resp = 1; // O continue vai direto para o while: força repetir o laço
                continue;
            }
        }

        limpar_mensagem();
        gotoxy(07, 23);
        printf("Digite 0 para sair...");

        // Lê o código até digitar um que não exista (ou 0 para sair)
        do
        {
            func.cd_funcionario = 0;
            gotoxy(28, 05);
            printf("%49s", "");
            gotoxy(28, 05);
            fflush(stdin);
            scanf("%d", &func.cd_funcionario);

            // Pesquisando se o código do funcionário já existe.
            result = pesquisa(L, func.cd_funcionario, NULL);

            if (result != NULL)
            {
                limpar_mensagem();
                gotoxy(07, 23);
                printf("Codigo ja cadastrado... Digite outro ou 0 para sair.");
            }

        } while ((result != NULL) && (func.cd_funcionario != 0));

        if (func.cd_funcionario == 0)
        {
            return;
        }

        limpar_mensagem();
        ler_funcionario(&func);

        resp = perguntar("Deseja gravar o funcionario (1 = Sim; 2 = Nao).: ");

        if (resp == 1)
        {
            int ok;

            if (tipo == 1)
                ok = inserir_final(L, func);
            else if (tipo == 2)
                ok = inserir_inicio(L, func);
            else
                ok = inserir_posicao(L, func, posicao);

            if (ok)
                mensagem("Funcionario cadastrado! Pressione uma tecla.");
            else
                mensagem("Erro: memoria insuficiente... Pressione uma tecla.");
        }

        resp = perguntar("Deseja cadastrar outro (1 = Sim; 2 = Nao). : ");

    } while (resp == 1);
}

// Função de remoção. tipo: 1 = final; 2 = início; 3 = posição
void remover(TipoLista *L, int tipo)
{
    // Declaração de variáveis
    TipoApontador p;
    int posicao;
    int total;
    int resp;

    do
    {
        telafuncionario();
        gotoxy(24, 03);
        if (tipo == 1)
            printf("REMOCAO DO FINAL DA LISTA");
        else if (tipo == 2)
            printf("REMOCAO DO INICIO DA LISTA");
        else
            printf("REMOCAO EM UMA POSICAO DA LISTA");

        total = contar_funcionarios(L);

        if (total == 0)
        {
            mensagem("Lista vazia... Pressione uma tecla.");
            return;
        }

        // Descobre qual posição será removida
        if (tipo == 1)
        {
            posicao = total;
        }
        else if (tipo == 2)
        {
            posicao = 1;
        }
        else
        {
            limpar_mensagem();
            gotoxy(07, 23);
            printf("Informe a posicao (1 a %d) ou 0 para sair: ", total);
            posicao = 0;
            fflush(stdin);
            scanf("%d", &posicao);

            if (posicao == 0)
            {
                return;
            }

            if ((posicao < 1) || (posicao > total))
            {
                mensagem("Posicao invalida... Pressione uma tecla.");
                resp = 1; // O continue vai direto para o while: força repetir o laço
                continue;
            }
        }

        // Mostra o funcionário que será removido
        p = buscar_posicao(L, posicao);
        exibir_funcionario(p->conteudo);

        resp = perguntar("Confirma a remocao (1 = Sim; 2 = Nao).      : ");

        if (resp == 1)
        {
            if (tipo == 1)
                remover_final(L);
            else if (tipo == 2)
                remover_inicio(L);
            else
                remover_posicao(L, posicao);

            mensagem("Funcionario removido! Pressione uma tecla.");
        }

        resp = perguntar("Deseja remover outro (1 = Sim; 2 = Nao).   : ");

    } while (resp == 1);
}

void alterar(TipoLista *L)
{
    // Declaração de variáveis
    reg_funcionario func;
    TipoApontador p;
    int resp;

    do
    {
        telafuncionario();
        gotoxy(31, 03);
        printf("ALTERACAO");

        gotoxy(07, 23);
        printf("Digite 0 para sair...");

        func.cd_funcionario = 0;
        gotoxy(28, 05);
        fflush(stdin);
        scanf("%d", &func.cd_funcionario);

        if (func.cd_funcionario == 0)
        {
            return;
        }

        // Pesquisando se o código do funcionário existe.
        p = pesquisa(L, func.cd_funcionario, NULL);

        if (p == NULL)
        {
            mensagem("Funcionario nao encontrado... Pressione uma tecla.");
        }
        else
        {
            // Mostra os dados atuais do funcionário encontrado
            exibir_funcionario(p->conteudo);

            mensagem("Pressione uma tecla para digitar os novos dados...");
            limpar_mensagem();

            ler_funcionario(&func);

            resp = perguntar("Deseja gravar a alteracao (1 = Sim; 2 = Nao).: ");

            if (resp == 1)
            {
                p->conteudo = func; // cd_funcionario continua o mesmo do pesquisado
                mensagem("Alteracao gravada! Pressione uma tecla.");
            }
        }

        resp = perguntar("Deseja alterar outro (1 = Sim; 2 = Nao).   : ");

    } while (resp == 1);
}

void consultar(TipoLista *L)
{
    // Declaração de variáveis
    TipoApontador p;
    int codigopesquisa;
    int posicao;
    int resp;

    do
    {
        telafuncionario();
        gotoxy(31, 03);
        printf("CONSULTA");

        gotoxy(07, 23);
        printf("Digite 0 para sair...");

        // Inicializar a variável e ler o código que o usuário digitou
        codigopesquisa = 0;
        gotoxy(28, 05);
        fflush(stdin);
        scanf("%d", &codigopesquisa);

        if (codigopesquisa == 0)
        {
            return;
        }

        // Pesquisando se o código do funcionário existe.
        p = pesquisa(L, codigopesquisa, &posicao);

        if (p == NULL)
        {
            mensagem("Funcionario nao encontrado... Pressione uma tecla.");
        }
        else
        {
            exibir_funcionario(p->conteudo);

            limpar_mensagem();
            gotoxy(07, 23);
            printf("Posicao na lista: %d. Pressione uma tecla para continuar...", posicao);
            getch();
        }

        resp = perguntar("Deseja consultar outro (1 = Sim; 2 = Nao). : ");

    } while (resp == 1);
}

// Função que carrega os funcionários do arquivo para a lista (ao abrir o programa)
void carregar_arquivo(TipoLista *L)
{
    FILE *arq;
    reg_funcionario func;

    arq = fopen(ARQUIVO, "rb");

    if (arq == NULL) // Primeira execução: o arquivo ainda não existe
    {
        return;
    }

    // Lê um registro por vez e coloca no final da lista, mantendo a ordem gravada
    while (fread(&func, sizeof(reg_funcionario), 1, arq) == 1)
    {
        inserir_final(L, func);
    }

    fclose(arq);
}

// Função que grava todos os funcionários da lista no arquivo (ao sair do programa)
int salvar_arquivo(TipoLista *L)
{
    FILE *arq;
    TipoApontador p;

    arq = fopen(ARQUIVO, "wb");

    if (arq == NULL)
    {
        return 0;
    }

    for (p = L->Primeiro; p != NULL; p = p->proximo)
    {
        fwrite(&p->conteudo, sizeof(reg_funcionario), 1, arq);
    }

    fclose(arq);
    return 1;
}

// Função que libera da memória todos os itens da lista
void liberar_lista(TipoLista *L)
{
    while (L->Primeiro != NULL)
    {
        remover_inicio(L);
    }
}

int menu(TipoLista *L)
{
    int opcao = -1;

    telabordas();

    gotoxy(33, 03);
    printf("MENU PRINCIPAL");

    gotoxy(20, 6);
    printf("1 - Cadastrar Funcionario no Final da Lista");
    gotoxy(20, 7);
    printf("2 - Cadastrar Funcionario no Inicio da Lista");
    gotoxy(20, 8);
    printf("3 - Cadastrar Funcionario em uma Posicao da Lista");
    gotoxy(20, 10);
    printf("4 - Remover Funcionario no Final da Lista");
    gotoxy(20, 11);
    printf("5 - Remover Funcionario no Inicio da Lista");
    gotoxy(20, 12);
    printf("6 - Remover Funcionario em uma Posicao da Lista");
    gotoxy(20, 14);
    printf("7 - Alteracao do Cadastro de Funcionario");
    gotoxy(20, 15);
    printf("8 - Consultar Funcionarios");
    gotoxy(20, 17);
    printf("9 - Sair do Programa");

    gotoxy(20, 20);
    printf("Funcionarios cadastrados: %d", contar_funcionarios(L));

    gotoxy(03, 23);
    printf("Escolha uma opcao: ");
    fflush(stdin);
    scanf("%d", &opcao);

    return opcao;
}

// Programa principal
int main()
{
    int opcao;
    TipoLista L;

    // Inicializa a lista vazia e carrega os funcionários gravados em disco
    inicializar_lista(&L);
    carregar_arquivo(&L);

    do
    {
        opcao = menu(&L);

        switch (opcao)
        {
        case 1:
            cadastrar(&L, 1);
            break;
        case 2:
            cadastrar(&L, 2);
            break;
        case 3:
            cadastrar(&L, 3);
            break;
        case 4:
            remover(&L, 1);
            break;
        case 5:
            remover(&L, 2);
            break;
        case 6:
            remover(&L, 3);
            break;
        case 7:
            alterar(&L);
            break;
        case 8:
            consultar(&L);
            break;
        case 9:
            limpar_mensagem();
            gotoxy(03, 23);
            if (salvar_arquivo(&L))
                printf("Dados gravados em %s. Programa finalizado.", ARQUIVO);
            else
                printf("ERRO ao gravar %s! Programa finalizado.", ARQUIVO);
            liberar_lista(&L);
            gotoxy(01, 25);
            break;
        default:
            mensagem("OPCAO INVALIDA... Pressione uma tecla.");
            break;
        }

    } while (opcao != 9);

    return 0;
}
