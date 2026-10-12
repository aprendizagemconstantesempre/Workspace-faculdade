package org.example;

public class Caneta {
    public String cor;
    public double calibre;
    public String marca;

    // Construtor - inicializa as variáveis
    public Caneta (String cor, double calibre, String marca) {
        this.cor = cor;
        this.calibre = calibre;
        this.marca = marca;
    }

    public void escrever() {
        System.out.println();
        System.out.println("Escrevendo...");
        System.out.println();
        System.out.println("Caneta da cor: " + this.cor + " " + "com calibre: " + this.calibre + " " + "da marca: " + this.marca);
    }


}
