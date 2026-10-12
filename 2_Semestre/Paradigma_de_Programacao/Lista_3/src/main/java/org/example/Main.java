package org.example;

public class Main {

    static void main() {
        System.out.println("***** LISTA DE EXERCÍCIOS 2: POO *****\n");

        // 1, 3 e 4. Criando objetos Carro com construtor
        System.out.println("--- Carro ---");
        Carro carro1 = new Carro("Toyota", "Corolla", 2022);
        Carro carro2 = new Carro("Fiat", "Uno", 2015);
        Carro carro3 = new Carro("Ford", "Ka", 1885); // Vai disparar a validação do setAno

        carro1.exibirInformacoes();
        carro2.exibirInformacoes();
        carro3.exibirInformacoes();
        System.out.println("");

        // 8 e 9. Pessoa com encapsulamento e validação de idade
        System.out.println("--- Pessoa ---");
        Pessoa pessoa1 = new Pessoa("Aguinaldo Alves", 54, 1.75);
        pessoa1.exibirInformacoes();
        System.out.println("");

        // 10 e 24. ContaBancaria com validação de saque
        System.out.println("--- ContaBancaria ---");
        ContaBancaria conta = new ContaBancaria("Aguinaldo", 100.0);
        conta.depositar(50.0);
        conta.sacar(200.0); // Vai acusar saldo insuficiente
        conta.sacar(80.0);
        System.out.println("Saldo final: R$" + conta.getSaldo());
        System.out.println("");

        // 11, 15. Produto e contador static
        System.out.println("--- Produto ---");
        Produto produto1 = new Produto("Teclado", 150.0, 10);
        Produto produto2 = new Produto("Mouse", 80.0, 5);
        produto1.exibirInformacoes();
        produto2.exibirInformacoes();
        System.out.println("Total de produtos criados: " + Produto.totalProdutos);
        System.out.println("");

        // 13. ProdutoEletronico acessando o atributo protected
        System.out.println("--- ProdutoEletronico ---");
        ProdutoEletronico notebook = new ProdutoEletronico("Notebook", 3500.0, 3, 101);
        notebook.exibirInformacoes();
        notebook.exibirCodigo();
        System.out.println("Total de produtos criados agora: " + Produto.totalProdutos);
        System.out.println("");

        // 16, 17, 19. Herança com Animal, Cachorro e Gato
        System.out.println("--- Animal ---");
        Cachorro rex = new Cachorro("Rex", 3);
        Gato mimi = new Gato("Mimi", 2);
        rex.emitirSom();
        mimi.emitirSom();
        System.out.println("");

        // 20. Funcionario, Gerente e Programador
        System.out.println("--- Funcionario ---");
        Gerente gerente = new Gerente("Carlos", 8000.0);
        Programador programador = new Programador("Marina", 6000.0);
        System.out.println(gerente.getNome() + " é gerente e ganha R$" + gerente.getSalarioBase());
        System.out.println(programador.getNome() + " é programador(a) e ganha R$" + programador.getSalarioBase());
        System.out.println("");

        // 21. Cliente e Pedido
        System.out.println("--- Cliente e Pedido ---");
        Cliente cliente = new Cliente("João", "joao@email.com");
        Pedido pedido = new Pedido(cliente, 250.0);
        pedido.exibirDados();
        System.out.println("");

        // 22. Retangulo
        System.out.println("--- Retangulo ---");
        Retangulo retangulo = new Retangulo(5, 3);
        System.out.println("Área: " + retangulo.calcularArea());
        System.out.println("Perímetro: " + retangulo.calcularPerimetro());
        System.out.println("");

        // 23. Aluno
        System.out.println("--- Aluno ---");
        Aluno aluno = new Aluno("Beatriz", "2024001", 8.5, 7.0);
        System.out.println(aluno.getNome() + " tem média: " + aluno.calcularMedia());
        System.out.println("");

        // 25. Estoque
        System.out.println("--- Estoque ---");
        Estoque estoque = new Estoque();
        estoque.adicionarProduto(produto1);
        estoque.adicionarProduto(produto2);
        System.out.println("Teclado disponível? " + estoque.verificarDisponibilidade("Teclado"));
        System.out.println("Cadeira disponível? " + estoque.verificarDisponibilidade("Cadeira"));
    }
}