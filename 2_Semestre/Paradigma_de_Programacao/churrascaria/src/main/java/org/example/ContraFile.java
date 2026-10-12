package org.example;

public class ContraFile extends Carne {

    ContraFile(String ponto, double peso, String corte) {
        // Referencia a classe pai
        super(ponto, peso, corte);
    }

    // Polimorfismo
    @Override

    public void assar(){
        System.out.println("Tempo para ficar ao ponto é 30 minutos.");
    }


}
