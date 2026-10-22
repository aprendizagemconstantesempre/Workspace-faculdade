package org.example;

public class Moto extends Veiculo {

    // Atributo que só faz sentido para objeto
    protected int cilindradas;

    // Construtor
    public Moto (String Marca, String Modelo, int Ano, int cilindradas) {

        // Chamando o construtor do Pai
        super (Marca, Modelo, Ano);

        // Tratando somente o atributo que faz sentido para Moto
        this.cilindradas = cilindradas;
    }

    @Override
    public void exibirinformacoescomuns() {
        super.exibirinformacoescomuns();
        System.out.println("Cilindradas: " + this.cilindradas);
    }
}
