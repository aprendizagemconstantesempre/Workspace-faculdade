import java.util.Scanner;

public class Exercicios {

    // Exercício 1: Declaração e Inicialização de Tipos Primitivos
    // Aqui a ideia é só mostrar como declaramos e inicializamos cada um dos 8 tipos primitivos que o Java oferece.
    static class Exercicio1 {
        static void executar() {
            System.out.println("=== Exercício 1: Tipos Primitivos ===");

            // Tipos inteiros, do menor pro maior em termos de tamanho em memória
            byte umByte = 10;
            short umShort = 1000;
            int umInt = 100000;
            long umLong = 10000000000L; // o "L" no final indica que é um literal long

            // Tipos de ponto flutuante
            float umFloat = 3.14f; // o "f" no final indica que é um literal float
            double umDouble = 3.14159265358979;

            // Caractere e booleano
            char umChar = 'A';
            boolean umBoolean = true;

            // Agora imprimimos cada variável pra conferir se ficou tudo certo
            System.out.println("byte: " + umByte);
            System.out.println("short: " + umShort);
            System.out.println("int: " + umInt);
            System.out.println("long: " + umLong);
            System.out.println("float: " + umFloat);
            System.out.println("double: " + umDouble);
            System.out.println("char: " + umChar);
            System.out.println("boolean: " + umBoolean);
            System.out.println();
        }
    }

    // Exercício 2: Operações Aritméticas com Tipos Primitivos
    // Vamos somar, subtrair, multiplicar e dividir usando int, float e double para perceber como cada tipo se comporta nas operações.
    static class Exercicio2 {
        static void executar() {
            System.out.println("=== Exercício 2: Operações Aritméticas ===");

            // Operações com int
            int inteiroA = 10, inteiroB = 3;
            System.out.println("--- int ---");
            System.out.println("Soma: " + (inteiroA + inteiroB));
            System.out.println("Subtração: " + (inteiroA - inteiroB));
            System.out.println("Multiplicação: " + (inteiroA * inteiroB));
            // Divisão de int por int em Java é divisão inteira, então o resultado
            // aqui vai truncar a parte decimal (10 / 3 = 3, não 3.33...)
            System.out.println("Divisão: " + (inteiroA / inteiroB));

            // Operações com float
            float floatA = 10.0f, floatB = 3.0f;
            System.out.println("--- float ---");
            System.out.println("Soma: " + (floatA + floatB));
            System.out.println("Subtração: " + (floatA - floatB));
            System.out.println("Multiplicação: " + (floatA * floatB));
            System.out.println("Divisão: " + (floatA / floatB));

            // Operações com double
            double doubleA = 10.0, doubleB = 3.0;
            System.out.println("--- double ---");
            System.out.println("Soma: " + (doubleA + doubleB));
            System.out.println("Subtração: " + (doubleA - doubleB));
            System.out.println("Multiplicação: " + (doubleA * doubleB));
            System.out.println("Divisão: " + (doubleA / doubleB));
            System.out.println();
        }
    }

    // Exercício 3: Conversão de Tipos Primitivos
    // Aqui praticamos o casting entre tipos, sempre prestando atenção em quando isso causa perda de dados (overflow ou corte da parte decimal).
    static class Exercicio3 {
        static void executar() {
            System.out.println("=== Exercício 3: Conversão de Tipos ===");

            // int para byte
            // O byte só guarda valores de -128 a 127, então um int fora dessa
            // faixa "estoura" e o valor vira outra coisa completamente diferente.
            int intParaConverter = 130;
            byte byteConvertido = (byte) intParaConverter;
            System.out.println("int " + intParaConverter + " para byte: " + byteConvertido);
            System.out.println("-> Houve perda de dados: 130 não cabe em um byte (limite é 127),");
            System.out.println("   então o valor deu a volta (overflow) e virou " + byteConvertido + ".");

            // double para float
            // O float tem menos precisão que o double, então algumas casas
            // decimais podem ser arredondadas ou perdidas.
            double doubleParaConverter = 3.14159265358979;
            float floatConvertido = (float) doubleParaConverter;
            System.out.println("double " + doubleParaConverter + " para float: " + floatConvertido);
            System.out.println("-> Aqui perdemos precisão: o float guarda menos casas decimais");
            System.out.println("   que o double, então o número foi arredondado.");

            // float para int
            // Ao converter para int, a parte decimal é simplesmente descartada
            // (não arredonda, trunca mesmo).
            float floatParaConverter = 9.99f;
            int intConvertido = (int) floatParaConverter;
            System.out.println("float " + floatParaConverter + " para int: " + intConvertido);
            System.out.println("-> Perdemos toda a parte decimal: 9.99 virou 9, sem arredondar.");

            // long para short
            // O short vai de -32768 a 32767, então um long grande demais
            // também sofre overflow igual aconteceu no caso do byte.
            long longParaConverter = 100000L;
            short shortConvertido = (short) longParaConverter;
            System.out.println("long " + longParaConverter + " para short: " + shortConvertido);
            System.out.println("-> De novo temos overflow: 100000 é maior que o limite do short");
            System.out.println("   (32767), então o valor resultante fica bem diferente do original.");
            System.out.println();
        }
    }

    // Exercício 4: Comparação e Lógica com Tipos Primitivos
    // Vamos comparar dois inteiros com os operadores relacionais e depois montar expressões lógicas usando variáveis boolean.
    static class Exercicio4 {
        static void executar() {
            System.out.println("=== Exercício 4: Comparação e Lógica ===");

            int numeroA = 15, numeroB = 20;

            // Operadores de comparação entre dois inteiros
            System.out.println("numeroA = " + numeroA + ", numeroB = " + numeroB);
            System.out.println("numeroA > numeroB: " + (numeroA > numeroB));
            System.out.println("numeroA < numeroB: " + (numeroA < numeroB));
            System.out.println("numeroA == numeroB: " + (numeroA == numeroB));
            System.out.println("numeroA != numeroB: " + (numeroA != numeroB));

            // Agora criamos duas variáveis boolean pra testar os operadores lógicos
            boolean condicaoX = true;
            boolean condicaoY = false;

            System.out.println("condicaoX = " + condicaoX + ", condicaoY = " + condicaoY);
            // && (E lógico) só é true quando as duas condições são verdadeiras
            System.out.println("condicaoX && condicaoY: " + (condicaoX && condicaoY));
            // || (OU lógico) é true quando pelo menos uma das condições é verdadeira
            System.out.println("condicaoX || condicaoY: " + (condicaoX || condicaoY));
            // ! (negação) inverte o valor da condição
            System.out.println("!condicaoX: " + (!condicaoX));
            System.out.println("!condicaoY: " + (!condicaoY));
            System.out.println();
        }
    }

    // Exercício 5: Verificação de Número Par ou Ímpar
    // Aqui pedimos um número pro usuário digitar e usamos if-else para decidir se ele é par ou ímpar, olhando o resto da divisão por 2.
    static class Exercicio5 {
        static void executar(Scanner scanner) {
            System.out.println("=== Exercício 5: Par ou Ímpar ===");
            System.out.print("Digite um número inteiro: ");
            int numero = scanner.nextInt();

            // Se o resto da divisão por 2 for 0, o número é par.
            // Caso contrário, sobra 1 (ou -1 se for negativo) e o número é ímpar.
            if (numero % 2 == 0) {
                System.out.println(numero + " é par.");
            } else {
                System.out.println(numero + " é ímpar.");
            }
            System.out.println();
        }
    }

    // Exercício 6: Calculadora Simples
    // Pedimos dois números e a operação desejada, e usamos switch-case para decidir qual conta fazer.
    static class Exercicio6 {
        static void executar(Scanner scanner) {
            System.out.println("=== Exercício 6: Calculadora Simples ===");
            System.out.print("Digite o primeiro número: ");
            double numero1 = scanner.nextDouble();
            System.out.print("Digite o segundo número: ");
            double numero2 = scanner.nextDouble();

            System.out.println("Escolha a operação:");
            System.out.println("1 - Adição");
            System.out.println("2 - Subtração");
            System.out.println("3 - Multiplicação");
            System.out.println("4 - Divisão");
            System.out.print("Opção: ");
            int opcao = scanner.nextInt();

            double resultado;

            // O switch-case compara a variável "opcao" com cada um dos casos
            // e executa só o bloco correspondente.
            switch (opcao) {
                case 1:
                    resultado = numero1 + numero2;
                    System.out.println("Resultado: " + numero1 + " + " + numero2 + " = " + resultado);
                    break;
                case 2:
                    resultado = numero1 - numero2;
                    System.out.println("Resultado: " + numero1 + " - " + numero2 + " = " + resultado);
                    break;
                case 3:
                    resultado = numero1 * numero2;
                    System.out.println("Resultado: " + numero1 + " * " + numero2 + " = " + resultado);
                    break;
                case 4:
                    // Antes de dividir, checamos se o segundo número não é zero,
                    // porque divisão por zero em ponto flutuante daria "Infinity".
                    if (numero2 == 0) {
                        System.out.println("Não é possível dividir por zero.");
                    } else {
                        resultado = numero1 / numero2;
                        System.out.println("Resultado: " + numero1 + " / " + numero2 + " = " + resultado);
                    }
                    break;
                default:
                    System.out.println("Opção inválida.");
                    break;
            }
            System.out.println();
        }
    }

    // Exercício 7: Tabuada
    // Pedimos um número e usamos um for de 1 a 10 para montar a tabuada dele.
    static class Exercicio7 {
        static void executar(Scanner scanner) {
            System.out.println("=== Exercício 7: Tabuada ===");
            System.out.print("Digite um número inteiro: ");
            int numero = scanner.nextInt();

            // O for roda de i = 1 até i = 10, aumentando 1 a cada volta.
            for (int i = 1; i <= 10; i++) {
                System.out.println(numero + " x " + i + " = " + (numero * i));
            }
            System.out.println();
        }
    }

    // Exercício 8: Contagem Regressiva
    // Aqui usamos um while para contar de 10 até 1 e no final mostramos a mensagem de Ano Novo.
    static class Exercicio8 {
        static void executar() {
            System.out.println("=== Exercício 8: Contagem Regressiva ===");
            int contador = 10;

            // Enquanto o contador for maior ou igual a 1, continuamos imprimindo e diminuindo o valor em 1 a cada volta.
            while (contador >= 1) {
                System.out.println(contador);
                contador--;
            }
            System.out.println("Feliz Ano Novo!");
            System.out.println();
        }
    }
}