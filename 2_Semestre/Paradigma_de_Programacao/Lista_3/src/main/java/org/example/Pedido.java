package org.example;

public class Pedido {

    // Boas Praticas: aqui um objeto Cliente é atributo de Pedido, isso se chama associação entre classes
    private Cliente cliente;
    private double valorTotal;

    public Pedido(Cliente cliente, double valorTotal) {
        this.cliente = cliente;
        this.valorTotal = valorTotal;
    }

    public void exibirDados() {
        System.out.println("Cliente: " + cliente.getNome() + " (" + cliente.getEmail() + ") | Pedido no valor de: R$" + valorTotal);
    }
}