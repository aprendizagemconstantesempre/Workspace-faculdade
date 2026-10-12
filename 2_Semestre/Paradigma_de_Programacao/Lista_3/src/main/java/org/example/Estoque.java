package org.example;

import java.util.ArrayList;

public class Estoque {

    // Boas Praticas: usamos uma lista para guardar vários produtos dentro do estoque
    private ArrayList<Produto> produtos = new ArrayList<>();

    public void adicionarProduto(Produto produto) {
        produtos.add(produto);
    }

    public boolean verificarDisponibilidade(String nome) {
        for (Produto produto : produtos) {
            if (produto.getNome().equalsIgnoreCase(nome) && produto.getQuantidade() > 0) {
                return true;
            }
        }
        return false;
    }
}