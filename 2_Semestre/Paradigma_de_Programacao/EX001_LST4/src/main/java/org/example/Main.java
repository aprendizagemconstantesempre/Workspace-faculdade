package org.example;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        // Criando os objetos para exibi-los em tela
        Carro meuCarro = new Carro("Ford", "Ranger", 2026, 4);
        Moto minhaMoto = new Moto("Honda", "Titan", 2027, 350);

        // Exibindo informações do Carro
        System.out.println("Informações do Carro.");
        meuCarro.exibirinformacoescomuns();
        System.out.println();

        // Exibindo informações da Moto
        System.out.println("Informações da Moto.");
        minhaMoto.exibirinformacoescomuns();
        System.out.println();
    }
}
