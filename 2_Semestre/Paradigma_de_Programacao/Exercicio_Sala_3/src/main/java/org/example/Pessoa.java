package org.example;

public class Pessoa {

    // Atributos privados (encapsulamento)
    private String nome;
    private int idade;

    // Construtor: inicializa o objeto já na criação
    public Pessoa(String nomeRecebido, int idadeRecebida) {
        nome = nomeRecebido;

        // Validação simples dentro do construtor
        if (idadeRecebida >= 0) {
            idade = idadeRecebida;
        } else {
            idade = 0;
            System.out.println("Idade inválida, definida como 0");
        }
    }

    // Getter do atributo nome
    public String getNome() {
        return nome;
    }

    // Setter do atributo nome
    public void setNome(String nomeRecebido) {
        nome = nomeRecebido;
    }

    // Getter do atributo idade
    public int getIdade() {
        return idade;
    }

    // Setter do atributo idade, com validação
    public void setIdade(int idadeRecebida) {
        if (idadeRecebida >= 0) {
            idade = idadeRecebida;
        } else {
            System.out.println("Idade inválida");
        }
    }

    // Método que usa os atributos do objeto
    public void falar() {
        System.out.println("Olá, meu nome é " + nome + " e tenho " + idade + " anos");
    }

    // Método que devolve um valor calculado
    public int calcularIdadeEmMeses() {
        return idade * 12;
    }
}
