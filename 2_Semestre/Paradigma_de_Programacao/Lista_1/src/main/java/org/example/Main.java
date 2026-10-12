import java.util.Scanner;

// Classe principal, é daqui que a gente chama cada exercício pra rodar
// e mostrar o resultado no console.
public class Main {
    public static void main(String[] args) {
        // Criamos um único Scanner e reaproveitamos ele nos exercícios que
        // pedem entrada do usuário (5, 6 e 7), pra não ter conflito abrindo
        // e fechando o System.in várias vezes.
        Scanner scanner = new Scanner(System.in);

        // Chamamos cada exercício na ordem, usando as classes internas
        // que ficam guardadas no arquivo Exercicios.java
        Exercicios.Exercicio1.executar();
        Exercicios.Exercicio2.executar();
        Exercicios.Exercicio3.executar();
        Exercicios.Exercicio4.executar();
        Exercicios.Exercicio5.executar(scanner);
        Exercicios.Exercicio6.executar(scanner);
        Exercicios.Exercicio7.executar(scanner);
        Exercicios.Exercicio8.executar();

        // Fechamos o Scanner só no final, depois que todos os exercícios
        // que precisavam de entrada já terminaram de usá-lo.
        scanner.close();
    }
}