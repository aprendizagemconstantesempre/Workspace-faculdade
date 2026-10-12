package org.example;

public class Pessoa {

    private String nome;
    private int idade;
    private double altura;

    public Pessoa(String nome, int idade, double altura) {
        this.nome = nome;
        setIdade(idade);
        this.altura = altura;
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

    // 9. Validação: não permitir idade negativa
    public void setIdade(int idade) {
        if (idade < 0) {
            System.out.println("Idade inválida! Não é permitido valor negativo.");
        } else {
            this.idade = idade;
        }
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public void exibirInformacoes() {
        System.out.println("Nome: " + nome + " | Idade: " + idade + " | Altura: " + altura + "m");
    }
}