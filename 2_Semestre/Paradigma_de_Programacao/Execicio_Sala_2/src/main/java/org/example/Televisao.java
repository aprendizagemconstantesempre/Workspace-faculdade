package org.example;

// Atributos
public class Televisao {
    public double polegada;
    public String marca;
    public String cor;

    // Construtor
    public Televisao (double polegada, String marca, String cor) {
        this.cor = cor;
        this.polegada = polegada;
        this.marca = marca;
    }

    public void ligar(){
        System.out.println("Ligou...");
    }

    public void desligar(){
        System.out.println("Desligar...");
    }

    public void exibirDetalhes(){
        System.out.println("Marca: " + marca + "\nPolegadas: " + polegada + "\nCor: " + cor);
    }

}
