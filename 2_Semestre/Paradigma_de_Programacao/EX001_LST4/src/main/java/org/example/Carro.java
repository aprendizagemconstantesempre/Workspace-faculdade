package org.example;

public class Carro extends Veiculo {

    // Atributo que só faz sentido para objeto Carro
    private int quantidadeportas;

    // Construtor
    public Carro (String Marca, String Modelo, int Ano, int quantidadeportas) {

        // Chamando o construtor do pai
        super (Marca, Modelo, Ano);

        // Tratando somente o atributo que faz sentido para Carro
        this.quantidadeportas = quantidadeportas;
    }

    // Override reescreve o método do pai para acrescentar a informação comuns entre as classes
    @Override
    public void exibirinformacoescomuns() {
        // Exibindo o que o pai já sabe
        super.exibirinformacoescomuns();
        System.out.println("Quantidade de Portas: " + this.quantidadeportas);

    }


}
