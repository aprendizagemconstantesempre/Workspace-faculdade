package org.example;

public class Cachorro extends Animal {

    // 19. super() chama o construtor da classe Animal
    public Cachorro(String nome, int idade) {
        super(nome, idade);
    }

    // 17. Sobrescrita do método emitirSom()
    @Override
    public void emitirSom() {
        System.out.println(getNome() + " está latindo!");
    }
}