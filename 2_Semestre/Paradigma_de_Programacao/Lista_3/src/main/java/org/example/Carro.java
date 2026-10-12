package org.example;

public class Carro {

    // Boas Praticas: atributos privados, protegidos pelo encapsulamento (exercício 5)
    private String marca;
    private String modelo;
    private int ano;

    // 4. Construtor que recebe marca, modelo e ano
    public Carro(String marca, String modelo, int ano) {
        this.marca = marca;
        this.modelo = modelo;
        setAno(ano); // Boas Praticas: usamos o setter para já aplicar a validação do exercício 7
    }

    // 6. Getters e setters
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAno() {
        return ano;
    }

    // 7. Validação em setter: não aceitar ano anterior a 1886 (ano do primeiro automóvel)
    public void setAno(int ano) {
        if (ano < 1886) {
            System.out.println("Ano inválido! Não é possível cadastrar um carro anterior a 1886.");
        } else {
            this.ano = ano;
        }
    }

    // 2. Método que imprime os atributos do carro
    public void exibirInformacoes() {
        System.out.println("Marca: " + marca + " | Modelo: " + modelo + " | Ano: " + ano);
    }
}
