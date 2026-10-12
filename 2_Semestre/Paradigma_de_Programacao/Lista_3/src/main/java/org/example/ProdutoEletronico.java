package org.example;

public class ProdutoEletronico extends Produto {

    public ProdutoEletronico(String nome, double preco, int quantidade, int codigo) {
        super(nome, preco, quantidade); // Boas Praticas: reaproveita o construtor da superclasse
        this.codigo = codigo; // Funciona porque "codigo" é protected, e estamos numa subclasse
    }

    public void exibirCodigo() {
        System.out.println("Código do produto: " + codigo);
    }
}