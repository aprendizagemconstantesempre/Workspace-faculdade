package org.example;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    static void main() {
        Televisao tv = new Televisao(55.5, "Xiaomi", "Azul");
        System.out.println("\n");
        System.out.println("Exercício de Sala - Revisão de construtor");
        System.out.println("Aguinaldo Alves");
        System.out.println("\n");
        tv.ligar();
        tv.desligar();
        tv.exibirDetalhes();

        }
    }
