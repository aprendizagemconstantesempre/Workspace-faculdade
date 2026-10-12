package org.example;

public class Main {

    public static void main(String[] args) {

        // Criação de objetos usando o construtor
        Pessoa carlos = new Pessoa("Carlos", 30);
        Pessoa fernanda = new Pessoa("Fernanda", 22);

        // Chamando o método falar() de cada objeto
        carlos.falar();
        fernanda.falar();

        // Usando os getters para ler valores
        System.out.println("Nome do Carlos: " + carlos.getNome());
        System.out.println("Idade da Fernanda: " + fernanda.getIdade());

        // Usando o setter para alterar um valor
        carlos.setIdade(31);
        System.out.println("Nova idade do Carlos: " + carlos.getIdade());

        // Testando a validação do setter com um valor inválido
        fernanda.setIdade(-5);

        // Usando o método que devolve um valor calculado
        int mesesCarlos = carlos.calcularIdadeEmMeses();
        System.out.println("Carlos tem " + mesesCarlos + " meses de vida");
    }
}