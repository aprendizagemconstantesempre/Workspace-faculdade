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

## Atualização 2026-10-26 — Trabalho Final de Estrutura de Dados

- Projeto: **Sistema de Controle Bancário** (Prof. Rodney), prazo 09/11/2026.
  Contas em lista DUPLAMENTE encadeada, movimentações em lista SIMPLESMENTE
  encadeada, gravação em disco, testes documentados e README.
- Repositório próprio: https://github.com/aprendizagemconstantesempre/BancoGafanhotos
  clonado em `G:\Meu Drive\Faculdade_Aguinaldo\Disciplinas 2 Semestre\Estrutura de Dados\2_Bimestre\BancoGafanhotos`.
- Desenvolvimento faseado por tela (plano em `docs/plano_de_desenvolvimento.md`
  do repo), layout no padrão do `menu02.C` / `Registro_Funcionarios.c`.
- Fase 0 (estrutura de pastas, .gitignore, README) commitada localmente.
- Pendente: decidir se o código será feito no modo parceiro de estudo ou
  escrito pelo Claude.

## Atualização 2026-10-27 — Regras do professor para o BancoGafanhotos

Autores: Aguinaldo Alves e Gustavo Pereira.
1. Uma função por arquivo `.c`, todos na mesma pasta (nenhum arquivo com duas funções).
2. Cada arquivo com nome do autor, data e comentário sucinto do código.
3. Arquivo `funcoes.c` junta todos os `.c`.
4. Dados salvos no arquivo `BancoGafanhoto` dentro da pasta `output`.
5. Transferência entre contas: antes de confirmar, mostrar o saldo das duas contas já considerando a transferência.
6. Opção de estorno de lançamentos.
7. Sempre pedir confirmação da transação.
8. Seguir o plano de testes do PDF (o professor vai avaliar com ele).
Listas: seguir o PDF do projeto (contas = dupla, movimentações = simples).
Nenhum commit/push sem o Aguinaldo pedir.
Decisões (2026-10-27): todos os `.c` na raiz do repo; `main.c` inclui `funcoes.c`
(que também tem as structs/typedef); um único arquivo `output/BancoGafanhoto`;
estorno = lançamento inverso; usar só os conceitos do `menu02.C` e do
`Registro_Funcionarios.c`; comentários no infinitivo, curtos e humanizados (ex.: "Percorrer a lista até achar a conta"); explicar cada
função para o Aguinaldo conseguir apresentar o código.
Pasta oficial do projeto (2026-10-27): `C:\Users\aguin\Documents\BancoGafanhotos`
(a cópia no Google Drive foi apagada). Criados `main.c`, `funcoes.c` (structs),
`gotoxy.c`, `telabordas.c`, `output/`, `tests/`, `docs/`. Nada commitado ainda —
o Aguinaldo faz os commits.
Fase 1 (resto) + Fase 2 feitas pelo Claude a pedido (2026-10-27): rodapé
(`limpar_mensagem`, `mensagem`, `perguntar`), leitura (`ler_texto`, `ler_opcao`,
`ler_valor`, `ler_conta`), `tela_conta`, `menu`, `menu_cadastro`, `incluir_conta`
e lista dupla (`inicializar_lista_conta`, `contar_contas`, `pesquisar_conta`,
`buscar_posicao_conta`, `nova_conta`, `inserir_conta_inicio/final/posicao`,
`liberar_contas`). Compila sem avisos; ponteiros testados nos dois sentidos.
Falta o Aguinaldo testar a tela de inclusão e commitar.

## Atualização 2026-11-02 — Trabalho Bimestral JavaFX (Paradigma de Programação)

- Projeto: `2_Semestre/Paradigma_de_Programacao/Lista_Compras` (Lista de Compras,
  JavaFX 21 + Scene Builder + POO). Prazo **09/11/2026 23:59** (mesmo dia do BancoGafanhotos).
- Instruções do professor: `C:\Users\aguin\Downloads\Faculdade\Instruções_Tabalho_Bimestral.pdf`
  (mínimo 3 telas: Cadastro, Consulta, Movimentação; passagem de dados entre telas;
  herança; polimorfismo; MVC; documentação + apresentação). Exemplo do professor:
  `ExemploJavaFx.zip` (Cliente + ClienteDAO/ClienteDAOImpl com ArrayList, NetBeans).
- Pronto: 5 FXML (Menu, Cadastro Lista/Estabelecimento/Produto, Criar Lista), controllers
  só com esqueleto, `Navegador.abrir`. `pom.xml` e `Main.java` alterados e sem commit.
- Faltando: Model, herança/polimorfismo, tela de Consulta, passagem de objetos, movimentação.
- Cronograma faseado em `Lista_Compras/docs/cronograma_entrega.md` (Fase 0 em 02/11 até
  a entrega em 09/11).
- (02/11, revisão) O sistema também atende a **Processo de Software e Eng. de Requisitos**:
  `Downloads\Faculdade\Trabalho_Bimestral_DFD_e_BDD_v1.pdf` (RF001–RF018, NF001–NF006,
  RN001–RN090, DFD D1–D4, histórias H01–H18). Grupo: Aguinaldo Alves, Gustavo Pereira,
  Gustavo Miguel, João Pedro.
- Decisão: **sem tela de Consulta nova**. A consulta fica embutida nas telas de cadastro
  (RN010; o menu tem 5 opções fixas pela RN002); Criar Lista = Movimentação.
- JSON (NF001, Gson) passou a ser obrigatório. Model: `Cadastro` abstrata → ListaCompra,
  Estabelecimento e Produto; polimorfismo em `getDetalhe()`/`getMensagemEmUso()`; `Repositorio`
  com as 4 listas = D1–D4. Cronograma revisado em `docs/cronograma_entrega.md`, com divisão por integrante.
- (02/11) Fase 0 feita pelo Claude: o projeto compila sem avisos e as 5 telas carregam com seus
  controllers (testado fora do IntelliJ). **Nada commitado:** o Aguinaldo faz os commits
  manualmente ao fim de cada fase (o commit que o Claude tinha feito foi desfeito). Pendente:
  rodar no IntelliJ, commitar a Fase 0 e combinar a divisão com o grupo. Aviso: os FXML declaram JavaFX 26 e o runtime é o 21.0.6.
- (03/11) **Fase 1 (Model) implementada pelo Claude a pedido** e ainda sem commit (o Aguinaldo commita).
  Pacote `model`: Cadastro (abstrata; temMesmoNome, getDetalhe, getMensagemEmUso, estaVinculadoA),
  ListaCompra, Estabelecimento, Produto, UnidadeMedida, ItemLista (guarda ids), ValidacaoException
  e Repositorio (singleton com D1–D4, regras RN, exclusão polimórfica). `util/Formatador` (R$ e quantidade).
  Teste `src/test/java/.../TesteModel.java`: 52/52 OK, com os números do BDD (92,00 → 103,00 → 82,80).
  Compila sem avisos. Próximo: Fase 2 (controllers de cadastro), Fase 4 (Gson/JSON).
- (03/11) Navegação conferida e botões provisórios: `util/Mensagem` (informar, emDesenvolvimento).
  Os 9 botões ainda sem função mostram "Função em desenvolvimento...". Teste clicando nos botões:
  20/20 OK. Sem commit.
