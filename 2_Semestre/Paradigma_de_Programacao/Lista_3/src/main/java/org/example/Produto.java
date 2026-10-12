package org.example;

public class Produto {

    private String nome;
    private double preco;
    private int quantidade;

    // 13. Atributo protected: acessível na própria classe, subclasses e mesmo pacote
    protected int codigo;

    // 14. Atributo sem modificador (default): acessível apenas dentro do mesmo pacote
    String categoria;

    // 15. Atributo static: pertence à classe, não a um objeto específico
    // Boas Praticas: contadores globais são um bom caso de uso para static
    public static int totalProdutos = 0;

    public Produto(String nome, double preco, int quantidade) {
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
        totalProdutos++; // Incrementa toda vez que um novo Produto é criado
    }

    public String getNome() {
        return nome;
    }

    public double getPreco() {
        return preco;
    }

    public int getQuantidade() {
        return quantidade;
    }

    // Métodos public para manipular o estoque
    public void adicionarEstoque(int quantidade) {
        this.quantidade = this.quantidade + quantidade;
    }

    public void removerEstoque(int quantidade) {
        if (quantidade > this.quantidade) {
            System.out.println("Quantidade insuficiente em estoque.");
        } else {
            this.quantidade = this.quantidade - quantidade;
        }
    }

    public void exibirInformacoes() {
        System.out.println("Produto: " + nome + " | Preço: R$" + preco + " | Quantidade: " + quantidade);
    }
}