package org.example;

// Classe pai - Generica
// Utilizar o protected porque assim as filhas conseguem acessar os objetos diretamente.
public class Veiculo {
    protected String Marca;
    protected String Modelo;
    protected int Ano;

    // Construtor
    public Veiculo (String Marca, String Modelo, int Ano) {
        this.Marca = Marca;
        this.Modelo = Modelo;
        this.Ano = Ano;
    }

    // Exibição das informações comuns entre as classes
    public void exibirinformacoescomuns() {
        System.out.println("Marca: " + this.Marca);
        System.out.println("Modelo: " + this.Modelo);
        System.out.println("Ano: " + this.Ano);
    }
}
