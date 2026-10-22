# Contexto do Projeto — Aguinaldo (Engenharia de Software)

> **Como usar este arquivo:** cole o conteúdo dele no início de uma conversa no
> Claude Desktop, Claude Web ou Claude no celular para retomar de onde parou.
> No Claude Code (VS Code), a IA já lê este arquivo automaticamente.
> Sempre que algo relevante mudar, peça para a IA (em qualquer plataforma)
> atualizar este arquivo e você recolar/salvar a versão nova.

## Quem sou

Estudante do curso de Engenharia de Software. Estudando Estrutura de Dados e
Estrutura de Banco no 2º semestre, com exercícios em linguagem C.

## Preferências de trabalho

- Conversar sempre em **português do Brasil**.
- Repositório do curso: `Workspace-faculdade` (Git), organizado por
  `1_Semestre/` e `2_Semestre/`.
- Pasta atual em foco: `2_Semestre/Estrutura_de_Banco/`.

## Estado atual (atualizado em 2026-09-12)

- Ambiente Claude Code configurado no VS Code (extensão + CLI instalado em
  `C:\Users\aguin\.local\bin`, adicionado ao PATH do usuário).
- Exercícios em andamento na pasta `Estrutura_de_Banco`:
  - `menu02.C` (modificado, pendente de revisão/commit)
  - `Exercicio_Sala_1.c` (novo, aberto no editor)
  - `teste.c`, `teste-1.c` (rascunhos/testes)
- Últimos commits do repositório: exercícios de Estrutura de Dados/Banco
  ("Código do Rodney", "Menu 02 - Faculdade").

## Atualização 2026-10-19

- `Registro_Funcionarios.c` (Estrutura de Dados, Prof. Rodney): cadastro de
  funcionários com lista simplesmente encadeada + gravação em `funcionarios.dat`.
  Código completo escrito pelo Claude a pedido do Aguinaldo (exceção ao modo
  parceiro de estudo), no estilo do `menu02.C`. Falta o arquivo de dados de
  exemplo e a explicação de como compilar e executar, que a entrega pede.

## Atualização 2026-10-21

- Fonte e executável renomeados sem acento: `Registro_Funcionarios.c` e
  `output/Registro_Funcionarios.exe` (recompilado com `gcc -Wall`, sem avisos).
- Pendências do `Registro_Funcionarios.c`:
  - Bug do `continue` em `cadastrar` e `remover` (posição inválida caía no
    `while (resp == 1)` com `resp` sem valor): CORRIGIDO pelo Claude a pedido
    do Aguinaldo, com `resp = 1;` antes do `continue`. Falta ele testar.
  - Bug testado pelo Aguinaldo: OK.
  - `output/funcionarios.dat` agora tem 15 registros (3300 bytes): 5 cadastrados
    pelo Aguinaldo (códigos 1, 3–6) + 10 fictícios gerados pelo Claude (7–16).
    Datas truncadas dos códigos 3, 4, 5, 6 corrigidas para `dd/mm/aa` (último
    dígito do ano perdido; completado com 0). Dados com cara de reais dos
    códigos 1 e 5 (nome, endereço, telefone, CPF) trocados por fictícios.
  - Backup do código antes das mudanças pedidas pelo professor:
    `bk-Registro_Funcionarios.c` (cópia solta, fora do git).
  - Mudança 1 (feita pelo Claude a pedido): a opção 8 (`consultar`) abre no
    primeiro funcionário e navega só com P (próximo), V (voltar) e S (sair) —
    Aguinaldo pediu a versão simples. Voltar usa `buscar_posicao` (lista só
    anda para frente). Testado pelo Aguinaldo: OK.
  - Mudança 2 (feita pelo Claude a pedido, padrão do professor): funções de
    arquivo renomeadas para `Ler_Arquivo` (modo "rb") e `void Gravar` (modo
    "wb"), ponteiro `FILE *ptr`. Se `funcionarios.dat` não existir ao abrir,
    mostra mensagem de erro e inicia com lista vazia. Falta testar.
  - `Registro_Funcionarios_explicado.pdf` ATUALIZADO pelo Claude (49 páginas):
    consulta P/V/S, `Ler_Arquivo`/`Gravar`, correção do `continue`, seção
    "O que mudou nesta versão" e explicação do porquê de cada biblioteca.
    Fonte HTML gerada no scratchpad da sessão (Edge headless → PDF).
  - Depois das mudanças: escrever o LEIAME da entrega.
  - Escrever o LEIAME com a explicação do `.dat` e como compilar/executar.

## Próximos passos combinados

- (preencher conforme os próximos exercícios forem definidos)

## Notas / decisões importantes

- Sem áudio/voz nas conversas com Claude — tudo é por texto.
- Claude Code e claude.ai (Desktop/Web/celular) **não compartilham memória
  automaticamente** — este arquivo existe para suprir isso manualmente.
