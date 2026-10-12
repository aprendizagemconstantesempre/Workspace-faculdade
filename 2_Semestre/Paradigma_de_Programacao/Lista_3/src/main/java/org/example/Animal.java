package org.example;

public class Animal {

    private String nome;
    private int idade;

    public Animal(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    // Boas Praticas: método genérico que as subclasses vão sobrescrever
    public void emitirSom() {
        System.out.println(nome + " emitiu um som genérico.");
    }
}