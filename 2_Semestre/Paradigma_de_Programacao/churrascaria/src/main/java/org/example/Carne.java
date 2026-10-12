package org.example;

public abstract class Carne {

    public String ponto;
    public double peso;
    public String corte;

    Carne(String ponto, double peso, String corte) {
        this.ponto = ponto;
        this.peso = peso;
        this.corte = corte;
    }

    // Metodo abstrato
    public abstract void assar();

    // Metodo concreto
    public void temperar() {
        System.out.println("Temperando...");
    }


}
